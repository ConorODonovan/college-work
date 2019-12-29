public class Circle extends Shape{
	
	private static final long serialVersionUID = 1L;
	private int radius;
	
	public Circle() {
		
		super();		
	}
	
	public Circle(int radius) {
		
		super();
		this.radius = radius;		
	}
	
	public Circle(int radius, int opacity) {
		
		super(opacity);
		this.radius = radius;
	}
	
	public int getRadius() {
		
		return radius;		
	}
	
	public void setRadius(int radius) {
		
		this.radius = radius;		
	}
	
	public double calcArea() {
		
		return Math.PI * radius * radius;		
	}
	
	public String toString() {
		
		return "This is a Circle with opacity " + getOpacity() + ", radius " + radius + " and area " + calcArea();		
	}

}
