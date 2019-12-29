import java.io.*;

public abstract class Shape implements Serializable {

	private static final long serialVersionUID = 1L;
	private int opacity;
	
	abstract double calcArea();
	
	public Shape() {
		
		opacity = 100;		
	}
	
	public Shape(int opacity) {
		
		this.opacity = opacity;		
	}
	
	public int getOpacity() {
		
		return opacity;		
	}
	
	public void setOpacity(int opacity) {
		
		this.opacity = opacity;
	}
	
}
