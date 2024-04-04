// Chapter 05. ���� �����
// 01. ����ü
/*
	����ü (Structure)
	���� �ڷ����� ������ ������Ʈ�� ���������� ������ ������ �ڷ���
	- ����ü�� ��� �������� ���ӵ� �޸� ������ �Ҵ�ȴ�.
*/

#include <iostream>

using namespace std;

// ����ü�� ����
/*
	struct [�±׸�]
	{
		[��� �ڷ���] [��� �̸�];
		[��� �ڷ���] [��� �̸�];
		...
		[��� �ڷ���] [��� �̸�];
	};
*/
struct Person
{
	float height;
	float weight;
	int age;
};

int main()
{
	// ����ü ������ ����
	// - ����� ���ÿ� �ʱ�ȭ
	struct Person p1 = { 188.0, 75.0, 55 };
	// - ����� �ʱ�ȭ �и�
	struct Person p2;
	p2.height = 180.0;
	p2.weight = 70.0;
	p2.age = 58;

	return 0;
}