#pragma once
//#define NDEBUG
#include<cassert>
#include "cocos2d.h"
#include "HelloWorldScene.h"
#include "view/MainScene.h"

USING_NS_CC;

/**
* @brief �Զ���ĳ���ɸѡ��,��һ��������
* @Author �ߤ��ͤ�
*/
class SceneManager : public Ref
{
public:

    //����ö����
    enum EnumSceneType
    {
        en_Min,
        en_HelloWorld,
        en_MainScene,
        en_GameScene,
        en_SettlementScene,
        en_Max
    };

public:

    //��õ���
    static SceneManager* getInstance();

    /**
    * @brief �ı䳡��
    * @param ��EnumSceneType type�� ���ڵ�ö���࣬���ڱ�ǳ���
    */
    void changeScene(EnumSceneType type);

private:

    SceneManager() {};

private:

    //��������������
    static SceneManager* _scene_manager;

};
