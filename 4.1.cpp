#include <iostream>

int main() 
{
	int number1;
	int number2;
	std:: cout << "This programm gonna help to compare 2 numbers \n";
	std::cout << "Enter number 1: ";
	std::cin >> number1;
	std::cout << "Enter number 2: ";
	std::cin >> number2;
	
	std::cout << ".....Wait a minute.....\n";
	if (number1 > number2) {
		std::cout << "The lowest number is: " << number2;
	}
	else if (number1 < number2) {
		std::cout << "The lowest number is: " << number1;
	}
	else {
		std::cout << "Numbers are equel";
	}
}


//Напишите программу, которая ищет минимальное значение из двух чисел.
//
//Пример 1
//
//Введите первое число : 45
//Введите второе число : 70
//---- - Проверяем---- -
//Наименьшее число : 45
//
//Пример 2
//
//Введите первое число : 45
//Введите второе число : 45
//---- - Проверяем---- -
//Числа равны!
//
//Советы и рекомендации
//Учтите, что числа могут быть равны!
//
//Что оценивается
//Правильность нахождения минимального числа
//Обработка всех возможных вариантов минимального из двух чисел
//Использование конструкций else if и else