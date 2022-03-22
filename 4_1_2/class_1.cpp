#include "class_1.h"
#include <iostream>

void class_1::show_priv()
{
	cout << name <<" "<< num << endl;
}

class_1::class_1(string n, int a)
{
	name = n+"_1";
	num = pow(a, 1);
}
