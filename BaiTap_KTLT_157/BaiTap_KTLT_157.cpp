#include "BaiTap_KTLT_157.h"


int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
}


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


void So_Max(int a, int b, int c)
{
	int max = a;

	if (max < b)
	{
		max = b;
	}

	if (max  < c)
	{
		max = c;
	}

	cout << "So Lon Nhat Trong 3 So La: " << max << endl;
	
}
