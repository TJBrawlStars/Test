#pragma once
//#define NDEBUG
#include<cassert>
#include "cocos2d.h"
#include "HelloWorldScene.h"
#include "View/MainScene.h"
#include "View/GameScene.h"
#include "View/SettlementScene.h"

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

  /**
  * @brief �ж��ǲ��ǵ�һ�����г���
  */
    bool isFirst() { return _first; }

private:

    SceneManager() {};

private:

    //��������������
    static SceneManager* _scene_manager;

    bool _first = true;

};
