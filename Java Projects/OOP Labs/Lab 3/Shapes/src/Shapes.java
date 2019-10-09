import java.util.Scanner;

/**
 * DT249 - Year 2 - Semester 1
 * Conor O'Donovan
 * Lab 2
 * Simple project to show how classes and inheritance works
 * Create a 'Shapes' class, and then a 'Circle', 'Square', and 'Rectangle' class that inherit from 'Shape'
 */

public class Shapes {
    public static void main(String[] args) {

        Scanner inputNumberOfShapes = new Scanner(System.in);
        System.out.println("How many shapes would you like to create?");
        int numberOfShapes = inputNumberOfShapes.nextInt(); // Prompts user to input the number shapes they will create

        String[] shapesType = new String[numberOfShapes]; // Initialise array to hold list of shape types

        int i;
        Shape[] listOfShapes = new Shape[numberOfShapes]; // Initialise array to hold shape objects

        for (i = 0; i < numberOfShapes; i++) {

            Scanner inputShapeType = new Scanner(System.in);
            System.out.println("Please enter a shape - C for Circle, S for Square, R for Rectangle:");
            shapesType[i] = inputShapeType.nextLine(); // Prompts user to enter the type of shape

            if (shapesType[i].equals("C")) {
                listOfShapes[i] = new Circle();
            }
            else if (shapesType[i].equals("S")) {
                listOfShapes[i] = new Square();
            }
            else if (shapesType[i].equals("R")) {
                listOfShapes[i] = new Rectangle();
            }
        }

        for (i = 0; i < numberOfShapes; i++) {

            if (listOfShapes[i] instanceof Circle) {

                Scanner inputRadius = new Scanner(System.in);
                System.out.println("Please enter the radius of the circle:");
                int newRadius = inputRadius.nextInt(); // User sets the radius of the circle

                ((Circle) listOfShapes[i]).setRadius(newRadius);
            }
            else if (listOfShapes[i] instanceof Square) {

                Scanner inputLength = new Scanner(System.in);
                System.out.println("Please enter the length of the square:");
                int newLength = inputLength.nextInt(); // User sets the length of the square

                ((Square) listOfShapes[i]).setLength(newLength);
            }
            else if (listOfShapes[i] instanceof Rectangle) {

                Scanner inputRecLength = new Scanner(System.in);
                System.out.println("Please enter the length of the rectangle:");
                int newRecLength = inputRecLength.nextInt(); // User sets the length of the rectangle

                Scanner inputRecWidth = new Scanner(System.in);
                System.out.println("Please enter the width of the rectangle:");
                int newRecWidth = inputRecWidth.nextInt(); // User sets the width of the rectangle

                ((Rectangle) listOfShapes[i]).setLength(newRecLength);
                ((Rectangle) listOfShapes[i]).setWidth(newRecWidth);
            }
        }

        for (i = 0; i < numberOfShapes; i++) {

            double shapeArea = listOfShapes[i].calcArea();

            if (listOfShapes[i] instanceof Circle) {

                System.out.println("The area of Shape " + (i + 1) + " (Circle) is " + shapeArea);
            }
            else if (listOfShapes[i] instanceof Square) {

                System.out.println("The area of Shape " + (i + 1) + " (Square) is " + shapeArea);
            }
            else if (listOfShapes[i] instanceof Rectangle) {

                System.out.println("The area of Shape " + (i + 1) + " (Rectangle) is " + shapeArea);
            }
        }
    }
}
