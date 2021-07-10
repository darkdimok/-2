#include <iostream>
//Задание 1
//Вариант 4
int source[1000];
void deleteList(int* source, int n, int size) {
	int temp;
	for (int i = 0, j; i < n; ++i)
	{
		temp = source[0];
		for (j = 0; j < size - 1; ++j)
			source[j] = source[j + 1];
		source[j] = temp;
	}
	source[0] = 0;
	source[size - 1] = 0;
}
//Задание 2
void test(int n, int size) {
	if (n < 0 || size <= 0) {
		std::cout << "test error";
		system("Pause");
		exit(1);
	}
	else {
		std::cout << "test complete" << std::endl;
	}
}

int main() {
	int n, size, i;
	std::cout << "array size ";
	std::cin >> size;
	for (i = 0; i < size; i++) {
		std::cout << "enter i element " << i;
		std::cin >> source[i];
	}
	std::cout << "how much to move ";
	std::cin >> n;
	test(n, size);
	deleteList(source, n, size);
	for (i = 0; i < size; i++)
		std::cout << source[i];
}
