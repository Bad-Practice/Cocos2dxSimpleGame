#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

using namespace cocos2d;

class HelloWorld : public cocos2d::CCLayerColor
{
protected:
    CCArray *_targets;
    CCArray *_projectiles; 
	int _projectilesDestroyed;
public:
	
	~HelloWorld();
	HelloWorld();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuCloseCallback(CCObject* pSender);

	void spriteMoveFinished(CCNode* sender);
	void gameLogic(float dt);


	void updateGame(float dt);
    
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);

private:
	void addTarget();
	void ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event);

};

#endif // __HELLOWORLD_SCENE_H__
