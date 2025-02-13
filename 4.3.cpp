#include <iostream>

int main()
{
	/*Напишите программу, которая проверяет, чётное ли число ввел пользователь.*/
	int number;
	std::cout << "This programm gonna check even/odd number \n";
	std::cout << "Enter the number: ";
	std::cin >> number;

	int checkEvenOdd = number % 2;

	if (checkEvenOdd != 0) {
		std::cout << "This number is odd";
	}
	else if (number == 0) {
		std::cout << "This is zero";
	}
	else {
		std::cout << "This number is even";
	}
}