import java.util.*;

class DoubleLink
{
	public static void main(String ar[])
	{
		Scanner s=new Scanner(System.in);
		LinkedList<String> ll =new LinkedList<String>();
		int choice;
		int flag=0;
		System.out.println("    MENU\n1. Add \n2. Delete \n3. Display \n4. Exit");
		do
		{
			System.out.println("Enter Your Choice : ");
			choice =s.nextInt();
			switch(choice)
			{
				case 1 : 
				System.out.println("Enter the Value : ");
				ll.add(s.next());
				break;	   
				case 2 : 
				if(ll.size()==0)
				{
				System.out.println("List is Empty....");
				}
				else
				{
					System.out.println("Enter the Element to be Deleted : ");
					String a =s.next();
					if(ll.contains(a))
					{
						ll.remove(a);
						System.out.println("Element has been deleted....");
					}
					else
					{
						System.out.println("List does not contain the Element...");
					}  
				}
				break;
				case 3: 
				if(ll.size()!=0)
				{
					Iterator i = ll.iterator ();
					System.out.print("| ");
					while(i.hasNext())
					{
						System.out.print(i.next()+" | ");
					}
					System.out.print("\n");
				}
				else
				{
					System.out.println("Th Given list is Empty...");
				}
				break;
				case 4: 
				flag=1;
				System.out.println("Thank you for using the program.... :)");
				break;	   
				default :    
				System.out.println("Invalid Input...");		   
			 }
		}while(flag==0);
	}
}
