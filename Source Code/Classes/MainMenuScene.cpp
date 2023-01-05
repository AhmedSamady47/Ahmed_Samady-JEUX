#include "MainMenuScene.h"
#include "LevelOneScene.h"
#include "LevelTwoScene.h"
#include "LevelThreeScene.h"
#include "GameOver1Scene.h"
#include "GameOver2Scene.h"
#include "GameOver3Scene.h"
#include "Definitions.h"

USING_NS_CC;

Scene* MainMenu::createScene()
{
    return MainMenu::create();
}

// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

// on "init" you need to initialize your instance
bool MainMenu::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Scene::init() )
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto backgroundSprite = Sprite::create("mainmenu.png");
    backgroundSprite->setPosition(Point(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
    backgroundSprite->setScale(1.5);
    this->addChild(backgroundSprite);

    auto playItem = MenuItemImage::create("PButt.png","PButt.png", CC_CALLBACK_1(MainMenu::GoToLevelOne,this));
    playItem->setPosition(Point(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y -30));
    playItem->setScale(1);
    auto playItem1 = MenuItemImage::create("QButt.png", "QButt.png", CC_CALLBACK_1(MainMenu::menuCloseCallback, this));
    playItem1->setPosition(Point(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y - 60));
    playItem1->setScale(1);

    auto menu = Menu::create(playItem, playItem1, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu);

    return true;
}

void MainMenu::GoToLevelOne(cocos2d::Ref* pSender) {

    auto scene = LevelOne::createScene();
    Director::getInstance()->pushScene(TransitionFade::create(TRANSITION_TIME, scene));

}
void MainMenu::GoToLevelTwo(cocos2d::Ref* pSender) {

    auto scene = LevelTwo::createScene();
    Director::getInstance()->pushScene(TransitionFade::create(TRANSITION_TIME, scene));

}
void MainMenu::GoToLevelThree(cocos2d::Ref* pSender) {

    auto scene = LevelThree::createScene();
    Director::getInstance()->pushScene(TransitionFade::create(TRANSITION_TIME, scene));

}
void MainMenu::GoToGameOver1(cocos2d::Ref* pSender) {

    auto scene = GameOver1::createScene();
    Director::getInstance()->pushScene(TransitionFade::create(TRANSITION_TIME, scene));

}
void MainMenu::GoToGameOver2(cocos2d::Ref* pSender) {

    auto scene = GameOver2::createScene();
    Director::getInstance()->pushScene(TransitionFade::create(TRANSITION_TIME, scene));

}
void MainMenu::GoToGameOver3(cocos2d::Ref* pSender) {

    auto scene = GameOver3::createScene();
    Director::getInstance()->pushScene(TransitionFade::create(TRANSITION_TIME, scene));

}
void MainMenu::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

}