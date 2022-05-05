#include "SceneManager.h"

SceneManager* SceneManager::_scene_manager = NULL;

SceneManager* SceneManager::getInstance()
{
	if (_scene_manager == NULL)
	{
		_scene_manager = new SceneManager();
        //�ݴ���
		if (_scene_manager)
		{
			_scene_manager->autorelease();
			_scene_manager->retain();
		}
		else
		{
			CC_SAFE_DELETE(_scene_manager);
			_scene_manager = NULL;
		}
	}
	return _scene_manager;
}

void SceneManager::changeScene(EnumSceneType type)
{
	//���Լ������
	assert(type < en_Max && type > en_Min);

	Scene* scene = NULL;
	switch (type)
	{
	case en_HelloWorld:
		scene = HelloWorld::create();
		break;
	case en_MainScene:
		scene = MainScene::create();
		break;
	case en_GameScene:
		scene = GameScene::create();
		break;
	case en_SettlementScene:
		scene = SettlementScene::create();
		break;
	}

	assert(scene != NULL);

	if (scene == NULL)
		return;
	Director* director = Director::getInstance();
	const Scene* cur_scene = director->getRunningScene();
	if (cur_scene == NULL)
	{
		director->runWithScene(scene);
		_first = false;
	}
	else
		director->replaceScene(scene);
}
