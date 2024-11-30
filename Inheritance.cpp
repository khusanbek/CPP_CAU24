
#include "Concrete.h"
#include "Block.h"

int main() {
	
	Concrete conrete(40, 40, 20);
	Block block(50, 40, 10, 25, 30, 70);
	
	conrete.printInfo();
	block.printInfo();
	
	return 0;
}