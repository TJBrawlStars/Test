#include "RoomLayer.h"

bool RoomScene::init()
{
	if (!Layer::init())
		return false;

	////层背景
	//_bg = Sprite::create("");
	//assert(!_bg);
	//_bg->setPosition();
	//this->addChild(_bg);

	////开始游戏按钮
	//_start = Button::create("");
	//assert(!_start);
	//_start->setPosition();
	//this->addChild(_start);
	//_start->addClickEventListener([](Ref*)
	//	{
	//		SceneManager::getInstance()->changeScene(SceneManager::EnumSceneType::en_GameScene);
	//	});


	return true;
}
