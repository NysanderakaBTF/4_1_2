#include "class_2.h"
#include <iostream>

void class_2::show_priv()
{
	cout << name << " " << num << endl;
}

class_2::class_2(string n, int a) :class_1(n, a)
{
	name = n+ "_2";
	num = pow(a, 2);
}
