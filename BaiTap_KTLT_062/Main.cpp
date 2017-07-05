#include"BaiTap_KTLT_062.h"

void main()
{
	int x = Input("nhap vao x:");
	if (KiemTraTang(x))
	{
		cout << "day nay la day tang" << endl;
	}
	else
	{
		cout << "day nay khong la day tang" << endl;
	}
	system("pause");
}