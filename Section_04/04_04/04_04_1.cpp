// Chapter 04. 메모리
// 04. 동적 할당

#include <iostream>

using namespace std;

int main()
{
	// 정적 메모리 할당 (Static Memory Allocation)
	// 컴파일 타임에 할당되는 메모리로 Stack 영역에 저장된다.
	// 컴파일 타임에 메모리의 크기가 결정되며 바꿀 수 없다.
	// - 정적으로 할당된 변수
	int var_static = 1;
	// - 정적으로 할당된 배열
	//int arr_static[5];
	int arr_static[] = { 1, 2, 3, 4, 5 };

	// 동적 메모리 할당 (Dynamic Memory Allocation)
	// 런타임에 할당되는 메모리로 Heap 영역에 저장된다.
	// 런타임에 메모리의 크기가 결정되며 바꿀 수 있다.
	// - 동적으로 할당된 변수
	int* var_dynamic = new int;
	// - 동적으로 할당된 배열
	int n;
	cin >> n;
	int* arr_dynamic = new int[n]; // n에 따라 메모리의 크기를 결정할 수 있다.
	// 동적으로 할당된 메모리는 반드시 직접 해제해야 한다.
	// - 동적으로 할당된 변수의 메모리 해제
	delete var_dynamic;
	// - 동적으로 할당된 배열의 메모리 해제
	delete[] arr_dynamic;

	return 0;
}