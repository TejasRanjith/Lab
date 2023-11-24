import java.io.*;
import java.util.Scanner;
class MultiThreading
{
     public static void main(String[] args)
     {
        Scanner s= new Scanner(System.in);
		System.out.print("Enter the Number 1 :");
		int num1=s.nextInt();
		System.out.print("Enter the Number 2 :");
		int num2=s.nextInt();
        TestThread t1=new TestThread(1,num1,num2);
        TestThread t2=new TestThread(2,num1,num2);
        t1.setName("SUM t1");
		t2.setName("DIFFERENCE t2");
        t1.start();
        t2.start();
    }
}
class TestThread extends Thread
{  
   int k=0;
   int n1=0;
   int n2=0;
   TestThread(int a,int num1,int num2)
   {
     this.k=a;
     this.n1=num1;
     this.n2=num2;
   }
 public void run()
   {
     if(k==1)            
     {
	    System.out.println(Thread.currentThread()+"    "+n1+" + "+n2+" = "+(n1+n2));
     }
     else
     {
        System.out.println(Thread.currentThread()+"    "+n1+" - "+n2+" = "+(n1-n2));
     }
   }
}



