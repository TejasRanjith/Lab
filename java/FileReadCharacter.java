import java.io.*;
public class FileReadCharacter
{
	public static void main(String args[])throws Exception
	{
		FileWriter fw = new FileWriter("output.txt");
		fw.write("Tejas");
		fw.close();
		FileReader fr = new FileReader("output.txt");
		int i = fr.read();
		while(i!=-1)
		{
			char c = (char)i;
			i=fr.read();
			System.out.print(c);
		}
		fr.close();
	}
}
