#include"BaiTap_KTLT_057.h"

void main()
{
	int x = Input("nhap vao x:");
	if (KiemTraSoChang(x) == true)
	{
		cout << "day so nguyen " << x << " toan so chang" << endl;
	}
	else
	{
		cout << "day so nguyen " << x << " co so le" << endl;
	}
	system("pause");
}