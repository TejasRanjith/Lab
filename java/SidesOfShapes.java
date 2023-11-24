abstract class Shape
{
	abstract void numberOfSides();
} 

class Rectangle extends Shape
{
	void numberOfSides()
	 {
		 System.out.println("Number of sides in a Rectangle is 4");
	 }
}

class Triangle extends Shape
{
	void numberOfSides()
	 {
		 System.out.println("Number of sides in a Triangle is 3");
	 }
}

class Hexagon extends Shape
{
	void numberOfSides()
	 {
		 System.out.println("Number of sides in a Hexagon is 6");
	 }
}

class SidesOfShapes
{
	public static void main (String [] args)
	 {
		 Rectangle r=new Rectangle();
		 Triangle t= new Triangle();
		 Hexagon h =new Hexagon();
		 r.numberOfSides();
		 t.numberOfSides();
		 h.numberOfSides();
		 
	 }
}
