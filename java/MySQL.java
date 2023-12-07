import java.sql.*;
public class MySQL
{
    public static void main(String args[])
    {
        try 
        {
        // Register JDBC driver
            Class.forName("com.mysql.cj.jdbc.Driver");
        //Open a connection
            Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/","tejas","035611");
        //Create a statement object
            Statement st=con.createStatement(); 
            st.execute("CREATE DATABASE base1;");
            st.execute("USE base1;");
            st.execute("CREATE TABLE s3ad(roll int,Age int, Name varchar(15))");
            st.execute("INSERT INTO s3ad VALUES (1,18,'Tejas')");
            st.execute("INSERT INTO s3ad VALUES (2,50,'Ranjith')");
            System.out.println("Table created"); 
            con.close(); //Close the connection
        }
        catch(SQLException e) 
        {
            System.out.println("Error is " +e); 
        }
        catch(ClassNotFoundException e) 
        {
            System.out.println("Error is " +e); 
        }
    }
}