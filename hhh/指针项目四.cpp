#include<iostream>
using namespace std;
int* f()
{
	int* list = new int[4];
	//list[] = { 1,2,3,4 };
	for (int i = 1; i <= 4; i++)
	{
		list[i - 1] = i;
	}
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[] p;
	//cout << f()[0] << endl;
	// 就这上面一行，即使你现在清除了p指针的内容及位置，
	// 但仍可以通过f()来调用，似
	// 乎对取数据仍然存在。所以说delete了个寂寞
}
