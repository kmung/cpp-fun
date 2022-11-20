#include <iostream>
/*
Practice program, converting currencies.
Author: Khawm Mung
Last Updated: 05/13/2020
*/

int main(int argc, char const *argv[]) {

  double pesos, reais, soles, kyat = 0;//foreign currencies

  double p_dollars = 0;//pesos to dollars
  double r_dollars = 0;//reais to dollars
  double s_dollars = 0;//soles to dollars
  double k_dollars = 0; //kyat to dollars
  double totalDollars = 0; //total dollars

  std::cout <<"\n\tWelcome to the currencies converting app!\n";

  std::cout << "\nEnter amount in Columbian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter amount in Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter amount in Peruvian Soles: ";
  std::cin >> soles;

  std::cout << "Enter amount in Myanmar Kyat: ";
  std::cin >> kyat;

  //conversion rate from pesos to USD: 1 peso = 0.041 USD
  //1 reais = 0.17 USD
  //1 soles = 0.29 USD
  //1 kyat = 0.00076 USD

  p_dollars = 0.041 * pesos;
  r_dollars = 0.17 * reais;
  s_dollars = 0.29 * soles;
  k_dollars = 0.00076 * kyat;

  totalDollars = p_dollars + r_dollars + s_dollars + k_dollars;

  bool choice = true;

  std::cout << "\nWhat would you like to do? Enter either 0 or 1.\n\n";

  std::cout << "Option 0: Convert each currencies to USD individually.\n";
  std::cout << "Option 1: Output the total amount of the converted currencies in USD.\n";
  std::cin >> choice;

  if(choice) {

    std::cout << "\nTotal in US Dollars: $" << totalDollars << "\n";

  } else {

    std::cout << "\n" << pesos << " pesos in USD is $" << p_dollars << ".\n";
    std::cout << reais << " reais in USD is $" << r_dollars << ".\n";
    std::cout << soles << " soles in USD is $" << s_dollars << ".\n";
    std::cout << kyat << " kyat in USD is $" << k_dollars << ".\n";
  }

  std::cout << "\n\tThank you for using this app!\n";

  return 0;
}
