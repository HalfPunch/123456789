#include <iostream>
#include "vector.h"
#include "circle.h"

// Реализация класса комплексных чисел представлена в задании 1

using namespace std;

int main()

{
	vectors vec1(1, 2, 2);
	vectors vec2(2, 4, 4);
	vectors vec3 = sum(vec1, vec2);
	cout << "\nvec1\nx:" << vec1.get_x() << "\ny:" << vec1.get_y() << "\nz:" << vec1.get_z() << "\nlen:" << vec1.vectorLen() << endl;
	cout << "\nvec2\nx:" << vec2.get_x() << "\ny:" << vec2.get_y() << "\nz:" << vec2.get_z() << "\nlen:" << vec2.vectorLen() << endl;
	cout << "\nvec3\nx:" << vec3.get_x() << "\ny:" << vec3.get_y() << "\nz:" << vec3.get_z() << "\nlen:" << vec3.vectorLen() << endl;

	circle cir1(1, 1, 1, 5);
	cout << "\ncir\nsqr:" << cir1.circleSqr() << endl;
}