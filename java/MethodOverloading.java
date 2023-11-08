import java.io.*;
import java.util.Scanner;

public class MethodOverloading
{
	public static void main (String arg[])
	{
		MethodOverloading m=new MethodOverloading();
		m.area(10);
		m.area(10f);
		m.area(10,20);
		m.area(10.2f,20.2f);
	}
	void area (double r)
	{
		double circle = 3.14*r;
		System.out.println("Area of a circle:"+circle);
	}
	void area (int r)
	{
		int square = r*r;
		System.out.println("Area of a square:"+square);
	}
	void area(int l,int w)
	{
		int rectangle = l*w;
		System.out.println("Area of a rectangle:"+rectangle);
	}
	void area (double b,double h)
	{
		double triangle = 0.5*b*h;
		System.out.println("Area of a triangle:"+triangle);
	}
}
