// Chapter 04. �޸�
// 04. ���� �Ҵ�

#include <iostream>

using namespace std;

int main()
{
	// ���� �޸� �Ҵ� (Static Memory Allocation)
	// ������ Ÿ�ӿ� �Ҵ�Ǵ� �޸𸮷� Stack ������ ����ȴ�.
	// ������ Ÿ�ӿ� �޸��� ũ�Ⱑ �����Ǹ� �ٲ� �� ����.
	// - �������� �Ҵ�� ����
	int var_static = 1;
	// - �������� �Ҵ�� �迭
	//int arr_static[5];
	int arr_static[] = { 1, 2, 3, 4, 5 };

	// ���� �޸� �Ҵ� (Dynamic Memory Allocation)
	// ��Ÿ�ӿ� �Ҵ�Ǵ� �޸𸮷� Heap ������ ����ȴ�.
	// ��Ÿ�ӿ� �޸��� ũ�Ⱑ �����Ǹ� �ٲ� �� �ִ�.
	// - �������� �Ҵ�� ����
	int* var_dynamic = new int;
	// - �������� �Ҵ�� �迭
	int n;
	cin >> n;
	int* arr_dynamic = new int[n]; // n�� ���� �޸��� ũ�⸦ ������ �� �ִ�.
	// �������� �Ҵ�� �޸𸮴� �ݵ�� ���� �����ؾ� �Ѵ�.
	// - �������� �Ҵ�� ������ �޸� ����
	delete var_dynamic;
	// - �������� �Ҵ�� �迭�� �޸� ����
	delete[] arr_dynamic;

	return 0;
}