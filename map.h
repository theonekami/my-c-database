#include "kev.h"
class janken
{
char name[50];
public:
int id;
janken();
janken(char a[],int);
void display();
}stone("Stone",1),
paper("Paper",2),
scissor("Scissor",3);
janken::janken(char a[],int n)
{id=n;
strcpy(name,a);
}
janken::janken()
{int a;
}
void janken::display()
{cout<<name<<endl<<endl;
}
void check(janken a,janken b)
{clrscr();
delay(1000);
cout<<"stone"<<endl;
delay(1000);
cout<<"paper"<<endl;
delay(1000);
cout<<"scissor"<<endl;
delay(1000);
cout<<"GO!!"<<endl;
a.display();
b.display();
if(a.id==b.id)
{cout<<"Draw |]";
return;
}
 else if(a.id==1)
 {if(b.id==2)
  {
  cout<<"LOSE :(";
  return;
  }
  else
  {
  cout<<"WIN!! :)";
  return;
  }
 }
 else if(a.id==2)
 {if(b.id==3)
  {
  cout<<"LOSE :(";
  return;
  }
  else
  {
  cout<<"WIN!! :)";
  return;
  }
 }
 else if(a.id==3)
 {if(b.id==1)
  {
  cout<<"LOSE :(";
  return;
  }
  else
  {
  cout<<"WIN!! :)";
  return;
  }
 }
}
void main()
{clrscr();
int ch;
char c;
janken p,a;
do
{clrscr();
randomize();
cout<<"choose\n\
1)STONE!!!\n\
2)PAPER___\n\
3)SCISSORS XYXYXY(press no)\n";
cin>>ch;
switch(ch)
{
case 1:p=stone;
       break;
case 2:p=paper;
       break;
case 3:p=scissor;
       break;
}
ch=random(3)+1;
switch(ch)
{
case 1:a=stone;
       break;
case 2:a=paper;
       break;
case 3:a=scissor;
       break;
}
check(p,a);
getch();
cout<<"again?(y/n)";
cin>>c;
}while (c=='y');
getch();
}#include "kev.h"
class janken
{
char name[50];
public:
int id;
janken();
janken(char a[],int);
void display();
}stone("Stone",1),
paper("Paper",2),
scissor("Scissor",3);
janken::janken(char a[],int n)
{id=n;
strcpy(name,a);
}
janken::janken()
{int a;
}
void janken::display()
{cout<<name<<endl<<endl;
}
void check(janken a,janken b)
{clrscr();
delay(1000);
cout<<"stone"<<endl;
delay(1000);
cout<<"paper"<<endl;
delay(1000);
cout<<"scissor"<<endl;
delay(1000);
cout<<"GO!!"<<endl;
a.display();
b.display();
if(a.id==b.id)
{cout<<"Draw |]";
return;
}
 else if(a.id==1)
 {if(b.id==2)
  {
  cout<<"LOSE :(";
  return;
  }
  else
  {
  cout<<"WIN!! :)";
  return;
  }
 }
 else if(a.id==2)
 {if(b.id==3)
  {
  cout<<"LOSE :(";
  return;
  }
  else
  {
  cout<<"WIN!! :)";
  return;
  }
 }
 else if(a.id==3)
 {if(b.id==1)
  {
  cout<<"LOSE :(";
  return;
  }
  else
  {
  cout<<"WIN!! :)";
  return;
  }
 }
}
void main()
{clrscr();
int ch;
char c;
janken p,a;
do
{clrscr();
randomize();
cout<<"choose\n\
1)STONE!!!\n\
2)PAPER___\n\
3)SCISSORS XYXYXY(press no)\n";
cin>>ch;
switch(ch)
{
case 1:p=stone;
       break;
case 2:p=paper;
       break;
case 3:p=scissor;
       break;
}
ch=random(3)+1;
switch(ch)
{
case 1:a=stone;
       break;
case 2:a=paper;
       break;
case 3:a=scissor;
       break;
}
check(p,a);
getch();
cout<<"again?(y/n)";
cin>>c;
}while (c=='y');
getch();
}
