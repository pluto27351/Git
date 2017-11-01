#pragma once

#include "cocos2d.h"

USING_NS_CC;

class C3B : public cocos2d::Layer
{
private:
	Point pt;
	Sprite *ShowBtn;
	//Sprite *Normal, *Touched, *Disable ;
	Rect touchArea;
	Size  sz;
	char *Normal, *Touched, *Disable;
	
public:
	bool flag;
	void Setbtn(Point, char*, char*, char*);

	void isTouched(Point mouse);
	void isLeave(Point mouse);
	void Change();


	CREATE_FUNC(C3B);
};