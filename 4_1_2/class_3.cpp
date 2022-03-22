#include "class_3.h"
#include <iostream>

void class_3::show_priv()
{
	cout << name << " " << num << endl;
}

class_3::class_3(string n, int a) :class_2(n, a)
{
	name = n + "_3";
	num = pow(a, 3);
}
