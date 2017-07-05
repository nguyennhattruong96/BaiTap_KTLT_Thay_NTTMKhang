#include "BaiTap_KTLT_032.h"


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

bool KiemTraSoChinhPhuong(int n)
{
	return (n == sqrt(n)*sqrt(n));
}
