#include<Windows.h>
#include <iostream>
using namespace  std;

//1.����С���ѽڵ���
class Child
{
public:
	int childNo;         //��ǰС���ı��
	Child* leftchild;    //��¼С����������ھ�
	Child* rightchild;   //��¼С����������ھ�
public:
	//���캯��
	Child(int num = 0)
	{
		childNo = num;
		leftchild = NULL;
		rightchild = NULL;
	}
};

//2.����ԲȦ��Ϸ��
class Circle
{
public:
	int scale;  //��ǰ���ڲ�����Ϸ������
	Child children[1000];
public:
	// ���캯������ʼ��ÿ��С������ڵ�ı��
	Circle(int num = 1000)
	{
		scale = num;
		for (int i = 0; i < num; i++)
		{
			children[i] = Child(i);
		}
	};

	//�����ڵ��ѭ����������ȷ��ÿ��С���������ھ�
	void Build()
	{
		for (int i = 0; i < scale; i++)
		{
			if (i == 0)
			{
				children[i].rightchild = &children[1];
				children[i].leftchild = &children[scale - 1];
			}
			else if (i == (scale - 1))
			{
				children[i].rightchild = &children[0];
				children[i].leftchild = &children[scale - 2];
			}
			else
			{
				children[i].rightchild = &children[i + 1];
				children[i].leftchild = &children[i - 1];
			}
		}
	}
	//��Ϸ���к������ӵ�ǰ�ڵ�˳ʱ��ѭ����ʼ��num����
	void Run(int T)
	{
		int count = 1;
		Child* current = &children[0];
		while (scale > 1)
		{
			//quit the circle
			if (count == T)
			{
				// ��ǰ����T��С���˳���Ϸ��������Ϸ��������1��
				scale = scale - 1;
                //�ѵ�ǰ�����С���������ھ���������������
				current->leftchild->rightchild = current->rightchild;
				current->rightchild->leftchild = current->leftchild;
				current = current->rightchild;
				count = 1;
			}
			else  //count the next	            		
			{
				count = count + 1;
				current = current->rightchild;
			}
		}
		cout << "The last child id is " << current->childNo << endl;
	}
};

int main()
{
	Circle nodes(5); // ԲȦ������100���ڵ����С����
	nodes.Build();
	nodes.Run(3);     // ��ʼѭ����������7������Ϸ��������Ļ�ʤ��
	system("pause");
	return 0;
}
