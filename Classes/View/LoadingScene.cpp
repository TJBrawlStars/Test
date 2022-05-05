#include "LoadingScene.h"

bool LoadingScene::init()
{
	if (!Layer::init())
		return false;

	////背景的设置
	//_bg = Sprite::create("");
	//assert(_bg != NULL);
	//this->addChild(_bg);
 //   _bg->setPosition(kVisibleSize / 2);

	////按钮的设置
	//_login_button = Button::create("");
	//assert(_login_button != NULL);
	//this->addChild(_login_button);
	//_login_button->setPosition(kVisibleSize / 2);
	//_login_button->addClickEventListener([this](Ref*)
	//	{
	//		//子节点随父节点一起淡入淡出
	//		this->setCascadeOpacityEnabled(true);
	//		auto delay = DelayTime::create(1.f);
	//		auto fadeout = FadeOut::create(1.f);
	//		auto distory = RemoveSelf::create();
	//		this->runAction(Sequence::create(delay, fadeout, distory, NULL));
	//	});

	return true;
}
