#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

#include "kev.h"

class genmap
{
  protected:
  int sizeX,sizeY;
  char map[50][50];
  char BX,BY;
  public:
    genmap(int x,int y,char X='_',char Y='|');
    void disp();
    void map_spwn(char a='~');


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

void genmap::map_spwn(char a)
       {
	int i,j;
	do
	{
	 randomize();
	 i=random(sizeX);
	 j=random(sizeY);
      /*	 cout<<map[i][j];
	 getch();  errorr detection */
	}while(map[i][j]==BX||map[i][j]==BY);
	map[i][j]=a;
       }

#endif
