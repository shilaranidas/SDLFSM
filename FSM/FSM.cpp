#include "FSM.h"
#include "Engine.h"
#include <iostream>
using namespace std;


FSM::FSM()
{
}


FSM::~FSM()
{
}
//state
void State::Render() {
	SDL_RenderClear(Engine::Instance()->GetRenderer());
	SDL_RenderPresent(Engine::Instance()->GetRenderer());
}
void State::Resume() {

}

TitleState::TitleState()
{
	
}
void TitleState::Enter()
{
	cout << "entering title..." << endl;
}
void TitleState::Update()
{
	if (Engine::Instance()->KeyDown(SDL_SCANCODE_N))
		;//flied this in after FSM class filled in
}
void TitleState::Render()
{
	cout << "rendering title..." << endl;
	SDL_SetRenderDrawColor(Engine::Instance()->GetRenderer(), 255, 0, 0, 255);
	State::Render();//invoke render of base class
}
//collapse ctrl+M+h
void TitleState::Exit()
{
	cout << "exiting title" << endl;
}