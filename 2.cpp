#include<string>
#include <Windows.h>
#include<iostream>
using namespace std;

class Student     //ѧ����
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
		cout << "����ɳ�ʼ��" << endl;
	}
	int print();  //��ʾ���
};

class GPA   //���������
{
public:
	int run()
	{
		return (rand() % 4 + 1);
	}
};

class school   //ѧУ��
{
private:
	char *sname;    //ѧУ����
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
		cout << "ѧУ����:" << sname << endl;
	}
};

class date      //ѧ����������
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

//���Ժ���
int main()
{
	Student A((char*)"LiMing", "F", "10071023", (char*)"ɽʦ", 1999, 10, 23);
	system("pause");
	return 0;
}