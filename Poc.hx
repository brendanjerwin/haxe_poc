class Poc {
    static public function main():Void {
        trace(Poc.DataInOut("haxe to haxe"));
    }

    static public function DataInOut(val:String):String {
        return 'You passed a string ($val) to me!';
    }
}
