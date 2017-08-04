#include "BaiTap_KTLT_060.h"

#include <iostream>
#include <string>

using namespace std;


void main()
{
	int x = Input ("nhap vao x: ");

	if (KiemTraTang ( x ) )
	{
		cout << "Day nay la day tang" << endl;
	}

	else
	{
		cout << "Day nay khong la day tang" << endl;
	}

	system("pause");
}