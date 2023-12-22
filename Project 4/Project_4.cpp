#include <iostream>

void TinhTong(int N)
{
	int Tong = 0;
	for (int i = 1; i <= N; ++i)
	{	
		Tong += i;
		//std::cout << "Tong la: " << Tong;
	}
	std::cout << "Tong la: " << Tong;
}
int main()
{
	int N;
	do
	{
		std::cout << "Nhap N: ";
		std::cin >> N;
		TinhTong(N);
		std::cout << std::endl;
	} while (N != 0);
}