//////////////////////////////////////////////////////////////////////

#pragma once

#include "User.h"

struct NPC_MOVE_INFO
{
	int Index;
	int MonsterClass;
	char Name[32];
	int Map;
	int X;
	int Y;
	int MoveMap;
	int MoveX;
	int MoveY;
	int MinLevel;
	int MaxLevel;
	int MinReset;
	int MaxReset;
	int MinMReset;
	int MaxMReset;
	int AccountLevel;
	int PkMove;
	int Category;
	int ItemIndex;
	int Level;
	int Luck;
	int Skill;
	int Quantity;
};

class CCustomNpcMove
{
public:
	CCustomNpcMove();
	virtual ~CCustomNpcMove();
	void Load(char* path);
	bool GetNpcMove(LPOBJ lpObj, int MonsterClass, int Map, int X, int Y);
	bool CheckItem(LPOBJ lpObj, int npc);
	void RemoveItem(LPOBJ lpObj, int quest);
private:
	std::map<int, NPC_MOVE_INFO> m_CustomNpcMove;
};

extern CCustomNpcMove gCustomNpcMove;
