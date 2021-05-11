#include <iostream>
#include <hxcpp.h>
#include <Main.h>

extern "C" const char *hxRunLibrary();
extern "C" void hxcpp_set_top_of_stack();


int main(int argc, char const *argv[])
{
	hxcpp_set_top_of_stack();
 	const char *err = hxRunLibrary();
	if (err) {
		// Unhandled exceptions ...
		fprintf(stderr,"Error %s\n", err );
		return -1;
	}

    Main *myMain = new Main();
    hx::DynamicArray myArray2D = myMain->mPtr->createEmptyArray2D();
    Array<double> myArray1D = myMain->mPtr->createEmptyArray1D();
    myArray1D.Add(-1);
    myArray1D.Add(-2);
    myArray1D.Add(-3);
    myArray2D.Add(myArray1D);
    myArray2D.Add(myArray1D);
    myArray2D.Add(myArray1D);

    std::cout << myMain->mPtr->getArrayLength(myArray2D) << '\n';
    myMain->mPtr->printArrayElements(myArray2D);
}
