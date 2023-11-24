import java.io.*;
import java.util.Scanner;
public class Frequency
{
	public static void main(String[] args)
	{
		int i=0,n=0,count=0;
		Scanner s= new Scanner(System.in);
		System.out.print("Enter the String :");
		String str=s.nextLine();
		System.out.print("Enter the Character to be counted :");
		String in=s.next();
		char sub=in.charAt(0);
		n=str.length();
		for(i=0;i<n;i++)
		{
			if (str.charAt(i) == sub)
			{
				count++;
			}
		}
		System.out.println("No. of '"+in+"' in the word is : "+count);
	}
}
