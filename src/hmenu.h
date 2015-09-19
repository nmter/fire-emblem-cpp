#include "findpath.h"

typedef struct link1
{
	short menu;	//0~4
	short i;	//����
	link1 *p;	//ǰ���
	link1 *n;	//����
}menutype;

typedef struct link2
{
	short x,y;	//����
	link2 *p;	//ǰ���
	link2 *n;	//����
}manpoint;

class menu : public find	
{public: menu();
 virtual~menu();

public:
	menutype *mn,*mc;
	manpoint *v,*it;

	void initmenu();
	void domenu();
	void insertmenu(short i);
	void insertman(short x,short y,manpoint **v);
	void bitmenu();
	void dohmenu();
	void selectmenu();
	void delmenutype(menutype *h);
	void delmanpoint(manpoint *h);
	int att(HERO *p);
	int wmagic(HERO *p);
	int bmagic(HERO *p);
	int exitem(HERO *p);
};