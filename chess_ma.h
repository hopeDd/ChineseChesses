#pragma once
#include "chess.h"
#include "define.h"

class chess_ma :
	public chess
{
private:
	int name;
	friend class Board;  //������Ԫ�࣬�������̺���������в���
public:
	//���캯��
	chess_ma(int,int,int,bool);
	chess_ma(void);
	chess_ma(chess_ma &);

	//���Ǹ����еĴ��麯��
	int OutChessName();
	BOARD_HIND hind(BOARD_CHESS,BOARD_CHESS);
};
