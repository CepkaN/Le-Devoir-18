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
			std::cout << "������� ������ �������� ";
			return mas[i];
		}
	}		
}
int main() {
	setlocale(LC_ALL, "Russian");
	// ������ 1.
	int bloc[5];
	std::cout << "������ 1.\n������� ���� ����� : ";
	for (int i = 0; i < 5; i++) {
		std::cin >> bloc[i];
	}
	std::cout<<"����� ����� "<<summa(bloc)<<"\n\n";
	// ������ 2.
	double Un, Deux, Trois;
	std::cout << "������ 2. \n������� ��� ����� : ";
	std::cin >> Un >> Deux >> Trois;
	std::cout << "������� �������������� ��� ����� ����� " << sover(Un, Deux, Trois) << "\n\n";
	// ������ 3.
	std::cout << "������ 3.\n";
	short n1 = 5, n2 = 4, n3 = 7;
	std::cout << "�������� �� 5 , 4, 7 ����� " << max(n1, n2, n3) << "\n";
	std::cout << "�������� �� 12 , 425, 234567 ����� " << max(12, 425, 234567) << "\n";
	std::cout << "�������� �� 45.53 , 4.2344, 64.4 ����� " << max(45.53, 4.2344, 64.4) << "\n";
	// ������ 4.
	std::cout << "\n������ 4.\n";
	int massiv[5]{ 12,8,9,11,7 };
	for (int i = 0; i < 5; i++)
		std::cout << massiv[i] << ' ';
	std::cout<<'\n';
	std::cout << prost(massiv) << "\n";

	return 0;
}