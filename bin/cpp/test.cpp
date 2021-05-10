#include <iostream>
#include <Main.h>

int main(int argc, char const *argv[])
{
    hx::Init();

    // this works
    Main *myMain = new Main();
    std::cout << myMain->mPtr->randomFunction() << '\n';

    // this causes Segmentation fault
    // Array<int> *array = new Array<int>();
    // Array<int> array = Array<int>(); // not sure if this should be the rigth way
    // array->Add(1);
    // array->mPtr->Add(1);

    // undefined reference to `hx::Object::__EnumParams()'
    Array<int> *array = new Array<int>(25, 25);
    // Array<int> array = Array<int>(25,25);

    // myMain->mPtr->getArrayLength(array);
}
