#include<iostream>
#include<Windows.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARRAY_MIN_MAX
//#define ARRAY_SHIFT_LEFT
//#define SHIFT_LEFT_1
//#define SHIFT_LEFT_1_1
//#define SHIFT_RIGHT

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAY_MIN_MAX
	const int n = 5;
	int arr[n] = { 3,5,8 };
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

#endif // ARRAY_MIN_MAX

	// Циклический сдвиг массива на заданное число элементов влево:
#ifdef ARRAY_SHIFT_LEFT
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	int sh;
	int buf = arr[0];
	cout << "Введите количество элементов для сдвига влево: "; cin >> sh;
	for (int i = 0; i < n; i++)
	{
		if (i == n - sh)
		{
			arr[i] = buf;
			break;
		}
		arr[i] = arr[i + sh];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
#endif // ARRAY_SHIFT_LEFT

#ifdef SHIFT_LEFT_1
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	//Вывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Сдвиг массива
	int number_of_shifts;

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
	//Вывод сдвинутого массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}

	cout << endl;
#endif // SHIFT_LEFT_1

#ifdef SHIFT_LEFT_1_1
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	//Вывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Сдвиг массива

	int number_of_shifts;

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;

		Sleep(1000); //Фунуция Sleep() приостанавливает выполнение программы на заданное число миллисекунд.
		system("CLS");

		//Вывод сдвинутого массива на экран
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}

		cout << endl;
	}
#endif // SHIFT_LEFT_1_1

#ifdef SHIFT_RIGHT
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	//Вывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int number_of_shifts;

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n-1];
		for (int i = n-2; i >=0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;

		Sleep(1000); //Фунуция Sleep() приостанавливает выполнение программы на заданное число миллисекунд.
		system("CLS");

		//Вывод сдвинутого массива на экран
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}

		cout << endl;
	}
#endif // SHIFT_RIGHT

	
	}
