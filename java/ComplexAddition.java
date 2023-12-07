import java.util.*;
import java.io.*;
class Complex
{
    int r,i,dummy;
    Complex()
    {
        dummy=0;
    }
    Complex(int a,int b)
    {
        r=a;
        i=b;
    }
    static Complex complexAdd(Complex o1,Complex o2)
    {
        Complex result=new Complex(o1.r+o2.r,o1.i+o2.i);
        return result;
    }
}

public class ComplexAddition
{
    public static void main(String args[])
    {
        Complex ans= new Complex();
        Complex obj1= new Complex(4,2);
        Complex obj2= new Complex(2,6);
        ans=Complex.complexAdd(obj1,obj2);
        System.out.println(ans.r+"+i"+ans.i);
    }
}