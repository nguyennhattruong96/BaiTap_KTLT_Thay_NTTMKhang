#include "BaiTap_KTLT_038.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;
		if (n<=0)
		{
			cout << "so ban nhap la 0 hoac la so am hay nhap vao so khac"<<endl;
		}
	} while (n<=0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

double sum(int n)
{
	double s = 0;
	for (int i = 1; i<=n; i++)
	{
		s = pow(1.0*(i + s), 1.0 / (i + 1));
	}
	return s;
}
