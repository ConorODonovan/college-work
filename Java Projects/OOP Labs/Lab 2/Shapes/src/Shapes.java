/**
* DT249 - Year 2 - Semester 1
* Conor O'Donovan
* Lab 2
* Simple project to show how classes and inheritance works
* Create a 'Shapes' class, and then a 'Circle', 'Square', and 'Rectangle' class that inherit from 'Shape'
*/

public class Shapes {
	public static void main(String[] args) {
		
		Circle myCircle = new Circle(4); // Creates a new 'Circle' instance with a radius of 4
		double areaCircle = myCircle.calcArea(); // Calculates the area of this circle
		System.out.println("The area of my circle is " + areaCircle);
		
		Circle myCircle2 = new Circle(); // Creates a second 'Circle' instance. As no radius amount is passed, it defaults to 5
		double areaCircle2 = myCircle2.calcArea(); // Calculates the area of this second circle
		System.out.println("The area of my second circle is " + areaCircle2);
		
		Square mySquare = new Square(12,400); // Creates a new 'Square' instance with a length of 12 and an opacity of 400
		double areaSquare = mySquare.calcArea(); // Calculates the area of this square
		System.out.println("The area of my square is " + areaSquare);
		System.out.println("The opacity of my square is " + mySquare.getOpacity());
		
		Rectangle myRectangle = new Rectangle(8,20); // Creates a new 'Rectangle' instance with a length of 8 and a width of 20
		double areaRectangle = myRectangle.calcArea(); // Calculates the ares of this rectangle
		System.out.println("The area of my rectangle is " + areaRectangle);
		
		System.out.println("Opacity of circle is " + myCircle.getOpacity());
	}
}
