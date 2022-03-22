#include <iostream>
#include <string>
#include "class_1.h"
#include "class_2.h"
#include "class_3.h"
#include "class_4.h"
using namespace std;
int main()
{
    string n; int a;
    cin >> n >> a;
    class_1* p;
    class_4 c4(n, a);
    p = &c4;
    p->class_1::show_priv();
    ((class_2*)p)->class_2::show_priv();
    ((class_3*)p)->class_3::show_priv();
    ((class_4*)p)->class_4::show_priv();
}

