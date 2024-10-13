import java.util.Scanner;

public class FuelCostCalculator {
    private Scanner input;
    private boolean CONTINUE;
    private final int TANK_SIZE = 45; // CONSTANT
    private final int INITIAL_FUEL = 5; // CONSTANT
    private final int FUEL_PRICE = 10800; // CONSTANT
    private final int INITIAL_KM = 50; // CONSTANT
    private final int KM_PER_LITRE = 14; // CONSTANT
    private double fuelAvail;
    private int userInput;
    private int fuelBuy;
    private int totalFuelBought;
    private int kmPassed;
    private int kmPass;
    private int kmToPass;

    public FuelCostCalculator() {

        input = new Scanner(System.in);
        CONTINUE = true;
        fuelAvail = INITIAL_FUEL;
        userInput = 0;
        fuelBuy = 0;
        totalFuelBought = 0;
        kmPassed = INITIAL_KM;
        kmPass = 0;
        kmToPass = KM_PER_LITRE * INITIAL_FUEL;
    }
    public void buyFuel() {

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
    public void insertKmPassed() {

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
    public void printReport() {

        System.out.println("~~~Report of gas usage~~~");
        System.out.println("Fuel in tank (ltr): " + String.format("%.2f", fuelAvail) +
                ", tank capacity: " + TANK_SIZE);
        System.out.println("Fuel gas bar: " + printGasBar());
        System.out.println("With fuel " + String.format("%.2f", fuelAvail) + " (ltr) approx. km to pass: " + kmToPass);
        System.out.println("Km passed: " + kmPassed);
        System.out.println("Fuel purchased (ltr): " + totalFuelBought);
        System.out.println("Fuel price per (ltr): " + FUEL_PRICE);
        System.out.println("Total fuel bought price: " + totalFuelBought * FUEL_PRICE);
        System.out.println("+++Report of gas usage+++\n");
    }
    public boolean continueState() {
        return CONTINUE;
    }
    public void continueStateChange() {
        CONTINUE = !CONTINUE;
    }
    public String printGasBar() {

        StringBuilder buffer = new StringBuilder();

        int cycle = TANK_SIZE / 5;
        int bars = (int) fuelAvail / 5;
        buffer.insert(0,"~");

        for(int i = 1; i <= cycle; i++) {

            if(bars > 0) {
                buffer.insert(buffer.length(), "[]");
                bars--;
            }
            else {
                buffer.insert(buffer.length(), "-");
            }
        }

        buffer.insert(buffer.length(), "~");

        return buffer.toString();
    }
    public int menu() {

        System.out.println("Menu");
        System.out.println("(1) buy fuel: ");
        System.out.println("(2) km passed: ");
        System.out.println("(3) generate report: ");
        System.out.print("(-1) quit: ");
        return input.nextInt();
    }
}