package mendel;
import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public  class Poc extends haxe.lang.HxObject
{
	public    Poc(haxe.lang.EmptyObject empty)
	{
		{
		}
		
	}
	
	
	public    Poc()
	{
		mendel.Poc.__hx_ctor_mendel_Poc(this);
	}
	
	
	public static   void __hx_ctor_mendel_Poc(mendel.Poc __temp_me2)
	{
		{
		}
		
	}
	
	
	public static   void main()
	{
		haxe.Log.trace.__hx_invoke2_o(0.0, 0.0, mendel.Poc.DataInOut("haxe to haxe"), new haxe.lang.DynamicObject(new haxe.root.Array<java.lang.String>(new java.lang.String[]{"className", "fileName", "methodName"}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{"Poc", "Poc.hx", "main"}), new haxe.root.Array<java.lang.String>(new java.lang.String[]{"lineNumber"}), new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (((double) (4) )) )})));
	}
	
	
	public static   java.lang.String DataInOut(java.lang.String val)
	{
		return ( ( "You passed a string (" + val ) + ") to me!" );
	}
	
	
	public static   java.lang.Object __hx_createEmpty()
	{
		return new mendel.Poc(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static   java.lang.Object __hx_create(haxe.root.Array arr)
	{
		return new mendel.Poc();
	}
	
	
}


