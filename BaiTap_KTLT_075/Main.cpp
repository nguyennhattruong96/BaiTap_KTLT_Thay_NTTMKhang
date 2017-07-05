#include"BaiTap_KTLT_075.h"

void main()
{
	int x = Input("nhap vao x:");
	
	if (KiemTra2k(x)== true)
	{
		cout << "so nay co dang 2K" << endl;
	}
	else
	{
		cout << "so nay khong co dang 2K" << endl;
	}

	system("pause");
}