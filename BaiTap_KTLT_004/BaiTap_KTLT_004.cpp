#include "BaiTap_KTLT_004.h"

int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;
		if (n<0)
		{
			cout << "nhap vao so lon hon 0";
		}
	} while (n<0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}
double Sum(int n)
{
	if (n <= 0)
	{
		return false;
	}
	else
	{
		double s = 0;
		for (int i = 1; i <= n; i++)
		{
			s += 1.0 / (2 * i);
		}
		return s;
	}

}