public class Square extends Shape{
	
	private static final long serialVersionUID = 1L;
	private int side;
	
	public Square() {
		
		super();		
	}
	
	public Square(int side) {
		
		super();
		this.side = side;	
	}
	
	public Square(int side, int opacity) {
		
		super(opacity);
		this.side = side;
	}
	
	public int getSide() {
		
		return side;		
	}
	
	public void setSide(int side) {
		
		this.side = side;		
	}
	
	public double calcArea() {
		
		return side * side;		
	}
	
	public String toString() {
		
		return "This is a Square with opacity " + getOpacity() + ", side " + side + " and area " + this.calcArea();		
	}

}
