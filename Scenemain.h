#pragma once
#include "SceneBase.h"
#include "Vec2.h"

class SceneMain : public SceneBase
{
public:
	SceneMain()
	{
		
	}
	virtual ~SceneMain() {}


	virtual void init() override;
	virtual void end()  override;

	virtual void update() override;
	virtual void draw() override;


	
private:
	
};