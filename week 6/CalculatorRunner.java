import java.util.Scanner;
public class CalculatorRunner {
    public void run() {

        Scanner input = new Scanner(System.in);
        int result = 0;

        System.out.print("Enter first input: ");
        int input1 = input.nextInt();

        System.out.print("Enter second input: ");
        int input2 = input.nextInt();

        System.out.println("Choose operation:\n1 - '+'\n2 - '-'\n3 - '/'\n4 - '*'");
        int operation = input.nextInt();

        switch(operation) {
            case 1:
                result = Calculator.addition(input1, input2);
                break;
            case 2:
                result = Calculator.subtraction(input1, input2);
                break;
            case 3:
                result = Calculator.division(input1, input2);
                break;
            case 4:
                result = Calculator.multiplication(input1, input2);
                break;
        }

        System.out.println("Result: " + result);
    }
}
