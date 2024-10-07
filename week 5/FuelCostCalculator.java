import java.util.Scanner;

public class FuelCostCalculator {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        boolean CONTINUE = true;
        final int TANK_SIZE = 45,
                INITIAL_FUEL = 5, FUEL_PRICE = 10800,
                    INITIAL_KM = 50, KM_PER_LITRE = 14;

        double fuelAvail = INITIAL_FUEL;
        int userInput = 0,
                fuelBuy = 0, totalFuelBought = 0,
                    kmPassed = INITIAL_KM, kmPass = 0, kmToPass = KM_PER_LITRE * INITIAL_FUEL;

        while(CONTINUE) {

            System.out.println("Menu");
            System.out.println("(1) buy fuel: ");
            System.out.println("(2) km passed: ");
            System.out.println("(3) generate report: ");
            System.out.print("(-1) quit: ");
            userInput = input.nextInt();

            if(userInput == 1) {

                System.out.print("\nFuel in tank: " + String.format("%.2f", fuelAvail));
                System.out.print("\nEnter fuel in litres: ");
                fuelBuy = input.nextInt();

                if(fuelBuy + fuelAvail > TANK_SIZE) {
                    System.out.println("\nFuel CAN'T fit into tank.");
                }
                else {
                    fuelAvail += fuelBuy;
                    totalFuelBought += fuelBuy;
                    kmToPass += fuelBuy * KM_PER_LITRE;
                    System.out.println("Fuel in tank: " + String.format("%.2f", fuelAvail) + "\n");
                }
            }
            else if(userInput == 2) {

                System.out.print("\nCurrent km passed: " + kmPassed);
                System.out.print("\nEnter km passed: ");
                kmPass = input.nextInt();

                if(kmToPass - kmPass  < 0) {
                    System.out.println("\nFuel ISN'T enough for " +
                            kmPass + " to pass. Please buy more fuel to drive.");
                }
                else {
                    kmPassed += kmPass;
                    kmToPass -= kmPass;
                    fuelAvail -= (double) kmPass / KM_PER_LITRE;
                }
            }
            else if(userInput == 3) {

                System.out.println("~~~Report of gas usage~~~");
                System.out.println("Fuel in tank (ltr): " + String.format("%.2f", fuelAvail) +
                                        ", tank capacity: " + TANK_SIZE);
                System.out.println("With fuel " + String.format("%.2f", fuelAvail) + " (ltr) approx. km to pass: " + kmToPass);
                System.out.println("Km passed: " + kmPassed);
                System.out.println("Fuel purchased (ltr): " + totalFuelBought);
                System.out.println("Fuel price per (ltr): " + FUEL_PRICE);
                System.out.println("Total fuel bought price: " + totalFuelBought * FUEL_PRICE);
                System.out.println("+++Report of gas usage+++\n");

            } else if(userInput == -1) {

                CONTINUE = false;
            }
        }
    }
}