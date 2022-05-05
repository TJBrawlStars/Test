#include "MainScene.h"

bool MainScene::init()
{
	if (!Scene::init())
		return false;

	////设置背景
	//_bg = Sprite::create("");
	//assert(_bg != NULL);
	//this->addChild(_bg);
	//_bg->setPosition(kVisibleSize / 2);

	////设置loading界面
	//_loading = LoadingScene::create();
	//assert(_loading != NULL);
	//this->addChild(_loading);

	////各种按钮的实现
	//_menu_button = ButtonCreate();
	//_menu_button->addClickEventListener([](Ref*)
	//	{
	//		//这里塞一个层，层上有各种按钮
	//	});
	//_info_button= ButtonCreate();
	//_info_button->addClickEventListener([](Ref*)
	//	{
	//		//弹出个人信息显示层
	//	});
	//_play_button = ButtonCreate();
	//_play_button->addClickEventListener([](Ref*)
	//	{
	//		//进入创建房间层
	//	});

	////主界面显示的人物
	//_figure = Sprite::create();
	//assert(_figure != NULL);
	//_figure->setPosition(kVisibleSize / 2);
	//this->addChild(_figure);





	return true;
}

Button* MainScene::ButtonCreate(Vec2 position, std::string pic_name1, std::string pic_name2)
{
	assert(position.x<0 || position.x>kVisibleSize.x || position.y<0 || position.y>kVisibleSize.y);

	decltype(Button::create()) button;
	if (pic_name2 == "")
		button = Button::create(pic_name1);
	else
		button = Button::create(pic_name1, pic_name2);

	assert(button != NULL);

	button->setPosition(position);
	this->addChild(button);
	return button;
}
