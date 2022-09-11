#pragma once
#include "IWidgetFactory.h"
class IGreenWidgetFactory : public IWidgetFactory
{

public:

	virtual int createScrollbar() = 0;
	virtual int createButton() = 0;
};

