class Employee
{
String name,address;
int age,number,salary;
String a1,e1;
 int c1,d1,b1;
     Employee(String a1, int b1,int c1,int d1, String e1)
     {
		 
		 name=a1;
		 age=b1;
		 number=c1;
		 salary=d1;
		 address=e1;
		 
	 }
 void printSalary( )
       {
		 System.out.println("Salary is "+ salary);
       }
  }

class Officer extends Employee
{
	String specialization;
	
	 Officer(String a, int b,int c,int d, String e,String f)
	 	 {
		 
		 
         super(a,b,c,d,e);
		 
		 specialization=f;
		 
	     }
	 void print()
	 {
		 System.out.println("Name is "+ name);
		 System.out.println("Age is "+ age);
		 System.out.println("Number is "+ number);
         super.printSalary();
		 System.out.println("Address is "+ address);
		 System.out.println("Specialization is "+ specialization);
		 
	 }
}

class Manager extends Employee
{
	String department;
	Manager(String a, int b,int c,int d, String e,String f)
	 {
		 super(a,b,c,d,e);
		 department=f;
		 
	 }
	 void print()
	 {
		 System.out.println("Name is "+ name);
		 System.out.println("Age is "+ age);
		 System.out.println("Number is "+ number);
		 super.printSalary();
		 System.out.println("Address is "+ address);
		 System.out.println("Department is "+ department);
     }
}

class Office
{
	public static void main (String [] args)
	{
		Officer a1 = new Officer("may",29,1221221111,65000,"c1 nagar-palakkad","Cyber security");
		a1.print();
		System.out.println();
		Manager b1 = new Manager("june",45,152678960,93000,"c5 nagar-palakkad","Human Resource");
		b1.print();
	}
}
