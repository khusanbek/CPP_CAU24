// AccountTwo.h
// Account class with a constructor that initializes the account name.
#include <string>

class AccountTwo {
	
public:
   // constructor initializes data member name with parameter accountName
   AccountTwo(std::string accountName) 
     : name(accountName) { // member initializer
	  // empty body
   }                                            

   // function to set the account name
   void setName(std::string accountName) {
      name = accountName;
   } 

   // function to retrieve the account name
   std::string getName() const {
      return name; 
   } 
   
private:
   std::string name; // account name data member
}; // end class Account