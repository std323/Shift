#include<iostream>
using namespace std;

//#define ARRAY_MIN_MAX
#define ARRAY_SHIFT

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAY_MIN_MAX
	const int n = 5;
	int arr[n] = { 3,5,8 };
	cout << "������� �������� ������� (" << n << " ��.):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; //���������� � �������� ������� �� ������;
	}
	// ����� ������� �� �����;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";//���������� � ��������� ������� �� ������;
	}
	cout << endl;

	//����� ������������ � ������������� �������� � �������:
	int min = arr[0], max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		else if (arr[i] > max)
			max = arr[i];
	}
	cout << "����������� ��������: " << min << endl;
	cout << "������������ ��������: " << max << endl;

#endif // ARRAY_MIN_MAX

	// ����������� ����� ������� �� �������� ����� ��������� �����:
#ifdef ARRAY_SHIFT
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	int sh;
	int buf = arr[0];
	cout << "������� ���������� ��������� ��� ������ �����: "; cin >> sh;
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
#endif // ARRAY_SHIFT

}
