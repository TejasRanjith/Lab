import java.io.*;
 class FileHandling
{
	public static void main (String args[])throws Exception
	 {
		 FileReader fr = new FileReader("test.txt");
		 FileWriter fw = new FileWriter("result.txt");
		 String x="";
		 int i =fr.read();
		 while (i!=-1)
		  {
			  char c=(char)i;
			  x +=c;
			  //System.out.print(c);
			  i=fr.read();
		  }
		   fw.write(x);
		  fr.close();
		  fw.close();
	 }
}

