#include "BaiTap_KTLT_141.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input ("Nhap vao x: ");

	if (KiemTraGiam ( x ) )
	{
		cout << "Day nay la day giam" << endl;
	}

	else
	{
		cout << "Day nay khong la day giam" << endl;
	}

	system("pause");
}