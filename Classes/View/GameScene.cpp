#include "GameScene.h"

bool GameScene::init()
{
	if (!Scene::init())
		return false;

	auto temp_label = Label::createWithTTF("Game scene", "fonts/arial.ttf", 50);
	temp_label->setPosition(kvisible)



	return true;
}
