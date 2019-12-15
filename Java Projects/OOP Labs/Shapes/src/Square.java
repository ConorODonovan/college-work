import java.io.Serializable;

public class Square extends Shape implements Serializable {

    /**
     * Can take an argument for 'length' or default it to 5
     * Has method to calculate area
     */

    int length;

    protected Square(int l) {
        length = l;
    }

    protected Square() {
        length = 5;
    }

    protected Square(int l, int o) {
        super(o);
        length = l;
    }

    public int getLength() {
        return length;
    }

    public void setLength(int l) {
        length = l;
    }

    public double calcArea() {
        double area;
        area = length * length;

        return area;
    }

    public String toString() {
        return "Square with length " + length + " and opacity of " + opacity;
    }
}