import java.util.Scanner; // Import the Scanner class

public class StudentGrade {
    /**
     * Asks user to enter their name and grade. Displays message to user based on grade
     * @param args
     */
    public static void main(String[]args) {
        System.out.println("Please enter your name\n");
        Scanner keyboardName = new Scanner(System.in); // Get student name as input
        String userName = keyboardName.nextLine(); // Store student name as variable

        System.out.println("\nPlease enter your grade\n");
        Scanner keyboardGrade = new Scanner(System.in); // Get student grade as input
        int userGrade = keyboardGrade.nextInt(); // Store student grade as variable

        // Display message for student based on grade
        if (userGrade < 40) {
            System.out.println("Sorry, " + userName + ", you failed\n");
        }
        else if (userGrade < 50) {
            System.out.println(userName + ", you passed!");
        }
        else if (userGrade < 60) {
            System.out.println(userName + ", that's a 2:2!");
        }
        else if (userGrade < 70) {
            System.out.println(userName + ", you are in the Second Class Upper Division!");
        }
        else {
            System.out.println("Congratulations " + userName + ", that's a First!");
        }
    }
}
