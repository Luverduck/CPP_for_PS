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
	// ����ü ������ ����
	MyStruct var_struct;
	var_struct.first = 1;
	var_struct.second = 2;
	// ����ü ������ ���� ��� �Լ� ����
	cout << var_struct.Sum() << endl;

	// ����ü �������� ����
	MyStruct* ptr_struct = new MyStruct;
	ptr_struct->first = 3;
	ptr_struct->second = 4;
	// ����ü �����͸� ���� ��� �Լ� ����
	cout << ptr_struct->Sum() << endl;
	// [���] 7

	return 0;
}