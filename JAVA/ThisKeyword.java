class A{

    // int i;
    // A(int i){
    //     this.i=i;
    //     // System.out.println(i);
    // }

    // void show(){
    //     System.out.println(i);
    // }


    void show(){
        // display();  // implicitly this keyword  added by complier
        this.display(); // both are same
    }
    void display(){
        System.out.println("hello");
    }
}

public class ThisKeyword {
    public static void main(String[] args) {
        A a=new A();
        a.show();
    }
}
