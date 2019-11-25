//example5_02.cpp:对象成员构造函数参数的传递
#include<iostream>
using namespace std;

class A
{
public:
	A(int a)
	{
		x = a;
		cout << "A: x = " << a << endl;
	}
private:
	int x;
};

class B
{
public:
	B(int a, int b, int c) 		
	{
		a1.x = a;
		a2.x = b;
		y = c;
		cout << "B: y = " << c << endl;
	}
private:
	A a1, a2;                          //有两个对象成员，B类包含了A类
	int y;
};

int main()
{
	B obj(10, 20, 30);
	return 0;
}