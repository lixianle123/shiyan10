#include<string>
#include <Windows.h>
#include<iostream>
using namespace std;

class Student     //学生类
{
private:
	string *name;
	bool gender;
	string id;
	double GPA;
	school S;
	date D;
	static int total;
	Student(char *na, bool ge, string Id, char *Sna, char *add, int year, int month, int day) :S(Sna), D(year, month, day)
	{
		this->name->na;
		this->gender = ge;
		this->id = Id;
		total++;
		cout << "已完成初始化" << endl;
	}
	int print();  //显示输出
};

class GPA   //绩点随机数
{
public:
	int run()
	{
		return (rand() % 4 + 1);
	}
};

class school   //学校类
{
private:
	char *sname;    //学校名称
public:
	school(char *sna)
	{
		if (sna)
		{
			sname = new char[strlen(sna) + 1];
			strcpy(sname, sna);
		}
	}
	void display()
	{
		cout << "学校名称:" << sname << endl;
	}
};

class date      //学生出生日期
{
private:
	int year;
	int month;
	int day;
public:
	date(int year, int month, int day)
	{
		this->year = year;
		this->month = month;
		this->day = day;
	}
	void display()
	{
		cout << "The student was born in " << year << "-" << month << "-" << day << endl;
	}
};

//测试函数
int main()
{
	Student A((char*)"LiMing", "F", "10071023", (char*)"山师", 1999, 10, 23);
	system("pause");
	return 0;
}