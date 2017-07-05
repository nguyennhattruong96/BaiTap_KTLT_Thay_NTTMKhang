#include "BaiTap_KTLT_033.h"


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

void sum(int n)
{
	float s = 0;
	for (int i = 0; i<n; i++)
	{
		s = sqrt(2 + s);
	}
	cout << "tong la:" << s << endl;
}
