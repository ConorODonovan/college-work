public class NumberList {

    public static void main(String args[]) {

        int numbers[] = new int[]{2,5,8,44,32,65,4};
        int tempLarge = 0;
        int tempSmall = 9999;

        // Largest
        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] >= tempLarge) {
                tempLarge = numbers[i];
            }
        }

        // Smallest
        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] <= tempSmall) {
                tempSmall = numbers[i];
            }
        }

        System.out.println("The largest number in the Array is " + tempLarge);
        System.out.println("The smallest number in the Array is " + tempSmall);
    }
}
