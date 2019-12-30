/*
cout<<"abcde...\nWhat is the next letter?"<<endl;
char answer;
cin>>answer;
if (answer == 'f'){
  cout<<"You are correct";
} else{
  cout<<"You are wrong, the answer was 'f'";
}
*/
import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.println("abcde...\nWhat is the next letter?");
    String answer = input.nextLine();
    if(answer.equals("f")){
      System.out.print("You are correct!");
    }else{
      System.out.print("You are wrong, the answer was 'f'");
    }

  }
}
