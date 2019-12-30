import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    System.out.println("Hello world!");
    Scanner input = new Scanner(System.in);

    String hi = input.nextLine();
    if (hi.equals("Hello")){
      System.out.println("HI");
    }
    else{
      System.out.println("abc");
    }
  }
}
