#include "BaiTap_KTLT_012.h"

int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

double Mu(int x, int n)
{
	long double mu = 1;

	for (int i = 1; i <= n; i++)
	{
		mu *= x;
	}
	return mu;
}
//
//void Tong(int x, int n)
//{
//	int s = 0;
//	for (int  i = 0; i < length; i++)
//	{
//
//	}
//}
