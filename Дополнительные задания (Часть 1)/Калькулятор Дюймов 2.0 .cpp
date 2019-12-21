#include <iostream>
#include <locale>

int main() {

	double M;
	double D;

	setlocale(LC_ALL, "Ru");

	std::cout << "Введите число в метрах, а програма выведит число в дюймах \n";

	putchar('\n');

	std::cout << "Вводите число - ";
	std::cin >> M;

	putchar('\n');

	
	while (M <= 0){
		std::cout << "Введите другое количество метров - " << " ";
		std::cin >> M;
	}
		if (M == 1 ) {
		std::cout << "Вы ввели " << M << " " << "Метр \n";
		}
		else if (M > 1 && M < 5 )  {
		std::cout << "Вы ввели " << M << " " << "Метра \n";
		}
			else  {
			std::cout << "Вы ввели " << M << " " << "Метров \n";
			}

	putchar('\n');

	D = M * 100 / 2.54;

	std::cout << "В " << M << " " << "метрах равно " << D << " " << "Дюймов";

	putchar('\n');
	putchar('\n');
	putchar('\n');

}

