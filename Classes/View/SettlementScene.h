#pragma once

//#define NDEBUG
#include<cassert>
#include "cocos2d.h"
USING_NS_CC;
#include"ui/CocosGUI.h"
using namespace ui;
#include "Tool/SceneManager.h"

/**
 * @brief ���㳡��
 */
class SettlementScene : public Scene
{
public:

    CREATE_FUNC(SettlementScene);

private:

    virtual bool init();

private:
     
    const Vec2 kVisibleSize = Director::getInstance()->getVisibleSize();
    
    //������ť
    Button* _continue = NULL;

};