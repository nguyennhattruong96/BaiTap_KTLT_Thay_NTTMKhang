#include "BaiTap_KTLT_075.h"

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void main()
{
	int x = Input ("Nhap vao x: ");
	
	if (KiemTra2k ( x ) == true)
	{
		cout << "So nay co dang 2K" << endl;
	}

	else
	{
		cout << "So nay khong co dang 2K" << endl;
	}

	system("pause");
}