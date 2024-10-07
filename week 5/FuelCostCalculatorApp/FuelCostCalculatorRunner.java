public class FuelCostCalculatorRunner {

    public void run() {

        FuelCostCalculator fuelCostCalculator = new FuelCostCalculator();

        while (fuelCostCalculator.continueState()) {

            switch (fuelCostCalculator.menu()) {

                case 1:
                    fuelCostCalculator.buyFuel();
                    break;
                case 2:
                    fuelCostCalculator.insertKmPassed();
                    break;
                case 3:
                    fuelCostCalculator.printReport();
                    break;
                case -1:
                    fuelCostCalculator.continueStateChange();
                    break;
            }
        }
    }
}
