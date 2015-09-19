#include "gamepro.h"

typedef struct link
{
	short x,y;		//����
	short J;		//ְҵ
	short R;		//ʣ�ಽ��
	short D;		//���� 0�� 1�� 2�� 3��
	link *c[4];		//3������
	link *f;		//����
}tree;

typedef struct
{
	short x,y;		//����
	short D;		//����
}movept;

class find : public gamemap	
{public: find();
 virtual~find();

public:
	tree *t;		//Ѱ·�õ���
	tree *s;		//һ�������������·
	movept pt[10];	//�������·������
	short moves;	//����һ�����˼���
	short mi,mj;	//��·ʱ��Ҫ�õ��ı���
	float detx,dety;//��·����ʱ����
	int Maxnode;
	
	void initfind();
	void findpath(HERO *p);
	void finds(tree *t);
	int isgeneration(int x,int y,tree *t,short D);
	void howtogo(int x,int y);
	void howtogo2(int x,int y,tree *t);
	short parentcount(tree *t);
	void movesto();
	void tomove();
	void deltree(tree *t);
};