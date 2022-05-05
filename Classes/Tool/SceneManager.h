#pragma once
//#define NDEBUG
#include<cassert>
#include "cocos2d.h"
#include "HelloWorldScene.h"
#include "view/MainScene.h"

USING_NS_CC;

/**
* @brief 自定义的场景筛选器,是一个单例类
* @Author みけねこ
*/
class SceneManager : public Ref
{
public:

    //场景枚举类
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

    //获得单例
    static SceneManager* getInstance();

    /**
    * @brief 改变场景
    * @param （EnumSceneType type） 类内的枚举类，用于标记场景
    */
    void changeScene(EnumSceneType type);

private:

    SceneManager() {};

private:

    //场景管理器对象
    static SceneManager* _scene_manager;

};
