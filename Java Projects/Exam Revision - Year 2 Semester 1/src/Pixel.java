public class Pixel extends Point {

    private String colour;

    public Pixel() {
        super();
        colour = null;
    }

    public Pixel(int x, int y, String colour) {
        super(x, y);
        this.colour = colour;
    }

    public String getColour() {
        return colour;
    }

    public void clear() {
        super.clear();
        colour = null;
    }
}
