#pragma once
#include "IPinkWidgetFactory.h"
class PinkWidget:public IPinkWidgetFactory
{

public:

	int createScrollbar() {
		return 10;
	}
	int createButton() {
		return 11;
	}
};

