#include<iostream>
using namespace std;

#define tab "\t"
//#define MIN_MAX_RAND
#define UNIQ_RAND_NUMB

void main()
{
	setlocale(LC_ALL, "");
#ifdef MIN_MAX_RAND
	const int n = 5;
	int arr[n];

	int minRand, maxRand;
	cout << "¬ведите минимальное число: "; cin >> minRand;
	cout << "¬ведите максимально случайное число: "; cin >> maxRand;


	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // MIN_MAX_RAND

#ifdef UNIQ_RAND_NUMB
	const int n = 10;
	int arr[n];
		

	for (int i = 0; i < n; i++)
	{
		arr[i] = 80 + rand() % 11;
			
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
				break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // UNIQ_RAND_NUMB

}