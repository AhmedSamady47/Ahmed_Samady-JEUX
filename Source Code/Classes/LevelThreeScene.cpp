
#include "LevelThreeScene.h"
#include "Definitions.h"
#include "MainMenuScene.h"
#include "GameOver3Scene.h"
USING_NS_CC;

Scene* LevelThree::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::createWithPhysics();
    PhysicsWorld* world = scene->getPhysicsWorld();
    // 'layer' is an autorelease object
    auto layer = LevelThree::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool LevelThree::init()
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

    auto third30 = Sprite::create("lvl1 4 cropped.png");
    third30->setPosition(Point(-20, 250));
    third30->setAnchorPoint(Vect::ZERO);
    third30->setScale(1);
    third30->setName("third30");
    auto physicsBody0 = PhysicsBody::createBox(third30->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody0->setGravityEnable(false);
    physicsBody0->setDynamic(false);
    physicsBody0->setContactTestBitmask(1);
    physicsBody0->setCollisionBitmask(1);
    physicsBody0->setCategoryBitmask(1);
    third30->setRotation(0.0f);
    third30->setPhysicsBody(physicsBody0);
    this->addChild(third30);

    auto third31 = Sprite::create("lvl1 4 cropped.png");
    third31->setPosition(Point(0, 250));
    third31->setAnchorPoint(Vect::ZERO);
    third31->setScale(1);
    third31->setName("third31");
    auto physicsBody1 = PhysicsBody::createBox(third31->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody1->setGravityEnable(false);
    physicsBody1->setDynamic(false);
    physicsBody1->setContactTestBitmask(1);
    physicsBody1->setCollisionBitmask(1);
    physicsBody1->setCategoryBitmask(1);
    third31->setRotation(0.0f);
    third31->setPhysicsBody(physicsBody1);
    this->addChild(third31);

    auto third32 = Sprite::create("lvl1 4 cropped.png");
    third32->setPosition(Point(65, 250));
    third32->setAnchorPoint(Vect::ZERO);
    third32->setScale(1);
    third32->setName("third32");
    auto physicsBody2 = PhysicsBody::createBox(third32->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody2->setGravityEnable(false);
    physicsBody2->setDynamic(false);
    physicsBody2->setContactTestBitmask(1);
    physicsBody2->setCollisionBitmask(1);
    physicsBody2->setCategoryBitmask(1);
    third32->setRotation(0.0f);
    third32->setPhysicsBody(physicsBody2);
    this->addChild(third32);

    auto third33 = Sprite::create("lvl1 4 cropped.png");
    third33->setPosition(Point(130, 250));
    third33->setAnchorPoint(Vect::ZERO);
    third33->setScale(1);
    third33->setName("third33");
    auto physicsBody3 = PhysicsBody::createBox(third33->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody3->setGravityEnable(false);
    physicsBody3->setDynamic(false);
    physicsBody3->setContactTestBitmask(1);
    physicsBody3->setCollisionBitmask(1);
    physicsBody3->setCategoryBitmask(1);
    third33->setRotation(0.0f);
    third33->setPhysicsBody(physicsBody3);
    this->addChild(third33);

    auto third34 = Sprite::create("lvl1 4 cropped.png");
    third34->setPosition(Point(195, 250));
    third34->setAnchorPoint(Vect::ZERO);
    third34->setScale(1);
    third34->setName("third34");
    auto physicsBody4 = PhysicsBody::createBox(third34->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody4->setGravityEnable(false);
    physicsBody4->setDynamic(false);
    physicsBody4->setContactTestBitmask(1);
    physicsBody4->setCollisionBitmask(1);
    physicsBody4->setCategoryBitmask(1);
    third34->setRotation(0.0f);
    third34->setPhysicsBody(physicsBody4);
    this->addChild(third34);

    auto third35 = Sprite::create("lvl1 4 cropped.png");
    third35->setPosition(Point(310, 250));
    third35->setAnchorPoint(Vect::ZERO);
    third35->setScale(1);
    third35->setName("third35");
    auto physicsBody5 = PhysicsBody::createBox(third35->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody5->setGravityEnable(false);
    physicsBody5->setDynamic(false);
    physicsBody5->setContactTestBitmask(1);
    physicsBody5->setCollisionBitmask(1);
    physicsBody5->setCategoryBitmask(1);
    third35->setRotation(0.0f);
    third35->setPhysicsBody(physicsBody5);
    this->addChild(third35);

    auto third36 = Sprite::create("lvl1 4 cropped.png");
    third36->setPosition(Point(375, 250));
    third36->setAnchorPoint(Vect::ZERO);
    third36->setScale(1);
    third36->setName("third36");
    auto physicsBody6 = PhysicsBody::createBox(third36->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody6->setGravityEnable(false);
    physicsBody6->setDynamic(false);
    physicsBody6->setContactTestBitmask(1);
    physicsBody6->setCollisionBitmask(1);
    physicsBody6->setCategoryBitmask(1);
    third36->setRotation(0.0f);
    third36->setPhysicsBody(physicsBody6);
    this->addChild(third36);

    auto third37 = Sprite::create("lvl1 4 cropped.png");
    third37->setPosition(Point(440, 250));
    third37->setAnchorPoint(Vect::ZERO);
    third37->setScale(1);
    third37->setName("third37");
    auto physicsBody7 = PhysicsBody::createBox(third37->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody7->setGravityEnable(false);
    physicsBody7->setDynamic(false);
    physicsBody7->setContactTestBitmask(1);
    physicsBody7->setCollisionBitmask(1);
    physicsBody7->setCategoryBitmask(1);
    third37->setRotation(0.0f);
    third37->setPhysicsBody(physicsBody7);
    this->addChild(third37);

    auto third38 = Sprite::create("lvl1 4 cropped.png");
    third38->setPosition(Point(440, 150));
    third38->setAnchorPoint(Vect::ZERO);
    third38->setScale(1);
    third38->setName("third38");
    auto physicsBody8 = PhysicsBody::createBox(third38->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody8->setGravityEnable(false);
    physicsBody8->setDynamic(false);
    physicsBody8->setContactTestBitmask(1);
    physicsBody8->setCollisionBitmask(1);
    physicsBody8->setCategoryBitmask(1);
    third38->setRotation(0.0f);
    third38->setPhysicsBody(physicsBody8);
    this->addChild(third38);

    auto third39 = Sprite::create("lvl1 4 cropped.png");
    third39->setPosition(Point(375, 150));
    third39->setAnchorPoint(Vect::ZERO);
    third39->setScale(1);
    third39->setName("third39");
    auto physicsBody9 = PhysicsBody::createBox(third39->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody9->setGravityEnable(false);
    physicsBody9->setDynamic(false);
    physicsBody9->setContactTestBitmask(1);
    physicsBody9->setCollisionBitmask(1);
    physicsBody9->setCategoryBitmask(1);
    third39->setRotation(0.0f);
    third39->setPhysicsBody(physicsBody9);
    this->addChild(third39);

    auto third310 = Sprite::create("lvl1 4 cropped.png");
    third310->setPosition(Point(310, 150));
    third310->setAnchorPoint(Vect::ZERO);
    third310->setScale(1);
    third310->setName("third310");
    auto physicsBody11 = PhysicsBody::createBox(third310->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody11->setGravityEnable(false);
    physicsBody11->setDynamic(false);
    physicsBody11->setContactTestBitmask(1);
    physicsBody11->setCollisionBitmask(1);
    physicsBody11->setCategoryBitmask(1);
    third310->setRotation(0.0f);
    third310->setPhysicsBody(physicsBody11);
    this->addChild(third310);

    auto third311 = Sprite::create("lvl1 4 cropped.png");
    third311->setPosition(Point(255, 150));
    third311->setAnchorPoint(Vect::ZERO);
    third311->setScale(1);
    third311->setName("third311");
    auto physicsBody12 = PhysicsBody::createBox(third311->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody12->setGravityEnable(false);
    physicsBody12->setDynamic(false);
    physicsBody12->setContactTestBitmask(1);
    physicsBody12->setCollisionBitmask(1);
    physicsBody12->setCategoryBitmask(1);
    third311->setRotation(0.0f);
    third311->setPhysicsBody(physicsBody12);
    this->addChild(third311);

    auto third312 = Sprite::create("lvl1 4 cropped.png");
    third312->setPosition(Point(140, 150));
    third312->setAnchorPoint(Vect::ZERO);
    third312->setScale(1);
    third312->setName("third312");
    auto physicsBody13 = PhysicsBody::createBox(third312->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody13->setGravityEnable(false);
    physicsBody13->setDynamic(false);
    physicsBody13->setContactTestBitmask(1);
    physicsBody13->setCollisionBitmask(1);
    physicsBody13->setCategoryBitmask(1);
    third312->setRotation(0.0f);
    third312->setPhysicsBody(physicsBody13);
    this->addChild(third312);

    auto third313 = Sprite::create("lvl1 4 cropped.png");
    third313->setPosition(Point(120, 150));
    third313->setAnchorPoint(Vect::ZERO);
    third313->setScale(1);
    third313->setName("third313");
    auto physicsBody14 = PhysicsBody::createBox(third313->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody14->setGravityEnable(false);
    physicsBody14->setDynamic(false);
    physicsBody14->setContactTestBitmask(1);
    physicsBody14->setCollisionBitmask(1);
    physicsBody14->setCategoryBitmask(1);
    third313->setRotation(0.0f);
    third313->setPhysicsBody(physicsBody14);
    this->addChild(third313);

    auto third314 = Sprite::create("lvl1 4 cropped.png");
    third314->setPosition(Point(0, 150));
    third314->setAnchorPoint(Vect::ZERO);
    third314->setScale(1);
    third314->setName("third314");
    auto physicsBody15 = PhysicsBody::createBox(third314->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody15->setGravityEnable(false);
    physicsBody15->setDynamic(false);
    physicsBody15->setContactTestBitmask(1);
    physicsBody15->setCollisionBitmask(1);
    physicsBody15->setCategoryBitmask(1);
    third314->setRotation(0.0f);
    third314->setPhysicsBody(physicsBody15);
    this->addChild(third314);

    auto third315 = Sprite::create("lvl1 4 cropped.png");
    third315->setPosition(Point(-20, 150));
    third315->setAnchorPoint(Vect::ZERO);
    third315->setScale(1);
    third315->setName("third315");
    auto physicsBody16 = PhysicsBody::createBox(third315->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody16->setGravityEnable(false);
    physicsBody16->setDynamic(false);
    physicsBody16->setContactTestBitmask(1);
    physicsBody16->setCollisionBitmask(1);
    physicsBody16->setCategoryBitmask(1);
    third315->setRotation(0.0f);
    third315->setPhysicsBody(physicsBody16);
    this->addChild(third315);



    auto third320 = Sprite::create("lvl1 4 cropped.png");
    third320->setPosition(Point(120, 50));
    third320->setAnchorPoint(Vect::ZERO);
    third320->setScale(1);
    third320->setName("third320");
    auto physicsBody21 = PhysicsBody::createBox(third320->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody21->setGravityEnable(false);
    physicsBody21->setDynamic(false);
    physicsBody21->setContactTestBitmask(1);
    physicsBody21->setCollisionBitmask(1);
    physicsBody21->setCategoryBitmask(1);
    third320->setRotation(0.0f);
    third320->setPhysicsBody(physicsBody21);
    this->addChild(third320);

    auto third321 = Sprite::create("lvl1 4 cropped.png");
    third321->setPosition(Point(60, 50));
    third321->setAnchorPoint(Vect::ZERO);
    third321->setScale(1);
    third321->setName("third321");
    auto physicsBody22 = PhysicsBody::createBox(third321->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody22->setGravityEnable(false);
    physicsBody22->setDynamic(false);
    physicsBody22->setContactTestBitmask(1);
    physicsBody22->setCollisionBitmask(1);
    physicsBody22->setCategoryBitmask(1);
    third321->setRotation(0.0f);
    third321->setPhysicsBody(physicsBody22);
    this->addChild(third321);

    auto third322 = Sprite::create("lvl1 4 cropped.png");
    third322->setPosition(Point(0, 50));
    third322->setAnchorPoint(Vect::ZERO);
    third322->setScale(1);
    third322->setName("third322");
    auto physicsBody23 = PhysicsBody::createBox(third322->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody23->setGravityEnable(false);
    physicsBody23->setDynamic(false);
    physicsBody23->setContactTestBitmask(1);
    physicsBody23->setCollisionBitmask(1);
    physicsBody23->setCategoryBitmask(1);
    third322->setRotation(0.0f);
    third322->setPhysicsBody(physicsBody23);
    this->addChild(third322);

    auto third323 = Sprite::create("lvl1 4 cropped.png");
    third323->setPosition(Point(-20, 50));
    third323->setAnchorPoint(Vect::ZERO);
    third323->setScale(1);
    third323->setName("third323");
    auto physicsBody24 = PhysicsBody::createBox(third323->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody24->setGravityEnable(false);
    physicsBody24->setDynamic(false);
    physicsBody24->setContactTestBitmask(1);
    physicsBody24->setCollisionBitmask(1);
    physicsBody24->setCategoryBitmask(1);
    third323->setRotation(0.0f);
    third323->setPhysicsBody(physicsBody24);
    this->addChild(third323);

    auto third324 = Sprite::create("Crate.png");
    third324->setPosition(Point(179, 65));
    third324->setAnchorPoint(Vect::ZERO);
    third324->setScale(1);
    third324->setName("third324");
    auto physicsBody25 = PhysicsBody::createBox(third324->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody25->setGravityEnable(false);
    physicsBody25->setDynamic(false);
    physicsBody25->setContactTestBitmask(1);
    physicsBody25->setCollisionBitmask(1);
    physicsBody25->setCategoryBitmask(1);
    third324->setRotation(0.0f);
    third324->setPhysicsBody(physicsBody25);
    this->addChild(third324);

    auto third325 = Sprite::create("Crate.png");
    third325->setPosition(Point(179, 83));
    third325->setAnchorPoint(Vect::ZERO);
    third325->setScale(1);
    third325->setName("third325");
    auto physicsBody26 = PhysicsBody::createBox(third325->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody26->setGravityEnable(false);
    physicsBody26->setDynamic(false);
    physicsBody26->setContactTestBitmask(1);
    physicsBody26->setCollisionBitmask(1);
    physicsBody26->setCategoryBitmask(1);
    third325->setRotation(0.0f);
    third325->setPhysicsBody(physicsBody26);
    this->addChild(third325);

    auto third326 = Sprite::create("Crate.png");
    third326->setPosition(Point(179, 101));
    third326->setAnchorPoint(Vect::ZERO);
    third326->setScale(1);
    third326->setName("third326");
    auto physicsBody27 = PhysicsBody::createBox(third326->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody27->setGravityEnable(false);
    physicsBody27->setDynamic(false);
    physicsBody27->setContactTestBitmask(1);
    physicsBody27->setCollisionBitmask(1);
    physicsBody27->setCategoryBitmask(1);
    third326->setRotation(0.0f);
    third326->setPhysicsBody(physicsBody27);
    this->addChild(third326);

    auto third327 = Sprite::create("Crate.png");
    third327->setPosition(Point(179, 119));
    third327->setAnchorPoint(Vect::ZERO);
    third327->setScale(1);
    third327->setName("third327");
    auto physicsBody28 = PhysicsBody::createBox(third327->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody28->setGravityEnable(false);
    physicsBody28->setDynamic(false);
    physicsBody28->setContactTestBitmask(1);
    physicsBody28->setCollisionBitmask(1);
    physicsBody28->setCategoryBitmask(1);
    third327->setRotation(0.0f);
    third327->setPhysicsBody(physicsBody28);
    this->addChild(third327);

    auto third328 = Sprite::create("Crate.png");
    third328->setPosition(Point(179, 137));
    third328->setAnchorPoint(Vect::ZERO);
    third328->setScale(1);
    third328->setName("third328");
    auto physicsBody29 = PhysicsBody::createBox(third328->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody29->setGravityEnable(false);
    physicsBody29->setDynamic(false);
    physicsBody29->setContactTestBitmask(1);
    physicsBody29->setCollisionBitmask(1);
    physicsBody29->setCategoryBitmask(1);
    third328->setRotation(0.0f);
    third328->setPhysicsBody(physicsBody29);
    this->addChild(third328);

    auto third316 = Sprite::create("TTrunk.png");
    third316->setPosition(Point(10, 60));
    third316->setAnchorPoint(Vect::ZERO);
    third316->setScale(1.3);
    third316->setName("third316");
    auto physicsBody17 = PhysicsBody::createBox(third316->getContentSize(), PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody17->setGravityEnable(false);
    physicsBody17->setDynamic(false);
    physicsBody17->setContactTestBitmask(1);
    physicsBody17->setCollisionBitmask(1);
    physicsBody17->setCategoryBitmask(1);
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
    physicsBody18->setContactTestBitmask(5);
    physicsBody18->setCategoryBitmask(5);
    gameovertest->setRotation(0.0f);
    gameovertest->setPhysicsBody(physicsBody18);
    this->addChild(gameovertest);

    auto player = Sprite::create("ball.png");
    player->setScale(0.2);
    player->setPosition(Vec2(30, 273));

    player->setName("player");
    auto physicsBody10 = PhysicsBody::createBox(player->getContentSize() / 1.5, PhysicsMaterial(1.0f, 1.0f, 1.0f));
    physicsBody10->setGravityEnable(true);
    physicsBody10->setDynamic(true);
    physicsBody10->setContactTestBitmask(0x0001);
    physicsBody10->setCollisionBitmask(1);
    physicsBody10->setCategoryBitmask(1);
    player->setRotation(0.0f);
    player->setPhysicsBody(physicsBody10);
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
            event->getCurrentTarget()->runAction(JumpBy::create(0.5, Vec2(60, 0), 30, 1));
            break;

        case cocos2d::EventKeyboard::KeyCode::KEY_DOWN_ARROW:
        case cocos2d::EventKeyboard::KeyCode::KEY_S:
            event->getCurrentTarget()->runAction(JumpBy::create(0.5, Vec2(-60, 0), 30, 1));
            break;
        }
    };

    this->_eventDispatcher->addEventListenerWithSceneGraphPriority(eventListner, player);
    
    auto playItem = MenuItemImage::create("TAButt.png", "TAButt.png", CC_CALLBACK_1(LevelThree::GoToMainMenu, this));
    playItem->setPosition(Point(450, 293));
    playItem->setScale(1);
    auto menu = Menu::create(playItem, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu);

    auto contactListener = EventListenerPhysicsContact::create();
    contactListener->onContactBegin = CC_CALLBACK_1(LevelThree::onContactBegin, this);
    _eventDispatcher->addEventListenerWithSceneGraphPriority(contactListener, this);

    return true;
}

bool LevelThree::onContactBegin(cocos2d::PhysicsContact& contact)
{
    auto bodyA = contact.getShapeA()->getBody();
    auto bodyB = contact.getShapeB()->getBody();
    if (bodyA->getContactTestBitmask() == 1 && bodyB->getContactTestBitmask() == 5)
    {
        auto newScene = GameOver3::create();
        Director::getInstance()->popToRootScene();
        Director::getInstance()->pushScene(newScene);
    }
    return true;
}
void LevelThree::GoToMainMenu(cocos2d::Ref* pSender) {

    auto scene = MainMenu::createScene();
    Director::getInstance()->pushScene(TransitionFade::create(TRANSITION_TIME, scene));

}