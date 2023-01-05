
#ifndef __GAME_OVER2_SCENE_H__
#define __GAME_OVER2_SCENE_H__

#include "cocos2d.h"

class GameOver2 : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    void menuCloseCallback(cocos2d::Ref* pSender);
    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(GameOver2);
private:
    void GoToLevelTwo(cocos2d::Ref* sender);
};

#endif // __GAME_OVER2_SCENE_H__
