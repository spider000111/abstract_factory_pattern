#pragma once
class IWidgetFactory
{
public:

	virtual int createScrollbar() = 0;
	virtual int createButton() = 0;

};

