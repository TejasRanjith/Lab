import java.io.*;
import java.util.Scanner;
public class Palindrome
{
	public static void main(String[] args)
	{
		int i=0,n=0,cond=0;
		Scanner s= new Scanner(System.in);
		System.out.print("Enter the String :");
		String str=s.next();
		n = str.length();
		for(i=0;i<n;i++)
		{
			if (i!=n-i-1)
			{
				if (str.charAt(i) == str.charAt(n-i-1))
				{
					cond=1;
				}
				else
				{
					cond=0;
				}
			}
				
		}
		if(cond==1)
		{
			System.out.print("It is a Palindrome.\n");
		}
		else
		{
			System.out.print("It is not a Palindrome.\n");
		}
		
	}
}
