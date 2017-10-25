#ifndef __SCENE_101_H__
#define __SCENE_101_H__

#include "cocos2d.h"

USING_NS_CC;

class Scene102 : public cocos2d::Layer
{
private:
	Sprite *cuberbtn;
	Sprite *replaybtn;
	Sprite *returnbtn;
	Rect    rectCuber;
	Rect    rectReplay;
	Rect    rectReturn;




	bool _bTouched = false;
	float _felaptime;
	float _fangle;
	cocos2d::Sprite *_bean;
	Rect    _rectBean;
	bool    _bOnBean = false;
	Point   _tp;

	cocos2d::Rect    rectBean;
	int  _sceneno;
	char _cSceneNo[10];
	Label *label1;

public:
	Scene102();
	~Scene102();
    static cocos2d::Scene* createScene();

    virtual bool init();
	void doStep(float dt);

	//Ĳ�I
	cocos2d::EventListenerTouchOneByOne *_listener1;
	bool onTouchBegan(cocos2d::Touch *pTouch, cocos2d::Event *pEvent); //Ĳ�I�}�l�ƥ�
	void onTouchMoved(cocos2d::Touch *pTouch, cocos2d::Event *pEvent); //Ĳ�I���ʨƥ�
	void onTouchEnded(cocos2d::Touch *pTouch, cocos2d::Event *pEvent); //Ĳ�I�����ƥ� 
    
    // implement the "static create()" method manually
    CREATE_FUNC(Scene102);

};

#endif // __SCENE_101_H__
