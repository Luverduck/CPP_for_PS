// Chapter 02. �⺻ �����
// 02. �ڷ���
/*
	����
	- ������ ������ �� �ݵ�� �ڷ����� �����ؾ� �Ѵ�.
	- �� �� ������ ������ �ڷ����� �ٲ� �� ����.
	- ������ ���������� �޸𸮸� ������ �ִ�.

	�ڷ���
	- ������ ����Ǵ� �������� ����
*/

#include <iostream>

using namespace std;

int main()
{
	// ������ ���� (scope)
	int i = 123;

	{
		int i = 456;
		cout << i << endl;
	}

	cout << i << endl;

	return 0;
}