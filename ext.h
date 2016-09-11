#ifndef _EXT_H_INCLUDED
#define _EXT_H_INCLUDED
#include "KEV.h"

class ext
{
protected:
int hp;
char name[25];
public:
ext()
{hp=0;
strcpy(name,NULL);
}
ext(char a[],int h)
{strcpy(name,a);
hp=h;
}
int rethp()
{return hp;
}
char* retname()
{return name;
}
};
int hpof(ext a)
{return rethp();
}
char* nameof(ext a)
{return retname();
}
#endif 
