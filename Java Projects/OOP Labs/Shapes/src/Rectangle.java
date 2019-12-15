import java.io.Serializable;

public class Rectangle extends Shape implements Serializable {

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

    public void setLength(int l) {
        length = l;
    }

    public void setWidth(int w) {
        width = w;
    }

    public double calcArea() {
        double area;
        area = length * width;

        return area;
    }

    public String toString() {
        return "Rectangle with length " + length + ", width " + width + " and opacity of " + opacity;
    }
}