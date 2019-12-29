public class MainClass {

    public static void main(String[] args) {

        String str1 = "agkfoeigjdnfdlkd";
        String str2 = "fngklsksdidhnd";
        String str3 = "";

        for (int i = 0; i < str1.length(); i++) {

            for (int j = 0; j < str2.length(); j++) {

                if (str1.charAt(i) == str2.charAt(j)) {

                    str3 += str1.charAt(i);
                }
            }
        }

        System.out.println(str3);
    }
}
