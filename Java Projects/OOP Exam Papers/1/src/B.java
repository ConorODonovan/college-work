public class B extends A implements Once, Twice {

    public void one(int x) {

        System.out.println("B.1 " + x);
    }

    public void two() {

        System.out.println("B.2");
    }

    public void sayItTwice() {

        System.out.println("I'll say this twice");
    }
}
