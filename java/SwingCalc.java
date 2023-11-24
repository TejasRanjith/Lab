import javax.swing.*;  
import java.awt.event.*;  

public class SwingCalc extends JFrame implements ActionListener
{  
        JTextField tf1,tf2,tf3;  
        JButton b1,b2,b3,b4;  
        SwingCalc()
		{  
            tf1=new JTextField();  
            tf1.setBounds(50,50,270,30);  
            tf2=new JTextField();  
            tf2.setBounds(50,100,270,30);  
            tf3=new JTextField();  
            tf3.setBounds(50,150,270,30);  
            tf3.setEditable(false);   
            b1=new JButton("+");  
            b1.setBounds(50,200,60,50);  
            b2=new JButton("-");  
            b2.setBounds(120,200,60,50);  
            b3=new JButton("*");  
            b3.setBounds(190,200,60,50); 
            b4=new JButton("/");  
            b4.setBounds(260,200,60,50); 
            b1.addActionListener(this);  
            b2.addActionListener(this);  
            b3.addActionListener(this);  
            b4.addActionListener(this);  
            add(tf1);add(tf2);add(tf3);add(b1);add(b2);add(b3);add(b4);
            setSize(500,500);  
            setLayout(null);  
            setVisible(true);  
        }         
        public void actionPerformed(ActionEvent e)
	    {  
            String s1=tf1.getText();  
            String s2=tf2.getText();  
            int a=Integer.parseInt(s1);  
            int b=Integer.parseInt(s2);  
            int c=0;  
            if(e.getSource()==b1)
            {  
                c=a+b;  
            }
            else if(e.getSource()==b2)
            {  
                c=a-b;  
            }
            else if(e.getSource()==b3)
            {
				c=a*b;
			}
			else if(e.getSource()==b4)
			{
				c=a/b;
			}
            String result=" "+c;
            tf3.setText(result);  
        }  
	    public static void main(String[] args) 
	   {  
		  SwingCalc calc=new SwingCalc();  
       } 
}  
