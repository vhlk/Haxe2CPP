import haxe.io.Float32Array;
import haxe.ds.Vector;

class Main {
    public static function getArrayLength(array: Vector<Vector<Float>>):Int {
        return array.length;
    }

    public static function randomFunction():Int {
        return Std.random(10);
    }

    public static function createEmptyArray2D():Vector<Vector<Float>> {
        return new Vector<Vector<Float>>(0);
    }

    public static function createEmptyArray1D():Vector<Float> {
        return new Vector<Float>(0);
    }

    public static function printArrayElements(array: Vector<Vector<Float>>) {
        for (i in 0...array.length) {
            for (j in 0...array[i].length) {
                trace(array[i][j]);
            }
        }
    }
}