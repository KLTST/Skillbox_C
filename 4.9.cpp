#include <iostream>

int main()
{
	int tax13 = 13;
	int tax20 = 20;
	int tax30 = 30;
	int income;
	int taxToPay;

	std::cout << "Enter your income and i will count Tax to Pay \n" << "\n";
	std::cout << "Enter your income: ";
	std::cin >> income;

	if (income == 0) {
		std::cout << "Dont cheat the tax. We are watching u.";
	}
	else if (income < 0) {
		std::cout << "Seems like an error. Pls restart";
	}
	else {
		if (income < 10000) {
			taxToPay = income / 100 * tax13;
			std::cout << "Your income is: " << income << "\n" 
				<< "Your Tax Rate is: " << tax13 << "\n" 
				<< "U must pay: " << taxToPay;
		}
		else if (income < 50000) {
			taxToPay = (((income - 9999) / 100) * tax20) + ((9999 / 100) * tax13);
			std::cout << "Your income is: " << income << "\n"
				<< "Your Tax Rate is: " << tax20 << "\n"
				<< "U must pay: " << taxToPay;
		}
		else {
			taxToPay = ((income - 50000) * tax30 / 100) + ((income - 50000 - 9999) * tax20 / 100) + (9999 * tax13 / 100);
			std::cout << "Your income is: " << income << "\n"
				<< "Your Tax Rate is: " << tax30 << "\n"
				<< "U must pay: " << taxToPay;
		}
	}
}


