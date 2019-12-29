public class MainClass {

    public static void main(String args[]) {

        System.out.println("(i):");
        A a = new B();
        a.two();

        System.out.println("(ii):");
        B b = new B();
        b.one(4);
        b.one();

        System.out.println("(iii):");
        Once r = new B();
        r.sayItOnce();

        System.out.println("(iV):");
        //Twice b = new Twice();
        //b.sayItTwice();

        System.out.println("(v):");
        //C c = new A();
        //c.two();

        System.out.println("(vi):");
        //A a = new B();
        //a.sayItTwice();

        System.out.println("(vii):");
        //A a = new C();
        //a.two;
    }
}
