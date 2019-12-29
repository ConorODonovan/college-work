public class MainClass {

    public static void main(String[] args) {

        String str = "navan";
        boolean isPalindrome = true;

        for (int i = 0; i < str.length(); i++) {

            if (str.charAt(i) != str.charAt(str.length() - 1 - i)) {

                isPalindrome = false;
            }
        }

        if (isPalindrome == true) {

            System.out.println("The string " + str + " is a palindrome");
        }
        else {

            System.out.println("The string " + str + " is not a palindrome");
        }
    }
}
