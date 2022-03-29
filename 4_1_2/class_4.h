#pragma once
#include "class_3.h"
class class_4 :
	private class_3
{
private:
	int num;
	string name;
public:
	virtual void show_priv() override;
	class_4(string, int);
};

