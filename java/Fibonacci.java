import java.io.*;
import java.util.Scanner;
public class Fibonacci
{
	public static void main(String[] args)
	{
		int a=0,b=1,c=0,i=0;
		Scanner s= new Scanner(System.in);
		System.out.print("Enter the Number :");
		int n=s.nextInt();
		//String x=s.next();
		System.out.print(a);
		for(i=1;b<n;i++)
		{
			c=b;
			b=a+b;
			a=c;
			if(b<n)
			{
				System.out.print(" , "+b);
			}
		}
		System.out.println("");
	}
}