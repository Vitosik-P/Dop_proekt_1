#include <iostream>
#include <locale>

int main() {

	double M;
	double D;

	setlocale(LC_ALL, "Ru");

	std::cout << "������� ����� � ������, � �������� ������� ����� � ������ \n";

	putchar('\n');

	std::cout << "������� ����� - ";
	std::cin >> M;

	putchar('\n');

	
	while (M <= 0){
		std::cout << "������� ������ ���������� ������ - " << " ";
		std::cin >> M;
	}
		if (M == 1 ) {
		std::cout << "�� ����� " << M << " " << "���� \n";
		}
		else if (M > 1 && M < 5 )  {
		std::cout << "�� ����� " << M << " " << "����� \n";
		}
			else  {
			std::cout << "�� ����� " << M << " " << "������ \n";
			}

	putchar('\n');

	D = M * 100 / 2.54;

	std::cout << "� " << M << " " << "������ ����� " << D << " " << "������";

	putchar('\n');
	putchar('\n');
	putchar('\n');

}

