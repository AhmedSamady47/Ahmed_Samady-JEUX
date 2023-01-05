
#include "LevelTwoScene.h"
#include "LevelThreeScene.h"
#include "GameOver2Scene.h"
#include "Definitions.h"

USING_NS_CC;

Scene* LevelTwo::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::createWithPhysics();
    PhysicsWorld* world = scene->getPhysicsWorld();
    // 'layer' is an autorelease object
    auto layer = LevelTwo::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool LevelTwo::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Scene::initWithPhysics())
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto backgroundSprite = Sprite::create("BG.png");
    backgroundSprite->setPosition(Point(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
    backgroundSprite->setScale(2.2);
    this->addChild(backgroundSprite);

    auto second21 = Sprite::create("lvl1 4 cropped.png");
    second21->setPosition(Point(0, 250));
    second21->setAnchorPoint(Vect::ZERO);
    second21->setScale(1);
    second21->setName("second21");
    auto physicsBody1 = PhysicsBody::createBox(second21->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody1->setGravityEnable(false);
    physicsBody1->setDynamic(false);
    physicsBody1->setContactTestBitmask(1);
    physicsBody1->setCollisionBitmask(1);
    physicsBody1->setCategoryBitmask(1);
    second21->setRotation(0.0f);
    second21->setPhysicsBody(physicsBody1);
    this->addChild(second21);

    auto second22 = Sprite::create("lvl1 4 cropped.png");
    second22->setPosition(Point(100, 210));
    second22->setAnchorPoint(Vect::ZERO);
    second22->setScale(1);
    second22->setName("second22");
    auto physicsBody2 = PhysicsBody::createBox(second22->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody2->setGravityEnable(false);
    physicsBody2->setDynamic(false);
    physicsBody2->setContactTestBitmask(1);
    physicsBody2->setCollisionBitmask(1);
    physicsBody2->setCategoryBitmask(1);
    second22->setRotation(0.0f);
    second22->setPhysicsBody(physicsBody2);
    this->addChild(second22);

    auto second23 = Sprite::create("lvl1 4 cropped.png");
    second23->setPosition(Point(170, 150));
    second23->setAnchorPoint(Vect::ZERO);
    second23->setScale(1);
    second23->setName("second23");
    auto physicsBody3 = PhysicsBody::createBox(second23->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody3->setGravityEnable(false);
    physicsBody3->setDynamic(false);
    physicsBody3->setContactTestBitmask(1);
    physicsBody3->setCollisionBitmask(1);
    physicsBody3->setCategoryBitmask(1);
    second23->setRotation(0.0f);
    second23->setPhysicsBody(physicsBody3);
    this->addChild(second23);

    auto second24 = Sprite::create("lvl1 2.png");
    second24->setPosition(Point(250, 80));
    second24->setAnchorPoint(Vect::ZERO);
    second24->setScale(1);
    second24->setName("second24");
    auto physicsBody4 = PhysicsBody::createBox(second24->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody4->setGravityEnable(false);
    physicsBody4->setDynamic(false);
    physicsBody4->setContactTestBitmask(1);
    physicsBody4->setCollisionBitmask(1);
    physicsBody4->setCategoryBitmask(1);
    second24->setRotation(0.0f);
    second24->setPhysicsBody(physicsBody4);
    this->addChild(second24);

    auto second25 = Sprite::create("lvl1 1.png");
    second25->setPosition(Point(380, 65));
    second25->setAnchorPoint(Vect::ZERO);
    second25->setScale(1);
    second25->setName("second25");
    auto physicsBody5 = PhysicsBody::createBox(second25->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody5->setGravityEnable(false);
    physicsBody5->setDynamic(false);
    physicsBody5->setContactTestBitmask(1);
    physicsBody5->setCollisionBitmask(1);
    physicsBody5->setCategoryBitmask(1);
    second25->setRotation(0.0f);
    second25->setPhysicsBody(physicsBody5);
    this->addChild(second25);

    auto second26 = Sprite::create("TTrunk.png");
    second26->setPosition(Point(407, 84));
    second26->setAnchorPoint(Vect::ZERO);
    second26->setScale(1.3);
    second26->setName("second26");
    auto physicsBody6 = PhysicsBody::createBox(second26->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody6->setGravityEnable(false);
    physicsBody6->setDynamic(false);
    physicsBody6->setContactTestBitmask(1);
    physicsBody6->setCollisionBitmask(1);
    physicsBody6->setCategoryBitmask(1);
    second26->setRotation(0.0f);
    second26->setPhysicsBody(physicsBody6);
    this->addChild(second26);

    auto gameovertest = Sprite::create("gameovertest.png");
    gameovertest->setPosition(Point(0, -20));
    gameovertest->setAnchorPoint(Vect::ZERO);
    gameovertest->setScale(1);
    gameovertest->setName("gameovertest");
    auto physicsBody18 = PhysicsBody::createBox(gameovertest->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody18->setGravityEnable(false);
    physicsBody18->setDynamic(false);
    physicsBody18->setContactTestBitmask(5);
    physicsBody18->setCategoryBitmask(5);
    gameovertest->setRotation(0.0f);
    gameovertest->setPhysicsBody(physicsBody18);
    this->addChild(gameovertest);

    auto player = Sprite::create("ball.png");
    player->setScale(0.2);
    player->setPosition(Vec2(30, 277));

    player->setName("player");
    auto physicsBody0 = PhysicsBody::createBox(player->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody0->setGravityEnable(true);
    physicsBody0->setDynamic(true);
    physicsBody0->setContactTestBitmask(1);
    physicsBody0->setCollisionBitmask(1);
    physicsBody0->setCategoryBitmask(1);
    player->setRotation(0.0f);
    player->setPhysicsBody(physicsBody0);
    this->addChild(player, 0, 1);

    auto listener = EventListenerKeyboard::create();
    auto eventListner = EventListenerKeyboard::create();
    eventListner->onKeyPressed = [](EventKeyboard::KeyCode KeyCode, Event* event) {
        Vec2 loc = event->getCurrentTarget()->getPosition();
        switch (KeyCode)
        {
        case EventKeyboard::KeyCode::KEY_LEFT_ARROW:
        case EventKeyboard::KeyCode::KEY_A:
            event->getCurrentTarget()->runAction(MoveBy::create(0.01, Vec2(-10, 0)));
            break;
        case cocos2d::EventKeyboard::KeyCode::KEY_RIGHT_ARROW:
        case cocos2d::EventKeyboard::KeyCode::KEY_D:
            event->getCurrentTarget()->runAction(MoveBy::create(0.01, Vec2(10, 0)));
            break;

        case cocos2d::EventKeyboard::KeyCode::KEY_SPACE:
            event->getCurrentTarget()->runAction(JumpBy::create(0.5, Vec2(60, 0), 50, 1));
            break;

        case cocos2d::EventKeyboard::KeyCode::KEY_DOWN_ARROW:
        case cocos2d::EventKeyboard::KeyCode::KEY_S:
            event->getCurrentTarget()->runAction(JumpBy::create(0.5, Vec2(-60, 0), 50, 1));
            break;
        }
    };
    this->_eventDispatcher->addEventListenerWithSceneGraphPriority(eventListner, player);


    auto playItem = MenuItemImage::create("nextlevel.png", "nextlevel.png", CC_CALLBACK_1(LevelTwo::GoToLevelThree, this));
    playItem->setPosition(Point(450, 293));
    playItem->setScale(1);
    auto menu = Menu::create(playItem, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu);

    auto contactListener = EventListenerPhysicsContact::create();
    contactListener->onContactBegin = CC_CALLBACK_1(LevelTwo::onContactBegin1, this);
    _eventDispatcher->addEventListenerWithSceneGraphPriority(contactListener, this);


    return true;
}

bool LevelTwo::onContactBegin1(cocos2d::PhysicsContact& contact)
{
    auto bodyA = contact.getShapeA()->getBody();
    auto bodyB = contact.getShapeB()->getBody();
    if (bodyA->getContactTestBitmask() == 1 && bodyB->getContactTestBitmask() == 5)
    {
        auto newScene = GameOver2::create();
        Director::getInstance()->pushScene(newScene);
    }
    return true;
}
void LevelTwo::GoToLevelThree(cocos2d::Ref* pSender) {

    auto scene = LevelThree::createScene();
    Director::getInstance()->pushScene(TransitionFade::create(TRANSITION_TIME, scene));

}