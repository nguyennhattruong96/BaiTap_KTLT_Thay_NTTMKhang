#include "BaiTap_KTLT_012.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "So nhap la so am hay nhap lai" << endl;
		}

	} while (n < 0);

	return n;
}


void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

//double Mu(int x, int n)
//{
//	long double mu = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		mu *= x;
//	}
//	return mu;
//}
//


double Tong(int x, int n)
{
	int s = 0;

	for (int  i = 0; i <= n; i++)
	{
		s += pow (x, i);
	}

	return s;
}
