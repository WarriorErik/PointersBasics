// Recinos Erik Pointers Lab Part TWO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TriangleHeap.h"
#include "TriangleStack.h"
#include <vector>
using namespace std;


int AddNumbersReturnInt(int* a, int* b)
{
	return *a + *b;
}

void AddNumbersReturnVoid(int a, int b, int* sum)
{
	*sum = a + b;
}

void SwapValues(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	int sum;
	std::cout << "Solution 1 : ";
	std::cout << AddNumbersReturnInt(&a, &b) << std::endl;
	std::cout << "Solution 2 : ";
	AddNumbersReturnVoid(a, b, &sum);
	std::cout << sum << std::endl;
	std::cout << "Solution 3 : " << std::endl;
	std::cout << "Before swap, a = " << a << ", b = " << b << std::endl;
	SwapValues(&a, &b);
	std::cout << "After swap, a = " << a << ", b = " << b << std::endl;

	std::cout << "Solution 4 : " << std::endl;
	TriangleStack t1;
	t1.setBase(3.0);
	t1.setHeight(4.0);
	TriangleStack t2;
	t2.setBase(7.0);
	t2.setHeight(9.0);

	vector<TriangleStack> triangles;
	triangles.push_back(t1);
	triangles.push_back(t2);

	for (TriangleStack i : triangles)
		std::cout << "area of triangle(stack) = " << i.GetArea() << std::endl;

	std::cout << "Solution 5 : " << std::endl;
	TriangleHeap t3 = TriangleHeap(5.0, 8.0);
	TriangleHeap t4 = TriangleHeap(9.0, 12.0);

	vector<TriangleHeap> trianglesHeap;
	trianglesHeap.push_back(t3);
	trianglesHeap.push_back(t4);

	for (TriangleHeap i : trianglesHeap)
		std::cout << "area of triangle(heap) = " << i.GetArea() << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
