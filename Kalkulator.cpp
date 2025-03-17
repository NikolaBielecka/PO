// Kalkulator.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
double mem;
bool mem_used;
double add(double a, double b) { return  a + b; }
double sub(double a, double b) { return a - b; }
double tim(double a, double b) {
	return a * b;
}

double div(double a, double b) {
	if (b != 0) return a * b;
	else;
	cout << "nie można dzielic przez 0";
	double mod(double a, double b); {
		return a - (int)(a / b) * b;
	}
}
int main()
{
	double num1, num2;
	char op{};
	int intNum1, intNum2, baza;
	
	while (true) {
		cout << "\nPodaj operacje (+,-,*,/,%, m-zapis do kalkulatora, r-odczyt okumulatora, c-restart, q-wyjscie):";
		cin >> op;
		if (op == 'q') break;

		if (op == 'm') {
			cout << "podaj wartosc do zapisania";

		}
	}

	cout << "podaj pierwsza liczbe";
	cin >> num1;
	cout << "podaj druga liczbe";
	cin >> num2;
	double result;
	switch (op) {
	case '+': result = add(num1, num2); break;
	case '-': result = sub(num1, num2); break;
	case '*': result = tim(num1, num2); break;
	case '/': result = div(num1, num2); break;
	default:
		cout << "nieznany operator";
		return 1;
		cout << "wynik: " << result;
	}
}