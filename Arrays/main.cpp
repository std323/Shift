#include<iostream>
using namespace std;

//#define ARRAY

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAY
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[2] = 123;
	//cout << arr[2] << endl;
	// ���� ��������� ������� � ����������;
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
	//����� ������� �� ����� � �������� �������:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;
	//���������� ����� ��������� �������:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "�������-�������������� ��������� �������: " << (double)sum / n << endl;

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
#endif // ARRAY

		

}