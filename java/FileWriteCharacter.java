import java.util.Scanner;
import java.io.*;
public class FileWriteCharacter
{
	public static void main(String args[])throws IOException
	{
		FileWriter fw = new FileWriter("output.txt");
		fw.write("Tejas");
		fw.close();
	}
}
