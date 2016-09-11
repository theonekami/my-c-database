#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

#include "kev.h"

class genmap
{
  protected:
  int sizeX,sizeY,posY,posX;
  char map[50][50];
  char BX,BY,spwn;
  public:
    genmap(int x,int y,char X='_',char Y='|');
    void disp();
    void map_spwn(char a='~',int i=-1,int j=-1);
    int move_down();
    void map_rem(char a='~');

};

genmap::genmap(int x,int y,char X,char Y)
  {
    sizeX=x;
    sizeY=y*2;
    BX=X;
    BY=Y;
    for (int i=0;i<sizeX;i++)
       {
	 if(i==0||i==sizeX-1)
	   {
	    for (int j=0;j<sizeY;j++)
		{
		 map[i][j]=X;
	}
	    }

	 else
	   {
	     for (int j=0;j<sizeY;j++)
		 map[i][j]=' ';
		 map[i][sizeY-1]=Y;
		 map[i][0]=Y;
	   }

	}
    }

void genmap::disp()
	{
	  for(int k=0;k<sizeX;k++)
	      {
	       for (int j=0;j<sizeY;j++)
	       cout<<map[k][j];
	       cout<<endl;
	      }
	}

void genmap::map_spwn(char a,int i,int j)
       {
       if(i<0&&j<0)
	{
	do
	{
	 randomize();
	 i=rand()%sizeX;
	 j=rand()%sizeY;
      /*cout<<map[i][j];
	 getch();  errorr detection */
	}while(map[i][j]==BX||map[i][j]==BY);
	}
	else if(map[i][j]==BX||map[i][j]==BY)
	{
	cout<<"map not generated cause you disrupted";
	getch();
	exit(0);
	}
	map[i][j]=a;
	spwn=a;
	posX=i;
	posY=j;
	}

int genmap::move_down()
{
int temp;
temp=posX;
posX++;
//cout<<posX<<temp;
//getch(); errorr detection
if(map[posX][posY]!=' ')
{return -1;
}
map[posX][posY]=map[temp][posY];
map[temp][posY]=' ';
return 0;
}

/*void genmap::map_rem(char a)
       {
       for (int i=0;i<sizeX;i++)
       {for (int j=0;j<sizeY;j++)
	if(map[i][j]==a)
	{map[i][j]==
	}
       }
       }      */
#endif
