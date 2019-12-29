public class MainClass {

    public static void main(String args[]) {

        StringBuffer sb = new StringBuffer("abcdef");
        sb.replace(0,3,"xyz");
        System.out.println(sb);
        sb = new StringBuffer("abcdef");
        sb.replace(sb.indexOf("abc"), sb.indexOf("def"), "lmo");
        System.out.println(sb);
    }

}
