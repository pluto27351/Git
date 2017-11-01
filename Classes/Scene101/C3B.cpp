#include "C3B.h"

void C3B::Setbtn(Point pos, char *name1, char *name2, char *name3) {
	pt = pos;
	/*this->Normal = Sprite::createWithSpriteFrameName(name1);
	this->Touched = Sprite::createWithSpriteFrameName(name2);
	this->Disable = Sprite::createWithSpriteFrameName(name3);*/
	Normal = name1;
	Touched = name2;
	Disable = name3;
	flag = false;

	ShowBtn = Sprite::createWithSpriteFrameName(Normal);
	ShowBtn->setPosition(pt);
	ShowBtn->setScale(1);
	sz = ShowBtn->getContentSize();
	touchArea = Rect(pt.x - sz.width / 2, pt.y - sz.height / 2, sz.width, sz.height);
	this->addChild(ShowBtn, 0);
}


void C3B::isTouched(Point mouse) {
	if (touchArea.containsPoint(mouse)) {
		flag = true;
		ShowBtn->setSpriteFrame(Touched);
		//ShowBtn = Touched;
	}

}
void C3B::isLeave(Point mouse) {
	if (mouse.x > (pt.x - sz.width / 2) || mouse.x < (pt.x + sz.width / 2) || mouse.y >(pt.y + sz.height / 2) || mouse.y < (pt.y - sz.height / 2)) {
		flag = false;
		ShowBtn->setSpriteFrame(Normal);
		//ShowBtn = Normal;
	}

}
void C3B::Change() {
	ShowBtn->setSpriteFrame(Disable);
	//ShowBtn = Disable;
}