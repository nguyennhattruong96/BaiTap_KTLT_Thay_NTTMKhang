#include"BaiTap_KTLT_031.h"

void main()
{
	int x = Input("nhap vao x:");
	if (KiemTraSoNguyenTo(x))
	{
		cout << x << "la so nguyen to" << endl;
	}
	else
	{
		cout << x << "khong la so nguyen to" << endl;
	}
	system("pause");
}