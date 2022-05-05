#include "MainScene.h"

bool MainScene::init()
{
	if (!Scene::init())
		return false;

	////���ñ���
	//_bg = Sprite::create("");
	//assert(_bg != NULL);
	//this->addChild(_bg);
	//_bg->setPosition(kVisibleSize / 2);

	////����loading����
	//_loading = LoadingScene::create();
	//assert(_loading != NULL);
	//this->addChild(_loading);

	////���ְ�ť��ʵ��
	//_menu_button = ButtonCreate();
	//_menu_button->addClickEventListener([](Ref*)
	//	{
	//		//������һ���㣬�����и��ְ�ť
	//	});
	//_info_button= ButtonCreate();
	//_info_button->addClickEventListener([](Ref*)
	//	{
	//		//����������Ϣ��ʾ��
	//	});
	//_play_button = ButtonCreate();
	//_play_button->addClickEventListener([](Ref*)
	//	{
	//		//���봴�������
	//	});

	////��������ʾ������
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
