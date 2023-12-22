#include <iostream>


void HoanVi(int x, int y)
{
	int Tam = x;
		x = y;
		y = Tam;
	std::cout << "Gia tri cua 2 so: " << x << " va " << y;
}

//void HoanVi1(int &x, int &y)
//{
//	int Tam = x;
//	x = y;
//	y = Tam;
//	std::cout << "Gia tri cua 2 so: " << x << " va " << y;
//}

int main() {
	int a = 10, b = 20;
	/*std::cout << "Nhap so a: ";
	std::cin >> a;
	std::cout << "Nhap so b: ";
	std::cin >> b;*/
	HoanVi(a, b);
	//HoanVi1(a, b);
	std::cout << std::endl;
	std::cout << "Gia tri cua 2 so: " << a << " va " << b;
	return 0;
}

