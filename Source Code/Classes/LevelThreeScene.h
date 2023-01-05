
#ifndef __LEVEL_THREE_SCENE_H__
#define __LEVEL_THREE_SCENE_H__

#include "cocos2d.h"
using namespace cocos2d;

class LevelThree : public cocos2d::Scene
{

public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    virtual bool onContactBegin(PhysicsContact& contact);
    virtual void GoToMainMenu(cocos2d::Ref* pSender);
    // implement the "static create()" method manually
    CREATE_FUNC(LevelThree);
};


#endif // __LEVEL_THREE_SCENE_H__
