// Персональный шаблон проекта C++
#include <iostream>
using namespace std;

template <typename T> T mean(T array[], int length) {
	T sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum / length;
}

int mean(int array[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum / length;
}
float mean(float array[], int length) {
	float sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum / length;
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	// Задача 1
	cout << "Задача 1.\nИзначальный массив:\n";
	float z1[5] = { 4.1, 4.9, 2.02, 0.101, 1.2 };
	for (int i = 0; i < 5; i++)
		cout << z1[i] << " ";
	cout << "\nСреднее арифметическое элементов массива = " << mean(z1, 5) << endl;

	return 0;
}