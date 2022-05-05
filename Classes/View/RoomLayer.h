#pragma once

//#define NDEBUG
#include<cassert>
#include "cocos2d.h"
USING_NS_CC;
#include"ui/CocosGUI.h"
using namespace ui;
#include "Tool/SceneManager.h"

/**
* @brief ���䳡��
*/
class RoomScene :public Layer
{
public:

	CREATE_FUNC(RoomScene);

private:

	virtual bool init();

private:

	const Vec2 kVisibleSize = Director::getInstance()->getVisibleSize();

	//��¼���汳��
	Sprite* _bg = NULL;

	//ѡ��hero��ť
	Button* _choose_hero = NULL;

	//��ʼ��ս��ť
	Button* _start;

};

