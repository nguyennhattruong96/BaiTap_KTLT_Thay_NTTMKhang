#include "BaiTap_KTLT_020.h"


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

void UocSo(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			cout << "uoc so cua"<< n <<"la:" << i << endl;
		}
	}
}
