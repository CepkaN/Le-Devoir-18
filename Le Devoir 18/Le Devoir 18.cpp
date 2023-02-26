#include<iostream>
int CIFR = 0;
int summa(int arr[5]) {
	for (int i = 0; i < 5; i++) {
		CIFR += arr[i];
	}
	return CIFR;
}
inline double sover(double a, double b, double c) {
	return ((a + b + c) / 3);
}
short max(short a, short b, short c) {
	std::cout << " short \n";
	return (a > (b > c ? b : c) ? a : (b > c ? b : c));
}
int max(int a, int b, int c) {
	std::cout << " int \n";
	return (a > (b > c ? b : c) ? a : (b > c ? b : c));
}
double max(double a, double b, double c) {
	std::cout << " double \n";
	return (a > (b > c ? b : c) ? a : (b > c ? b : c));
}
template<typename T>
T prost(T mas[5]) {
	for (int i = 0; i < 5; i++) {
		int counter = 0;
		for (int j = 1; j <= mas[i]; j++)
			if (mas[i] % j == 0)
				counter++;
		if (counter == 2) {
			std::cout << "Простым числом является ";
			return mas[i];
		}
	}		
}
int main() {
	setlocale(LC_ALL, "Russian");
	// Задача 1.
	int bloc[5];
	std::cout << "Задача 1.\nВведите пять чисел : ";
	for (int i = 0; i < 5; i++) {
		std::cin >> bloc[i];
	}
	std::cout<<"Сумма равна "<<summa(bloc)<<"\n\n";
	// Задача 2.
	double Un, Deux, Trois;
	std::cout << "Задача 2. \nВведите три числа : ";
	std::cin >> Un >> Deux >> Trois;
	std::cout << "Среднее арифметическое трёх чисел равно " << sover(Un, Deux, Trois) << "\n\n";
	// Задача 3.
	std::cout << "Задача 3.\n";
	short n1 = 5, n2 = 4, n3 = 7;
	std::cout << "Максимум из 5 , 4, 7 равен " << max(n1, n2, n3) << "\n";
	std::cout << "Максимум из 12 , 425, 234567 равен " << max(12, 425, 234567) << "\n";
	std::cout << "Максимум из 45.53 , 4.2344, 64.4 равен " << max(45.53, 4.2344, 64.4) << "\n";
	// Зпдача 4.
	std::cout << "\nЗадача 4.\n";
	int massiv[5]{ 12,8,9,11,7 };
	for (int i = 0; i < 5; i++)
		std::cout << massiv[i] << ' ';
	std::cout<<'\n';
	std::cout << prost(massiv) << "\n";

	return 0;
}