
#include "LevelOneScene.h"
#include "GameOver1Scene.h"
#include "Definitions.h"
#include "LevelTwoScene.h"

using namespace cocos2d;

USING_NS_CC;

Scene* LevelOne::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::createWithPhysics();
    PhysicsWorld* world = scene->getPhysicsWorld();
    // 'layer' is an autorelease object
    auto layer = LevelOne::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool LevelOne::init()
{


    if (!Scene::initWithPhysics())
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto backgroundSprite = Sprite::create("BG.png");
    backgroundSprite->setPosition(Point(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
    backgroundSprite->setScale(2.2);
    this->addChild(backgroundSprite);

    auto foregroundSprite = Sprite::create("lvl1 1.png");
    foregroundSprite->setPosition(Point(2, 80));
    foregroundSprite->setAnchorPoint(Vect::ZERO);
    foregroundSprite->setScale(1); 
    foregroundSprite->setName("foregroundSprite");
    auto physicsBody2 = PhysicsBody::createBox(foregroundSprite->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody2->setGravityEnable(false);
    physicsBody2->setDynamic(false);
    physicsBody2->setContactTestBitmask(1);
    physicsBody2->setCollisionBitmask(1);
    physicsBody2->setCategoryBitmask(1);
    foregroundSprite->setRotation(0.0f);
    foregroundSprite->setPhysicsBody(physicsBody2);
    this->addChild(foregroundSprite);

    auto second = Sprite::create("lvl1 2.png");
    second->setPosition(Point(100, 79));

    second->setAnchorPoint(Vect::ZERO);
    second->setScale(1); 
    second->setName("second");
    auto physicsBody3 = PhysicsBody::createBox(second->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody3->setGravityEnable(false);
    physicsBody3->setDynamic(false);
    physicsBody3->setContactTestBitmask(1);
    physicsBody3->setCollisionBitmask(1);
    physicsBody3->setCategoryBitmask(1);
    second->setRotation(0.0f);
    second->setPhysicsBody(physicsBody3);
    this->addChild(second);

    auto third = Sprite::create("lvl1 3 cropped.png");
    third->setPosition(Point(210, 5));

    third->setAnchorPoint(Vect::ZERO);
    third->setScale(1); 
    third->setName("third");
    auto physicsBody4 = PhysicsBody::createBox(third->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody4->setGravityEnable(false);
    physicsBody4->setDynamic(false);
    physicsBody4->setContactTestBitmask(4);
    physicsBody4->setCollisionBitmask(1);
    physicsBody4->setCategoryBitmask(1);
    third->setRotation(0.0f);
    third->setPhysicsBody(physicsBody4);
    this->addChild(third);

    auto fourth = Sprite::create("lvl1 4 cropped.png");
    fourth->setPosition(Point(350, 70));

    fourth->setAnchorPoint(Vect::ZERO);
    fourth->setScale(1);
    fourth->setName("fourth");
    auto physicsbody5 = PhysicsBody::createBox(fourth->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsbody5->setGravityEnable(false);
    physicsbody5->setDynamic(false);
    physicsbody5->setContactTestBitmask(1);
    physicsbody5->setCollisionBitmask(1);
    physicsbody5->setCategoryBitmask(1);
    fourth->setRotation(0.0f);
    fourth->setPhysicsBody(physicsbody5);
    this->addChild(fourth);

    auto third316 = Sprite::create("TTrunk.png");
    third316->setPosition(Point(375, 86));
    third316->setAnchorPoint(Vect::ZERO);
    third316->setScale(1.3);
    third316->setName("third316");
    auto physicsBody17 = PhysicsBody::createBox(third316->getContentSize(), PhysicsMaterial(1.0f, 0.0f, 1.0f));
    physicsBody17->setGravityEnable(false);
    physicsBody17->setDynamic(false);
    physicsBody17->setContactTestBitmask(5);
    physicsBody17->setCollisionBitmask(1);
    physicsBody17->setCategoryBitmask(5);
    third316->setRotation(0.0f);
    third316->setPhysicsBody(physicsBody17);
    this->addChild(third316);

    auto gameovertest = Sprite::create("gameovertest.png");
    gameovertest->setPosition(Point(0, -20));
    gameovertest->setAnchorPoint(Vect::ZERO);
    gameovertest->setScale(1);
    gameovertest->setName("gameovertest");
    auto physicsBody18 = PhysicsBody::createBox(gameovertest->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody18->setGravityEnable(false);
    physicsBody18->setDynamic(false);
    physicsBody18->setContactTestBitmask(3);
    physicsBody18->setCategoryBitmask(3);
    gameovertest->setRotation(0.0f);
    gameovertest->setPhysicsBody(physicsBody18);
    this->addChild(gameovertest);

    auto player = Sprite::create("ball.png");
    player->setScale(0.2);
    player->setPosition(Vec2(50, 120));
    
    player->setName("player");
    auto physicsBody1 = PhysicsBody::createBox(player->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody1->setGravityEnable(true);
    physicsBody1->setDynamic(true);
    physicsBody1->setContactTestBitmask(1);
    physicsBody1->setCollisionBitmask(1);
    physicsBody1->setCategoryBitmask(1);
    player->setRotation(0.0f);
    player->setPhysicsBody(physicsBody1);
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
    
    auto contactListener = EventListenerPhysicsContact::create();
    contactListener->onContactBegin = CC_CALLBACK_1(LevelOne::onContactBegin1, this);
    _eventDispatcher->addEventListenerWithSceneGraphPriority(contactListener, this);

    auto contactListener2 = EventListenerPhysicsContact::create();
    contactListener2->onContactBegin = CC_CALLBACK_1(LevelOne::onContactBegin2, this);
    _eventDispatcher->addEventListenerWithSceneGraphPriority(contactListener2, this);

    return true;
}

bool LevelOne::onContactBegin1(cocos2d::PhysicsContact& contact)
{
    auto bodyA = contact.getShapeA()->getBody();
    auto bodyB = contact.getShapeB()->getBody();
    if (bodyA->getContactTestBitmask() == 1 && bodyB->getContactTestBitmask() == 3)
    {
        auto newScene = GameOver1::create();
        Director::getInstance()->pushScene(newScene);
    }
        return true;
}
bool LevelOne::onContactBegin2(cocos2d::PhysicsContact& contact)
{
    auto bodyC = contact.getShapeA()->getBody();
    auto bodyD = contact.getShapeB()->getBody();
    if (bodyC->getContactTestBitmask() == 1 && bodyD->getContactTestBitmask() == 5)
    {
        auto newScene2 = LevelTwo::create();
        Director::getInstance()->pushScene(newScene2);
    }
        return true;
}