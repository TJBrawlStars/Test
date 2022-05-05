#include "RoomLayer.h"
#pragma execution_character_set("utf-8")  

bool RoomLayer::init()
{
	if (!Layer::init())
		return false;

	//�㱳��
	_bg = Sprite::create("HelloWorld.png");
	assert(_bg != NULL);
	_bg->setPosition(kVisibleSize / 2);
	this->addChild(_bg);

	//��ʼ��Ϸ��ť
	_start = Button::create("CloseNormal.png");
	assert(_start != NULL);
	_start->setPosition(kVisibleSize / 2);
	this->addChild(_start);
	_start->addClickEventListener([](Ref*)
		{
			SceneManager::getInstance()->changeScene(SceneManager::EnumSceneType::en_GameScene);
		});

	auto label = Label::createWithSystemFont("�����", "����Ҧ��", 50);
	label->setPosition(kVisibleSize.x / 2, kVisibleSize.y / 2 - 200);
	this->addChild(label);


	return true;
}
