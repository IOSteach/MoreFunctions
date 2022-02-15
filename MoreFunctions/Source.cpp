// Персональный шаблон проекта C++
#include <iostream>
using namespace std;

template <typename T1, typename T2> T1 maxFunc(T1 num1, T2 num2) {
	return num1 > num2 ? num1 : num2;
}


int main() {
	setlocale(LC_ALL, "Russian");
	float n, m;
	cin >> n >> m;

	cout << maxFunc(n, m) << endl;
	cout << maxFunc(8, 4.9) << endl;
	cout << maxFunc(true, true);

	short a = 3, b = 4;
	cout << maxFunc(a, b);
	cout << "Конец!";

	return 0;
}