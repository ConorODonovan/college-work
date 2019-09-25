abstract class Shape {
	protected int opacity;
	
	public abstract double calcArea();
	
	protected Shape() {
		opacity = 100;
	}
	
	protected Shape(int opac) {
		opacity = opac;
	}
	
	public int getOpacity() {
		return opacity;
	}
}