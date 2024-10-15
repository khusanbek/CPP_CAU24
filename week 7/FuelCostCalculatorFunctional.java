import java.util.Scanner;

public class FuelCostCalculatorFunctional {

    private static Scanner input = new Scanner(System.in);
    private static boolean CONTINUE = true;

    private final static int TANK_SIZE = 45,
            INITIAL_FUEL = 5, FUEL_PRICE = 10800,
            INITIAL_KM = 50, KM_PER_LITRE = 14;

    private static double fuelAvail = INITIAL_FUEL;

    private static int userInput = 0,
            fuelBuy = 0, totalFuelBought = 0,
            kmPassed = INITIAL_KM, kmPass = 0, kmToPass = KM_PER_LITRE * INITIAL_FUEL;

    public static void main(String[] args) {

        while (CONTINUE) {

            userInput = menu();

            switch (userInput) {

                case 1:
                    buyFuel();
                    break;
                case 2:
                    insertKmpassed();
                    break;
                case 3:
                    PrintReport();
                    break;
                case -1:
                    CONTINUE = false;
                    break;
            }
        }
    }
    private static void buyFuel() {

        System.out.print("\nFuel in tank: " + String.format("%.2f", fuelAvail));
        System.out.print("\nEnter fuel in litres: ");
        fuelBuy = input.nextInt();

        if (fuelBuy + fuelAvail > TANK_SIZE) {
            System.out.println("\nFuel CAN'T fit into tank.");
        } else {
            fuelAvail += fuelBuy;
            totalFuelBought += fuelBuy;
            kmToPass += fuelBuy * KM_PER_LITRE;
            System.out.println("Fuel in tank: " + String.format("%.2f", fuelAvail) + "\n");
        }
    }
    private static void insertKmpassed() {

        System.out.print("\nCurrent km passed: " + kmPassed);
        System.out.print("\nEnter km passed: ");
        kmPass = input.nextInt();

        if (kmToPass - kmPass < 0) {
            System.out.println("\nFuel ISN'T enough for " +
                    kmPass + " to pass. Please buy more fuel to drive.");
        } else {
            kmPassed += kmPass;
            kmToPass -= kmPass;
            fuelAvail -= (double) kmPass / KM_PER_LITRE;
        }
    }
    private static void PrintReport() {

        System.out.println("~~~Report of gas usage~~~");
        System.out.println("Fuel in tank (ltr): " + String.format("%.2f", fuelAvail) +
                ", tank capacity: " + TANK_SIZE);
        System.out.println("With fuel " + String.format("%.2f", fuelAvail) + " (ltr) approx. km to pass: " + kmToPass);
        System.out.println("Km passed: " + kmPassed);
        System.out.println("Fuel purchased (ltr): " + totalFuelBought);
        System.out.println("Fuel price per (ltr): " + FUEL_PRICE);
        System.out.println("Total fuel bought price: " + totalFuelBought * FUEL_PRICE);
        System.out.println("+++Report of gas usage+++\n");
    }
    public static int menu() {

        System.out.println("Menu");
        System.out.println("(1) buy fuel: ");
        System.out.println("(2) km passed: ");
        System.out.println("(3) generate report: ");
        System.out.print("(-1) quit: ");
        return input.nextInt();
    }
}