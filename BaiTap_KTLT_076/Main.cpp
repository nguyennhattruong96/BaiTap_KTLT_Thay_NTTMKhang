#include"BaiTap_KTLT_076.h"

void main()
{
	int x = Input("nhap vao x:");

	if (KiemTra3k(x) == true)
	{
		cout << "so nay co dang 3K" << endl;
	}
	else
	{
		cout << "so nay khong co dang 3K" << endl;
	}

	system("pause");
}