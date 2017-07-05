#include"BaiTap_KTLT_056.h"

void main()
{
	int x = Input("nhap vao x:");
	if (KiemTraSoLe(x))
	{
		cout << "day so nguyen " << x << " toan so le" << endl;
	}
	else
	{
		cout << "day so nguyen " << x << " co so chang" << endl;
	}
	system("pause");
}