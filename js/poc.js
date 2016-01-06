(function () { "use strict";
var Poc = function() { }
Poc.main = function() {
	console.log(Poc.DataInOut("haxe to haxe"));
}
Poc.DataInOut = function(val) {
	return "You passed a string (" + val + ") to me!";
}
Poc.main();
})();
