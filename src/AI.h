#include "hmenu.h"

typedef struct
{
	float x,y;
}fpoint;

typedef struct
{
	short x,y;
	short move;
	short attack;
	short canatt;
	short week;
	short range;
	short time;
}monstertime;

class monster : public menu	
{public: monster();
 virtual~monster();

public:
	int turntag;			//���Ƶڼ�����ʱ����tag(1-�ˣ�2-AI��3-���)
	int turn1;				//֮ǰ��turn
	fpoint tar_p,ori_p;		//Ŀ��㣬ԭʼ��
	monstertime mtime;

	void initAI();
	void cur_backpress(HERO *p);
	void cur_backbit();
	void AItime();
	void think();
	int AIfindpath(HERO *m,short r);
	void find2(tree *t);
	void att2(tree *t);
	int justice(int i);
	void AImoving();
	void endheroturn2();
	void endmonturn();
	void gogogo();

};