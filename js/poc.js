(function () { "use strict";
var mendel = {}
mendel.Poc = function() { }
mendel.Poc.main = function() {
	console.log(mendel.Poc.DataInOut("haxe to haxe"));
}
mendel.Poc.DataInOut = function(val) {
	return "You passed a string (" + val + ") to me!";
}
mendel.Poc.main();
})();
