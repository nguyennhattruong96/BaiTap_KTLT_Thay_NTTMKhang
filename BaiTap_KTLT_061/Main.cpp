#include"BaiTap_KTLT_061.h"

void main()
{
	int x = Input("nhap vao x:");
	if (KiemTraTang(x))
	{
		cout << "day nay la day giam" << endl;
	}
	else
	{
		cout << "day nay khong la day giam" << endl;
	}
	system("pause");
}