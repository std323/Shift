#include<iostream>
using namespace std;

#define ARRAY
#define MIN_MAX
#define MIN_MAX_1

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAY
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[2] = 123;
	//cout << arr[2] << endl;
	// ВВод элементов массива с клавиатуры;
	cout << "Введите элементы массива (" << n << " шт.):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; //обращаемся к элементу массива на запись;
	}
	// Вывод массива на экран;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";//обращаемся к элементам массива на чтение;
	}
	cout << endl;
	//Вывод массива на экран в обратном порядке:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;
	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее-арифметическое элементов массива: " << (double)sum / n << endl;

	//Поиск минимального и максимального значения в массиве:
	int min = arr[0], max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		else if (arr[i] > max)
			max = arr[i];
	}
	cout << "Минимальное значение: " << min << endl;
	cout << "Максимальное значение: " << max << endl;
#endif // ARRAY

#ifdef MIN_MAX
	int min; max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
		//i- номер элемента массива
		//arr[i]- значение элемента массива с номером 'i'
	}
	cout << "Минимальное значение: " << min << endl;
	cout << "Максимальное значение: " << max << endl;

#endif // MIN_MAX

#ifdef MIN_MAX_1
	int index_of_min, index_of_max;
	index_of_min = index_of_max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr[index_of_min])index_of_min = i;
		if (arr[i] > arr[index_of_max])index_of_max = i;
	}
	cout << "Минимальное значение: " << arr[index_of_min] << endl;
	cout << "Максимальное значение: " << arr[index_of_max] << endl;
#endif // MIN_MAX_1
	
	

}
