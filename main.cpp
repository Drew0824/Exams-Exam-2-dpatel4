#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double coffee;
  double discount;
  double total;
  double price;
  double completetotal;
  
  cout << "How much coffee in pounds do you wish to buy?\n" << endl;
  cin >> coffee;

  
  price = (8.50);
  total = price * coffee;

  discount = (0.12 * (total));

  if (coffee <= 3)
  {completetotal = coffee * price;  
  }
  
  else 
  {completetotal = ((total) - discount);
  }
  cout << "The total cost of the coffee is: $" << completetotal << endl;



}