#pragma once

//#define NDEBUG
#include<cassert>
#include "cocos2d.h"
USING_NS_CC;
#include"ui/CocosGUI.h"
using namespace ui;
#include "Tool/SceneManager.h"

/**
* @brief ��ʼ�ĵ�¼����,ʵ���ϼ̳���LayerȻ������main������
*/
class LoadingScene :public Layer
{
public:

	CREATE_FUNC(LoadingScene);

private:

	virtual bool init();

private:

	const Vec2 kVisibleSize = Director::getInstance()->getVisibleSize();

	//��¼���汳��
	Sprite* _bg = NULL;

	//��¼��ť
	Button* _login_button = NULL;

};

