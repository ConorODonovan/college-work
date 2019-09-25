public class Square extends Shape {
	
	int length;
	
	protected Square(int l) {
		length = l;
	}
	
	protected Square(int l, int o) {
		super(o);
		length = l;
	}
	
	public int getLength() {
		return length;
	}
	
	public double calcArea() {
		double area;
		area = length * length;
		
		return area;
	}
}