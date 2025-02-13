#include <iostream>

int main()
{
	/*Напишите программу которая проверяет то, как вы умеете складывать два числа в уме.
		Программа должна выводить два разных сообщения на верный 
		и неверный ответ пользователя.В последнем случае надо показывать правильный результат.*/
	int number1;
	int number2;
	int userResult;

	std::cout << "This programm check your mental arithmetic (фввшешщт) \n";
	std::cout << "enter number 1: ";
	std::cin >> number1;
	std::cout << "enter number 2: ";
	std::cin >> number2;
	std::cout << "enter resutl (number 1 + number 2): ";
	std::cin >> userResult;

	std::cout << "....Wait a minute...\n";

	if (userResult == number1 + number2) {
		std::cout << "Perfetto! Corretto! Benissiomo!";
	}
	else {
		std::cout << "Nope, the correct answer is: " << number1 + number2;
	}
}