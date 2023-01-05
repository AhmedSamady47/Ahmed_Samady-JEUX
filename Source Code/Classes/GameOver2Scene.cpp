
#include "GameOver2Scene.h"
#include "LevelTwoScene.h"
#include "Definitions.h"
USING_NS_CC;

Scene* GameOver2::createScene()
{
    return GameOver2::create();
}

// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

// on "init" you need to initialize your instance
bool GameOver2::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Scene::init() )
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto backgroundSprite = Sprite::create("gameover.png");
    backgroundSprite->setPosition(Point(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
    backgroundSprite->setScale(1.5);
    this->addChild(backgroundSprite);

    auto playItem = MenuItemImage::create("TAButt.png", "TAButt.png", CC_CALLBACK_1(GameOver2::GoToLevelTwo, this));
    playItem->setPosition(Point(visibleSize.width / 2 + origin.x -100, visibleSize.height / 2 + origin.y - 45));
    playItem->setScale(1);
    auto playItem1 = MenuItemImage::create("QButt DS.png", "QButt DS.png", CC_CALLBACK_1(GameOver2::menuCloseCallback, this));
    playItem1->setPosition(Point(visibleSize.width / 2 + origin.x +100, visibleSize.height / 2 + origin.y - 45));
    playItem1->setScale(1);

    auto menu = Menu::create(playItem, playItem1, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu);


    return true;
}

void GameOver2::GoToLevelTwo(cocos2d::Ref* pSender) {

    auto scene = LevelTwo::createScene();
    Director::getInstance()->pushScene(TransitionFade::create(TRANSITION_TIME, scene));

}
void GameOver2::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

}