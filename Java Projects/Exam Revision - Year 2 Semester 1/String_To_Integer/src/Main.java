public class Main {

    public static void main(String args[]) {

        String s = "3+4";
        int x = 0;
        int temp;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) != '+') {
                temp = Integer.parseInt(String.valueOf(s.charAt(i)));
                x += temp;
            }
        }

        System.out.println(x);
    }
}
