#include<iostream>
using namespace std;

void printNum(int a[], int len)
{
	for (int i = 0; i < 10; i++)
	{
		int random = rand()%61+40;
		a[i] = random;

		cout << a[i] << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));

	int a[10];
	int len = sizeof(a) / sizeof(a[0]);
	printNum(a, len);

	system("pause");
	return 0;
}