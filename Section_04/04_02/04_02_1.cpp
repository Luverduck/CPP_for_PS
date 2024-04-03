// Chapter 04. �޸�
// 02. �Լ�

#include <iostream>

using namespace std;

// �Լ� ���� (function prototype)
// �Լ��� ȣ���� �� �ʿ��� �������� ��Ÿ���� ǥ����
int Add(int a, int b);

// �Լ��� �μ��� �ּҰ��� �����ϴ� ���
void Add(int a, int b, int* ptr_sum);

int main()
{
	int a = 1;
	int b = 2;
	int sum;

	Add(a, b, &sum);

	cout << "sum = " << sum << endl;

	return 0;
}

// �Լ� ���� (function definition)
// �Լ� ������ ��ü���� ������ ��Ÿ���� ǥ����
int Add(int a, int b)
{
	return a + b;
}

// �Լ��� �μ��� �ּҰ��� �����ϴ� ���
void Add(int a, int b, int* ptr_sum)
{
	// a�� b�� ���� ���� result�� ����Ű�� �޸𸮿� ����
	*ptr_sum = a + b;
};