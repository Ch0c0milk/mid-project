#ifndef FARMER_H
#define FARMER_H
#include"Farmer.h"
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
class Farmer {
public:
	Farmer();
	void calculateTotalPoint();		//計算玩家手上的點數
	int getTotalPonit();
	void setPokerF(int pokerFIndex,int pokerIndex);
	void PokerA();//判定勝負
private:
	int pokerF[5];		//玩家手上的牌
	int poker[5];		//莊家手牌
	int totalPoint;		//儲存計算出的玩家手牌點數
	int total;		//莊家手牌點數
	int page;//手牌張數
};
#endif// !FARMER_H