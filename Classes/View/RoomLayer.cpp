#include "RoomLayer.h"

bool RoomScene::init()
{
	if (!Layer::init())
		return false;

	////�㱳��
	//_bg = Sprite::create("");
	//assert(!_bg);
	//_bg->setPosition();
	//this->addChild(_bg);

	////��ʼ��Ϸ��ť
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
