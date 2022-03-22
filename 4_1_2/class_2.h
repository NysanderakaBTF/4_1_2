#pragma once
#include "class_1.h"
class class_2 :
	public class_1
{
private:
	int num;
	string name;
public:
	virtual void show_priv() override;
	class_2(string, int);
};

