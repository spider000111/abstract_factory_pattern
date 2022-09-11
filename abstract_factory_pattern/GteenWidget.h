#pragma once
#include "IGreenWidgetFactory.h"
class GteenWidget : public IGreenWidgetFactory
{

public:

	int createScrollbar() {
		return 20;
	}
	int createButton() {
		return 21;
	}
};

