#include <iostream>

int main()
{
	/*В отделе маркетинга работают три сотрудника.Их зарплаты могут быть как разными,
		так и одинаковыми.Напишите программу, которая вычисляет разницу между самой высокой и
		самой низкой зарплатами сотрудников,
		а также среднее арифметическое зарплат всех сотрудников отдела.*/

	int salary1;
	int salary2;
	int salary3;
	int biggestSalary;
	int lowestSalary;

	std::cout << "Enter salary of workers and i will return u max and min \n" << "\n" 
		<< "Enter the salary of the first worker: ";
	std::cin >> salary1;
	std::cout << "Enter the salary of the second worker: ";
	std::cin >> salary2;
	std::cout << "Enter the salary of the third worker: ";
	std::cin >> salary3;
	std::cout << "\n";
	std::cout << "..Wait a minute...\n";

	if (salary1 > salary2)
	{
		if (salary1 >= salary3) {
			biggestSalary = salary1;

			if (salary3 >= salary2)
			{
				lowestSalary = salary2;
			}
			else {
				lowestSalary = salary3;
			}

		}
		else if (salary1 < salary3) {
			biggestSalary = salary3;
			lowestSalary = salary2;
		}
	}
	else if (salary1 <= salary2) {
		if (salary2 >= salary3) {
				biggestSalary = salary2;
				if (salary3 >= salary1)
				{
					lowestSalary = salary1;
				}
				else {
					lowestSalary = salary3;
				}

		}
		else if (salary2 < salary3) {
				biggestSalary = salary3;
				lowestSalary = salary1;
		}
	}
	
	std::cout << "\n";
	std::cout << "Biggest salary is: " << biggestSalary
		<< "\n" << "Difference between biggest and lowest salary is: "
		<< biggestSalary - lowestSalary << "\n"
		<< "Average salary is: " << (salary1 + salary2 + salary3) / 3;
}