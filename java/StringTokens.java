import java.io.*;
import java.util.*;
class StringTokens
{
	public static void main(String ar[])
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the numbers");
		String a = s.nextLine();
		int n,sum=0;
		StringTokenizer st = new StringTokenizer(a);
		while(st.hasMoreTokens())
		{
			String v =st.nextToken();
			n=Integer.parseInt(v);
			System.out.println(n);
			sum=sum + n;
		}
		System.out.print("sum is "+sum+".");
	}
}
