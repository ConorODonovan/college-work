import java.io.Serializable;

public class Circle extends Shape implements Serializable {

    /**
     * Can take an argument for 'radius', or default it to 5
     * Has method to calculate area
     */

    int radius;

    protected Circle() {
        radius = 5;
    }

    protected Circle(int r) {
        radius = r;
    }

    public int getRadius() {
        return radius;
    }

    public void setRadius(int r) {
        radius = r;
    }

    public double calcArea() {
        double area;
        area = radius * radius * Math.PI;
        return area;
    }

    public String toString() {
        return "Circle with radius " + radius + " and opacity of " + opacity;
    }
}