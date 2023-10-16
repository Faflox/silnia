//nakurwiam silnie 
#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
	long long liczba, liczba_b, silnia=1;
	cout << "podaj liczbe calkowita : " << endl;
	cin >> liczba;
	liczba_b = abs(liczba);
	for (int i = liczba_b; i > 1; i--)
	{
		silnia *= i;
	}
	cout << "wartosc nieujemna liczby n wynosi: " << liczba_b << endl;
	cout << "n! liczbyt wynosi: " << silnia;

}
