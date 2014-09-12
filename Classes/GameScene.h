#ifndef GameScene_h__
#define GameScene_h__

#include "cocos2d.h"
#include "GameDefine.h"
#include "MovedTile.h"
class GameScene : public cocos2d::Layer
{
public:
	GameScene();
	~GameScene();

public:

	static cocos2d::Scene* createScene();

	virtual bool init();  

	E_MOVE_DIRECT m_direct;//移动方向
	int map[GAME_ROWS][GAME_COLS];
	cocos2d::Vector<MovedTile *> m_allTile;//保存所有块
	void moveAllTile(E_MOVE_DIRECT);//移动所有块，游戏核心逻辑
	void newMoveTile();//产生一个新块
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	CREATE_FUNC(GameScene);
private:
	cocos2d::LayerColor* colorBack;
	bool m_startMove;//是否开始移动
	int m_x,m_y;//触摸开始的点
	bool m_sound_clear;
	int m_score;//分数
};


#endif // GameScene_h__
