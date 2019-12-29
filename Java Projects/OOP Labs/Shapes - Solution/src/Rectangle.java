public class Rectangle extends Shape{
	
	private static final long serialVersionUID = 1L;
	private int width, height;
	
	public Rectangle() {
		
		super();		
	}
	
	public Rectangle(int width, int height) {
		
		super();
		this.width = width;
		this.height = height;
	}
	
	public Rectangle(int width, int height, int opacity) {
		
		super(opacity);
		this.width = width;
		this.height = height;		
	}
	
	public int getWidth() {
		
		return width;		
	}
	
	public int getHeight() {
		
		return height;		
	}
	
	public void setWidth(int width) {
		
		this.width = width;
	}
	
	public void setHeight(int height) {
		
		this.height = height;
	}
	
	public double calcArea() {
		
		return width*height;
	}
	
	public String toString() {
		
		return "This is a Rectangle with opacity " + getOpacity() + ", width " + width + ", height " + height + " and area " + calcArea();		
	}

}
