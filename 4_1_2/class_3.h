#pragma once
#include "class_2.h"
class class_3 :
	public class_2
{
private:
	int num;
	string name;
public:
	virtual void show_priv() override;
	class_3(string, int);
};

