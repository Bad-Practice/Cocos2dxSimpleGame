#ifndef _GAMEOVERSCENEH_
#define _GAMEOVERSCENEH_

#include "cocos2d.h"

class GameOverLayer : public cocos2d::CCLayerColor
{
public:
	GameOverLayer() : _label(NULL) {};
	virtual ~GameOverLayer();
	bool init();
	CREATE_FUNC(GameOverLayer);

	void gameOverDone();

	CC_SYNTHESIZE_READONLY(cocos2d::CCLabelTTF*, _label, Label);

};

class GameOverScene : public cocos2d::CCScene
{

public:
	GameOverScene(): _layer(NULL) {};
	~GameOverScene();
	bool init();
	CREATE_FUNC(GameOverScene);

	CC_SYNTHESIZE_READONLY(GameOverLayer*, _layer, Layer);

};

#endif // _GAMEOVERSCENEH_