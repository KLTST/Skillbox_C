#include <iostream>

int main()
{
	//�������� ���������, ������� ���������� ������� ��������� � ������������ ����.
	//������������ ������ ����� ������ �����, � ��������� ��������� �������.
	//����� ������� ����� ��� ����������
	//1000, 2500 � 5000 ������ �����.��������� ������� ����� 1.
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
