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


//�������� ���������, ������� ���� ����������� �������� �� ���� �����.
//
//������ 1
//
//������� ������ ����� : 45
//������� ������ ����� : 70
//---- - ���������---- -
//���������� ����� : 45
//
//������ 2
//
//������� ������ ����� : 45
//������� ������ ����� : 45
//---- - ���������---- -
//����� �����!
//
//������ � ������������
//������, ��� ����� ����� ���� �����!
//
//��� �����������
//������������ ���������� ������������ �����
//��������� ���� ��������� ��������� ������������ �� ���� �����
//������������� ����������� else if � else