
#ifndef __LEVEL_TWO_SCENE_H__
#define __LEVEL_TWO_SCENE_H__

#include "cocos2d.h"

using namespace cocos2d;

class LevelTwo : public cocos2d::Scene
{

public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    virtual bool onContactBegin1(PhysicsContact& contact);
    virtual void GoToLevelThree(cocos2d::Ref* pSender);
    // implement the "static create()" method manually
    CREATE_FUNC(LevelTwo);

};
#endif // __LEVEL_TWO_SCENE_H__
