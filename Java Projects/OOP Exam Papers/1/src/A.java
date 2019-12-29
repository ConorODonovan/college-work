public class A implements Once {

    public void one() {

        System.out.println("A.1");
    }

    public void two() {

        one();
        System.out.println("A.2");
    }

    public void sayItOnce() {

        System.out.println("I'll say this once");
    }
}
