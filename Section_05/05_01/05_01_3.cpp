// Chapter 05. ���� �����
// 01. ����ü
/*
	����ü (Structure)
	���� �ڷ����� ������ ������Ʈ�� ���������� ������ ������ �ڷ���
	- ����ü�� ��� �������� ���ӵ� �޸� ������ �Ҵ�ȴ�.
*/

#include <iostream>

using namespace std;

struct MyStruct
{
	// ����ü�� ��� ����
	int first;
	int second;

	// ����ü�� ��� �Լ�
	int Sum()
	{
		return first + second;
	}
};

int main()
{
	// ����ü�� �迭
	// - ����ü�� ��ҷ� �ϴ� �迭�� ������ �� �ִ�.
	MyStruct arr_struct[10];

	// ����ü �迭�� ��� ��� �ʱ�ȭ
	for (int i = 0; i < 10; i++)
	{
		arr_struct[i].first = i;
		arr_struct[i].second = i * 10;
	};

	// ����ü �迭�� �� ��ҿ��� ��� �Լ� ȣ��
	for (int i = 0; i < 10; i++)
	{
		cout << arr_struct[i].Sum() << endl;
	};

	return 0;
}