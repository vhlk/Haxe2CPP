import haxe.ds.Vector;

class Main {
    public static function getArrayLength(array: Vector<Vector<Float>>):Int {
        return array.length;
    }

    public static function randomFunction():Int {
        return Std.random(10);
    }
}