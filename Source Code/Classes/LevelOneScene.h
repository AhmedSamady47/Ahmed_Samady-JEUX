
#ifndef __LEVEL_ONE_SCENE_H__
#define __LEVEL_ONE_SCENE_H__

#include "cocos2d.h"

using namespace cocos2d;

class LevelOne : public cocos2d::Scene
{

public:
    static cocos2d::Scene* createScene();

    virtual bool onContactBegin1(PhysicsContact& contact);
    virtual bool onContactBegin2(PhysicsContact& contact);
    virtual bool init();

    CREATE_FUNC(LevelOne);

};

#endif // __LEVEL_ONE_SCENE_H__
