//2150266 ʱ����
 #include "HeroSprite.h"

USING_NS_CC;

namespace {
	// Print useful error message instead of segfaulting when files are not there.
	void problemLoading(std::string filename)
	{
		printf("Error while loading: %s\n", filename);
		printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
	}
}

void Hero::setKeyboardListener(bool keyboardState) noexcept
{
	//judge whether the keyboard state needs to be reset
	if (_keyboardListener->isEnabled() == keyboardState)
		return;

	//set the state of keyboardlistener and scheduler
	if (keyboardState) {
		_keyboardListener->setEnabled(true);
		this->schedule(SEL_SCHEDULE(&Hero::moveHero));
	}
	else {
		_keyboardListener->setEnabled(false);
		this->unschedule(SEL_SCHEDULE(&Hero::moveHero));
	}
}

Hero::Hero(const int maxHealthPoint, const int maxAmmo)
	:_maxHealthPoint(maxHealthPoint), _maxAmmo(maxAmmo)
{
	//initialize the event listeners
	initializeKeyboardListener();
	initializeTouchListener();
}

void Hero::initializeKeyboardListener()
{
	_keyboardListener = EventListenerKeyboard::create();
	_keyboardListener->onKeyPressed = CC_CALLBACK_2(Hero::onKeyPressed, this);
	_keyboardListener->onKeyReleased = CC_CALLBACK_2(Hero::onKeyReleased, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(_keyboardListener, this);
	_keyboardListener->setEnabled(false);
}

void Hero::initializeTouchListener()
{
	_touchListener = EventListenerTouchOneByOne::create();
	_touchListener->onTouchBegan = CC_CALLBACK_2(Hero::onTouchBegan, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(_touchListener, this);
}

void Hero::moveHero(float fdelta)
{
	using code = cocos2d::EventKeyboard::KeyCode;

	//judge whether the hero is frozen
	if (_moveSpeed == Level::ZERO)
		return;

	//record the offset of coordinate
	int offsetX = 0, offsetY = 0;
	if (_keyCodeState[code::KEY_W] == true)
		offsetY = 1;
	else if (_keyCodeState[code::KEY_S] == true)
		offsetY = -1;
	if (_keyCodeState[code::KEY_A] == true)
		offsetX = -1;
	else if (_keyCodeState[code::KEY_D] == true)
		offsetX = 1;

	//create the animation
	auto move = MoveBy::create(1, static_cast<int>(_moveSpeed) * Point(offsetX, offsetY));
	this->runAction(move);
}