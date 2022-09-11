#pragma once
#include "IWidgetFactory.h"
class IPinkWidgetFactory: public IWidgetFactory
{

public:

	virtual int createScrollbar() = 0;
	virtual int createButton() = 0;
};

