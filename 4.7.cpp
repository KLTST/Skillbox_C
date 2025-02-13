#include <iostream>

int main()
{
	int weekDay;
	std::cout << "Restourant menu \n" << "Enter the number of weekday (1-7): ";
	std::cin >> weekDay;

	if (weekDay >= 1 && weekDay <= 7) {
		if (weekDay == 1) {
			std::cout << "The menu for today (monday) is: \n";
			std::cout
				<< "Olivie \n"
				<< "Borsh \n"
				<< "Kotletki \n";
		}
		else if (weekDay == 2) {
			std::cout << "The menu for today (tuesday) is: \n";
			std::cout
				<< "Seld' \n"
				<< "Solyanka \n"
				<< "Otbeefnaya \n";
		}
		else if (weekDay == 3) {
			std::cout << "The menu for today (wednesday) is: \n";
			std::cout
				<< "Kraboviy \n"
				<< "Tom Yam \n"
				<< "Krab \n";
		}
		else if (weekDay == 4) {
			std::cout << "The menu for today (thursday) is: \n";
			std::cout
				<< "Stolichniy \n"
				<< "Kuriniy \n"
				<< "Steyk \n";
		}
		else if (weekDay == 5) {
			std::cout << "The menu for today (friday) is: \n";
			std::cout
				<< "Cezar \n"
				<< "Rassolnik \n"
				<< "Sosiski \n";
		}
		else if (weekDay == 6) {
			std::cout << "The menu for today (saturday) is: \n";
			std::cout
				<< "Legkiy salat \n"
				<< "Schi \n"
				<< "Nevkusniy garnier \n";
		}
		else {
			std::cout << "The menu for today (sunday) is: \n";
			std::cout
				<< "Gnezdo dluharia \n"
				<< "Uha \n"
				<< "Guliash \n";
		}
		
		std::cout << "Mors \n" << "Desert";
	}
	else {
			std::cout << "seems like mistake. Pls restart";
		}
	
}
	