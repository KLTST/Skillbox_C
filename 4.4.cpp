#include <iostream>

int main()
{
	//Напишите программу, которая определяет уровень персонажа в компьютерной игре.
	//Пользователь вводит число «очков опыта», а программа вычисляет уровень.
	//Новый уровень даётся при достижении
	//1000, 2500 и 5000 «очков опыта».Начальный уровень равен 1.
	int exp;
	std::cout << "Enter your exp: ";
	std::cin >> exp;
	std::cout << "...Wait a minute...\n";
	if (exp < 0) {
		std::cout << "Seems like an error. No exp below zero";
	}
	else if (exp == 0) {
		std::cout << "Seems like u start the game. Good luck. Your level is 1";
	}
	else if (exp < 1000) {
		std::cout << "Your level is 1";
	}
	else if (exp < 5000) {
		std::cout << "Your level is 2";
	}
	else {
		std::cout << "Your level is 3";
	}
}
