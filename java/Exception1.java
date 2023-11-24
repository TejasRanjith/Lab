import java.io.*;
import java.util.*;
class Exception1
{
	public static void main(String ar[])
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter values for a and b in equation a/b");
		int a =s.nextInt();
		int b=s.nextInt();
		int c;
		try
		{
		 c=a/b;
		 System.out.println(c);
	    }
	    
	    catch(ArithmeticException ex1)
	    {
			System.out.println("Division by zero is not allowed.");
		}
	
		finally
		{
			System.out.println("This is use of finally.");
			
		}
	}
}
