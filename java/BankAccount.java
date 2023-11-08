import java.io.*;
import java.util.Scanner;

class BankAccount
{
	String accName="";
	String accNo="";
	String type="";
	float balance;
	BankAccount(float bal,String name,String no,String typ)
	{
		balance=bal;
		accName=name;
		accNo=no;
		type=typ;
	}
	void display()
	{
		System.out.println("Balance : "+balance);
		System.out.println("Name : "+accName);
		System.out.println("Account No. : "+accNo);
		System.out.println("Type of Account : "+type);
		
	}
	void deposit()
	{
		Scanner s= new Scanner(System.in);
		System.out.print("Enter the Amount to be deposited :");
		float d=s.nextFloat();
		balance=balance+d;
		System.out.println(balance);
	}
	void withdraw()
	{
		Scanner s= new Scanner(System.in);
		System.out.print("Enter the Amount to be withdrawn :");
		float w=s.nextFloat();		
		balance=balance-w;
		if(balance<0)
		{
			System.out.println("Insufficient Balance...");
			balance=balance+w;
		}
		System.out.println(balance);
	}
	public static void main(String[] args)
	{
		int b=0;
		String n,number,t;
		Scanner s= new Scanner(System.in);
		System.out.print("Enter the Name of the Account Holder : ");
		n=s.next();
		System.out.print("Enter the Account Number : ");
		number=s.next();
		BankAccount p1 = new BankAccount(10000,n,number,"Savings");
		while(1==1)
		{
			System.out.println("\n1. Deposit");
			System.out.println("2. Withdraw");
			System.out.println("3. Display");
			System.out.println("4. Exit");
			System.out.print("\nEnter the Option : ");
			int opt=s.nextInt();
			if(opt==1)
			{
				System.out.print("\n");
				p1.deposit();
			}
			else if(opt==2)
			{
				System.out.print("\n");
				p1.withdraw();
			}
			else if(opt==3)
			{
				System.out.print("\n");
				p1.display();
			}
			else if(opt==4)
			{
				System.out.println("\nThank you for using program....");
				break;
			}
			else
			{
				System.out.println("Invalid Option");
			}
		}
	}
}
