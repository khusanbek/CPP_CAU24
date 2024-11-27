// created by Abdulloh, cs1-24
// Edited by Khusanbek Gafurov, Msc.
#include <iostream>
using namespace std;

class Company {

private:
	// private static members
    static int totalRevenue;
    static int totalProfit;
    static int totalSales;
	
	// private members
    int revenue;
	int profit;
	int sales;
    string name;
	string ceo;

public:
    Company(int rev, int prft, int sl, string nm, string c) {
        
		setRevenue(rev);
        setProfit(prft);
        setSales(sl);
        setName(nm);
        setCeo(c);

        printInfo();
    }
	
	void setRevenue(int rev) { revenue = rev; }
	int getRevenue() { return revenue; }
	
	void setProfit(int prft) { profit = prft; }
	int getProfit() { return profit; }
	
	void setSales(int sl) { sales = sl; }
	int getSales() { return sales; }

	void setName(string nm) { name = nm; }
	string getName() { return name; }
	
	void setCeo(string c) { ceo = c; }
	string getCeo() { return ceo; }
	
    int operator + (Company& cmpObj) {
		
		totalRevenue 	= revenue + cmpObj.revenue;
		totalProfit 	= profit + cmpObj.profit;
		totalSales 		= sales + cmpObj.sales; 
		
		return profit + cmpObj.profit;
    }

    void printTotal() {		
	
        cout << "Total Revenue: " << totalRevenue << endl;
        cout << "Total Profit: " << totalProfit << endl;
        cout << "Total Sales: " << totalSales << endl;
    }

    void printInfo() {
		
		cout << "=== Company Info ===" << endl;
        cout << "Name: " << getName() << endl;
        cout << "CEO: " << getCeo() << endl;
        cout << "Revenue: " << getRevenue() << endl;
        cout << "Profit: " << getProfit() << endl;
		cout << "Sales: " << getSales() << endl;
        cout << "=== Company Info ===\n\n";
    }
};

int Company::totalRevenue = 0;
int Company::totalProfit = 0;
int Company::totalSales = 0;

int main() {
	
    Company comp1(100, 200, 40, "Apple", "Tim Cook");
    Company comp2(100, 240, 80, "Microsoft", "Satya Nadella");

    int sumProfit = comp1 + comp2;

    cout << "=== Total Profit ===" << endl;
    cout << "Sum of Profits (" << 
		comp1.getName() << " + " << 
			comp2.getName() << "): " << sumProfit << endl;
    cout << "====================\n" << endl;
	
	// total of all collective properties
	comp1.printTotal();
	
    return 0;
}