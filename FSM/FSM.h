#pragma once
#include<vector>
class State {// abstract base class for all states
protected :
	State() {}
public:
	virtual void Enter()=0;//pure virtual method now we cannot create object of state
	virtual void Update()=0;
	virtual void Render();
	virtual void Exit()=0;
	virtual void Resume();
};
class TitleState : public State
{
public:
	TitleState();
	void Enter() = 0;//pure virtual method now we cannot create object of state
	void Update() = 0;
	void Render();
	void Exit() = 0;
};
class FSM
{
public:
	FSM();
	~FSM();
};

