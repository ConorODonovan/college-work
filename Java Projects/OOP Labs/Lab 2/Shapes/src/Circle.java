public class Circle extends Shape {
	
	int radius;
	
	public Circle() {
		radius = 5;
	}
	
	public Circle(int r) {
		radius = r;
	}
	
	public double calcArea() {
		double area;
		area = radius * radius * Math.PI;
		return area;
	}
}