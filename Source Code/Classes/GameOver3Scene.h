
#ifndef __GAME_OVER3_SCENE_H__
#define __GAME_OVER3_SCENE_H__

#include "cocos2d.h"

class GameOver3 : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    void menuCloseCallback(cocos2d::Ref* pSender);
    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(GameOver3);
private:
    void GoToLevelThree(cocos2d::Ref* sender);
};

#endif // __GAME_OVER_SCENE_H__
