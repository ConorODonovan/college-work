import java.util.*;
import java.io.*;

public class Shapes {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int numShapes = 0;
		String[] types = new String[0];
		ArrayList<Shape> shapes = new ArrayList<Shape>();
		String fileName = "test.dat";
		
		boolean gotIt = false;
		while (!gotIt) {
	
			try {
				System.out.println("How many shapes?");
				numShapes = scanner.nextInt();			
				types = new String[numShapes];
				gotIt = true;
			}
			catch (InputMismatchException e) {
				System.out.println("The value should be an integer.");
				scanner.nextLine(); // flush out the wrong value
			}
			catch (NegativeArraySizeException e) {
				System.out.println("The number should not be negative.");
				scanner.nextLine(); // flush out the wrong value
			}
			finally {
				System.out.println("Thank you");				 
			}
		}
		
		for (int i = 0; i<numShapes; i++) {
			
			System.out.println("What type? enter C R or S");
			String type = scanner.next();
			types[i] = type;
			
			if (types[i].contains("S")) {
				Square sq = new Square();
				shapes.add(sq);
			}
			
			else if (types[i].contains("C")) {
				Circle c = new Circle();
				shapes.add(c);
			}
			
			else if (types[i].contains("R")) {
				Rectangle r = new Rectangle();
				shapes.add(r);
			}			
		}
		
		for (int i=0; i<shapes.size(); i++) {
			
			if (shapes.get(i) instanceof Circle) {				
				System.out.println("What is the radius of the Circle?");
				int rad = scanner.nextInt();
				((Circle)shapes.get(i)).setRadius(rad);
			}
			
			else if (shapes.get(i) instanceof Square) {
				System.out.println("What is the width of the Square?");
				int side = scanner.nextInt();
				((Square)shapes.get(i)).setSide(side);
			}
			
			else if (shapes.get(i) instanceof Rectangle) {
				System.out.println("What are the width and height of the Rectangle?");
				int side1 = scanner.nextInt();
				int side2 = scanner.nextInt();
				((Rectangle)shapes.get(i)).setWidth(side1);
				((Rectangle)shapes.get(i)).setHeight(side2);
			}			
		}		
		
		for (int i=0; i<shapes.size(); i++) {
			System.out.println("Area: " + shapes.get(i).calcArea());
		}
		
		 try{
			ObjectOutputStream fileOut = new ObjectOutputStream(new FileOutputStream(fileName));
			for (int i=0; i<shapes.size(); i++){
				fileOut.writeObject(shapes.get(i));
			}
			fileOut.close();
			System.out.println("Shapes saved.");
		 }
		 catch (IOException e) {
			System.out.println("IO Error : " + e.getMessage());
		 }
		 
		 try {
			ObjectInputStream fileIn = new ObjectInputStream(new FileInputStream(fileName));
		   	System.out.println("Opened file successfully.");
		   	Shape aShape;
		   	while ((aShape = (Shape)fileIn.readObject()) != null){
		 		System.out.println(aShape.toString());
		 	}             
		 	fileIn.close();
		 }
		 catch (EOFException e) {
			 System.out.println("End of File.");
		 }
		 catch (IOException e) {
			System.out.println("IO Error : " + e.getMessage());
		 }
		 catch (ClassNotFoundException e) {
		 	System.out.println("Class Error : " + e.getMessage());
		 }
		 
		scanner.close();
	}
}
