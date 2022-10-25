
#include <iostream>
#include "Header.h"//подключение файла-заголовочника
//с прототипами функций
#include "structures.h"//подключение файла-заголовочника с описанием
//структуры и прототипами функций
#include "data.h"// подключение файла-заголовочника
// с доп переменными
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//Библиотека с функциями
	/*cout << sum_AB(5, 4) << '\n';

	const int size = 5;
	int arr[size]{ 1, 2, 3, 4, 5 };
	show_arr(arr, size);
	cout << "Введите число: ";
	cin >> n;
	cout << absolute(n) << '\n';*/
	//Библиотека со структурами
	/*person tom{"Tom Smith", 18, "manager" , 45000};
	show_person(tom);*/
	//
	cout << "PI = _PI" << _PI << '\n';
	_N = 10;
	cout << "N = _N" << _N << '\'n';

	return 0;
}
