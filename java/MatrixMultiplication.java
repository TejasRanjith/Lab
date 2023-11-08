import java.io.*;
import java.util.Scanner;
public class MatrixMultiplication
{
	public static void main(String[] args)
	{
		int i=0,j=0;
		Scanner s= new Scanner(System.in);
		System.out.print("Enter the No. of rows:");
		int r=s.nextInt();
		System.out.print("Enter the No. of columns:");
		int c=s.nextInt();
		int a[][] = new int[r][c];
		int b[][] = new int[r][c];
		int result[][] = new int[r][c];
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				System.out.print("Enter the Elements Row-Wise of Matrix A : ");
				a[i][j]=s.nextInt();
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				System.out.print("Enter the Elements Row-Wise of Matrix B : ");
				b[i][j]=s.nextInt();
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				result[i][j]=(a[i][j])*(b[i][j]);
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				System.out.print(result[i][j]+" ");
			}
			System.out.println(" ");
		}
	}
}
