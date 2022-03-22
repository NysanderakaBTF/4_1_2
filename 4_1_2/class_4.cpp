#include "class_4.h"
#include <iostream>

void class_4::show_priv()
{
	cout << name << " " << num;
}

class_4::class_4(string n, int a) :class_3(n, a)
{
	name = n + "_4";
	num = pow(a, 4);
}
