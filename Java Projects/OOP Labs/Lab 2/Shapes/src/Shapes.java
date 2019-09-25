public class Shapes {
	public static void main(String[] args) {
		
		Circle myCircle = new Circle(4);
		double areaCircle = myCircle.calcArea();
		System.out.println("The area of my circle is " + areaCircle);
		
		Circle myCircle2 = new Circle();
		double areaCircle2 = myCircle2.calcArea();
		System.out.println("The area of my second circle is " + areaCircle2);
		
		Square mySquare = new Square(12,400);
		double areaSquare = mySquare.calcArea();
		System.out.println("The area of my square is " + areaSquare);
		System.out.println("The opacity of my square is " + mySquare.getOpacity());
		
		Rectangle myRectangle = new Rectangle(8,20);
		double areaRectangle = myRectangle.calcArea();
		System.out.println("The area of my rectangle is " + areaRectangle);
		
		System.out.println("Opacity of circle is " + myCircle.getOpacity());
	}
}
