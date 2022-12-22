#include <iostream>
using namespace std;

unsigned int Rrand();
void Fill(int X[], unsigned int n);
void Print(int X[], unsigned int n);
void Sort(int X[], unsigned int n);
void Sum(int X[], unsigned int n);

int main()
{
	const unsigned int n = 10;
	int X[n];

	Fill(X, n);
	cout << "Generated array: ";
	Print(X, n);
	
	Sort(X, n);
	cout << "Sorted array: ";
	Print(X, n);
	cout << endl;

	Sum(X, n);
}

unsigned int Rrand()
{
	static unsigned int rand = 9999;
	rand = (9999999 * rand + 9999999);
	return rand % 3;
}

void Fill(int X[], unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		X[i] = Rrand();
	}
}

void Print(int X[], unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << X[i] << " ";
	}
	cout << endl;
}

void Sort(int X[], unsigned int n)
{
	unsigned int temp = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (X[j] < X[j - 1])
			{
				temp = X[j - 1];
				X[j - 1] = X[j];
				X[j] = temp;
			}
		}
	}
}

void Sum(int X[], unsigned int n)
{
	unsigned int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += X[i];
	}
	cout << "The sum of array elements is equal to " << sum << endl;
}