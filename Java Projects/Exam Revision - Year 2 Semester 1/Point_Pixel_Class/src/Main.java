import static java.lang.System.out;

public class Main {

    public static void main(String args[]) {

        Pixel p = new Pixel(3, 4, "Red");
        String c = p.getColour();
        System.out.println("The colour is " + p.getColour());
        p.clear();
        System.out.println("The colour is now " + p.getColour());
    }
}
