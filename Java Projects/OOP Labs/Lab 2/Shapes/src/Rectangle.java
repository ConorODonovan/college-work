public class Rectangle extends Shape {
	
	/**
	 * Can take arguments for 'length' and 'width' or default them to 10 and 5
	 * Has method to calculate area
	 */
	
	int length;
	int width;
	
	protected Rectangle(int l, int w) {
		length = l;
		width = w;
	}
	
	protected Rectangle() {
		length = 10;
		width = 5;
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
