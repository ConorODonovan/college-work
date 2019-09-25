public class Rectangle extends Shape {
	
	int length;
	int width;
	
	protected Rectangle(int l, int w) {
		length = l;
		width = w;
	}
	
	public int getLenght() {
		return length;
	}
	
	public int getWidth() {
		return width;
	}
	
	public double calcArea() {
		double area;
		area = length * width;
		
		return area;
	}
}