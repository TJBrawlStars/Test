#pragma once

//#define NDEBUG
#include<cassert>
#include "cocos2d.h"
USING_NS_CC;
#include"ui/CocosGUI.h"
using namespace ui;
#include "LoadingScene.h"
#include "RoomLayer.h"

class LoadingScene;
class RoomLayer;

/**
   * @brief ������
   */
class MainScene : public Scene
{
public:

    CREATE_FUNC(MainScene);

private:

    virtual bool init();

    /**
    * @brief ���ð�ť��add������
    * @param (Vec2 position)λ��
    * @param (std::string pic_name)ͼƬ·��
    */
    Button* ButtonCreate(Vec2 position, std::string pic_name1, std::string pic_name2 = "");

private:

    const Vec2 kVisibleSize = Director::getInstance()->getVisibleSize();

    //�����汳��
    Sprite* _bg = NULL;

    //loading��
   LoadingScene* _loading = NULL;

   //�˵�
   Button* _menu_button = NULL;

   //������Ϣ
   Button* _info_button = NULL;

   Button* _play_button = NULL;

   Sprite* _figure = NULL;

   //�����
   RoomLayer* _room = NULL;
};

