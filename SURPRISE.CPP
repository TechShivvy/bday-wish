#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<fstream.h>
void beep(int hz,int t)
{
 sound(hz);
 delay(t);
}
void song()
{
 int j=0,a=391,b=440,c=493,d=523,e=587,f=659,g=698,h=783;
 beep(a,250);
 beep(j,20);
 beep(a,250);
 beep(b,250);
 beep(a,250);
 beep(d,250);
 beep(c,500);
 beep(j,300);

 beep(a,250);
 beep(j,20);
 beep(a,250);
 beep(b,250);
 beep(a,250);
 beep(e,250);
 beep(d,500);

 beep(a,250);
 beep(a,250);
 beep(h,250);
 beep(f,250);
 beep(d,250);
 beep(c,250);
 beep(b,400);

 beep(g,250);
 beep(g,250);
 beep(f,250);
 beep(d,250);
 beep(e,250);
 beep(d,600);

 //2
 beep(a,250);
 beep(j,20);
 beep(a,250);
 beep(b,250);
 beep(a,250);
 beep(d,250);
 beep(c,500);
 beep(j,200);

 beep(a,250);
 beep(j,20);
 beep(a,250);
 beep(b,250);
 beep(a,250);
 beep(e,250);
 beep(d,500);

 beep(a,250);
 beep(a,250);
 beep(h,250);
 beep(f,250);
 beep(d,250);
 beep(c,250);
 beep(b,400);

 beep(g,250);
 beep(g,250);
 beep(f,250);
 beep(d,250);
 beep(e,250);
 beep(d,600);

}

void mine(char c)
{
if(c==' ')
cout<<c;
else
{
delay(10);
cout<<c;
}
}
void crct(int i,int w,int q=0)
{
fstream f10;

int a=0,c=0;
char ch;
while(c<22)
{
f10.open("polis.txt",ios::in|ios::out);
while(!f10.eof())
{
f10.get(ch);         //no idea
if(ch=='$')
{
for(a=0;a<i;a++)
cout<<"   ";
}
else if(ch=='#')
{
for(a=0;a<w;a++)		 //when q=5;
cout<<"\b\b\b";     //this works //see when the last question turns out crct, by default ur crct works, then atleast 2 times we gotta loop t
if(q==5&&c!=0)               //comes inside
{
if(c<22)                             //do u hv old code?ya waitx
{for(int k=0;k<c;k++)                //this must work one time when c=0
 cout<<" ";
}
}          //atleast some shit must happn,i.t.slooking like no effect


}

else
{
if(q==1)
{
 if(ch==' ')
 {
  cout<<ch;
 }
 else
  {
  delay(50);
  cout<<ch;}
}
else
cout<<ch;
}
}     //owwwwwww, i found, fug
if(q==0||q==1)
 c=30;           //except last ques, for remaining q its q=0,cuz i didnt wait
if(q==5)                          ////
{             //no effect
c++;
if(c!=22)
{
delay(50);}
if(c==22)
 delay(1000);
clrscr();
f10.close();
}
}
}
void wrong(int i,int sad)
{
if(sad==3)
{
cout<<"\nBruh... Outtu...\n";

}

fstream f10;
f10.open("polis.txt",ios::in|ios::out);
int a=0;
char ch;
while(!f10.eof())
{
f10.get(ch);
if(ch=='$')
{
for(a=0;a<i;a++)
cout<<"   ";
}
else if(ch=='#')
{
for(a=0;a<sad;a++)
cout<<"\b\b\b";
}
else
cout<<ch;
}
delay(1700);
}
void MINE(char d[])
{
int i=0;
int space=0;
cout<<"\n\n\n\n\n\n\n\n\t\t\t";
while(i!=strlen(d))
{
delay(50);
if(d[i]==' ')
{space++;
if(space>=4)
{cout<<endl;
cout<<"\t\t\t";
cout<<d[i];
space=0;
}
else
cout<<d[i];
}
else
cout<<d[i];
i++;
}
delay(2300);
clrscr();
}
void annoy()
{
char g[50];
fstream f2;
f2.open("annoying.txt",ios::in|ios::out);
while(!f2.eof())
{
f2.getline(g,50,'.');
MINE(g);
}
}
void quests(char c[],int q=0)
{
cout<<"\n\n\n";
int i=0;
while(i!=strlen(c))
{
if(c[i]=='(')
{
cout<<endl;
if(q==1)
 delay(50);
cout<<c[i];
}
else
{
if(q==1)
 delay(50);
cout<<c[i];}
i++;
}

}
void Busted()
{
clrscr();
fstream f11;
char ch;
f11.open("Busted.txt",ios::in|ios::out);
cout<<"\n\n\n\n";
while(!f11.eof())
{
f11.get(ch);
mine(ch);
}
delay(3000);
}
void Quest()
{
int c=0;
begin:
char f[150];
char rep='\0';
int spc=1;
int w=0;
char dummy[1];
fstream f4;
int qno=0;
char q0[150],q1[150],q2[150],q3[150],q4[150],q5[150];
f4.open("Q.txt",ios::in);
f4.getline(f,150,'#');
strcpy(q0,f);
f4.getline(f,150,'#');
strcpy(q1,f);
f4.getline(f,150,'#');
strcpy(q2,f);
f4.getline(f,150,'#');
strcpy(q3,f);
f4.getline(f,150,'#');
strcpy(q4,f);
f4.getline(f,150,'#');
strcpy(q5,f);
f4.close();
while(qno<6)
{
if(qno==0)
{
clrscr();
if(c==0)
crct(spc,w,1); //i didnt mention, defualt parameter...oowwwwyaa
if(c!=0)
crct(spc,w);
while(rep!='c'&&rep!='C')
{
if(c==0)
quests(q0,1);
if(c!=0)
quests(q0);
if(c==0)
{
 char sa[]="Your Answer: ";
 int h=0;
 while(h<strlen(sa))
 {
  cout<<sa[h];
  delay(50);
  h++;
 }
}
if(c!=0)
cout<<endl<<"Your Answer : ";
c++;
cin>>rep;
switch(rep)
{
case 'a':case 'A':cout<<"\nWoah woah woah..."<<"\n You Think Too Much About Yourself..."<<"\nIts Wrong";
spc++;
w++;
delay(2000);
clrscr();
wrong(spc,w);
delay(2000);
if(w==3)
{
Busted();
goto begin;
}
break;
case 'b':case 'B':case 'd':case 'D':cout<<"\nNaahhh... Wrong";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
delay(2000);
if(w==3)
{
Busted();
goto begin;
}
break;
case 'c':case 'C':cout<<"\nYaaas...Crct...";
delay(2000);
spc++;
clrscr();
crct(spc,w);
delay(2000);
break;
default:cout<<"\nThats Not Even An Option...";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(2000);
}
}
qno++;
}

if(qno==1)
{
clrscr();
crct(spc,w);
while(rep!='d'&&rep!='D')
{
quests(q1);
cout<<endl<<"Your Answer : ";
cin>>rep;
switch(rep)
{
case 'a':case 'A':case 'c':case 'C':case 'b':case 'B':cout<<"\nNaahhh... Wrong";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(2000);
break;

case 'D':case 'd':cout<<"\nYaass... Finally, U Agree...";
delay(2000);
spc++;
clrscr();
crct(spc,w);
delay(2000);
break;

default:cout<<"\nThats Not Even An Option...";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(2000);
}
}
qno++;
}

if(qno==2)
{
clrscr();
crct(spc,w);
while(rep!='a'&&rep!='A')
{quests(q2);
cout<<endl<<"Your Answer : ";
cin>>rep;
switch(rep)
{
case 'c':case 'C':cout<<"\nAgain..."<<"\n You Think Too Much About Yourself..."<<"\nIts Wrong";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(2000);
break;
case 'd':case 'D':cout<<"\nNaahhh... Wrong";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(2000);
break;
case 'b':case 'B':cout<<"\nUmm.. First Of All, Your Welcome..."<<"\nBut There Is Someone More Important Than Us.."<<"\n So Wrong...";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(3000);
break;
case 'a':case 'A':cout<<"\nYes..The Answer Is Crct...";
delay(2000);
spc++;
clrscr();
crct(spc,w);
delay(2000);
break;
default:cout<<"\nThats Not Even An Option...";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(2000);
}
}
qno++;
}

if(qno==3)
{
clrscr();
crct(spc,w);
while(rep!='d'&&rep!='D')
{
quests(q3);
cout<<endl<<"Your Answer : ";
cin>>rep;
switch(rep)
{
case 'c':case 'C':cout<<"\nNaaahhh...";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(2000);
break;
case 'a':case 'A':cout<<"\nNope...";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(2000);
break;
case 'b':case 'B':cout<<"\nNaah...";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(3000);
break;
case 'd':case 'D':cout<<"\nMmmHmmm...Okay Man..Crct...";
delay(2000);
spc++;
clrscr();
crct(spc,w);
delay(2000);
break;
default:cout<<"\nThats Not Even An Option...";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(2000);
}
}
qno++;
}

if(qno==4)
{
clrscr();
crct(spc,w);
while(rep!='8')
{
quests(q4);
cout<<endl<<"Your Answer : ";
cin>>rep;
switch(rep)
{
case '8':cout<<"\nYeah..8 is the crct Answer!";
delay(2000);
spc++;
clrscr();
crct(spc,w);
delay(2000);
break;
default:cout<<"\nWrong...Think again";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(2000);
}
}
qno++;
}

if(qno==5)
{
clrscr();
crct(spc,w);
while(rep!='a'&&rep!='A'&&rep!='b'&&rep!='B'&&rep!='c'&&rep!='C'&&rep!='d'&&rep!='D')
{
quests(q5);
cout<<endl<<"Your Answer : ";
cin>>rep;
switch(rep)
{
case 'c':case 'C':
case 'd':case 'D':
case 'b':case 'B':
case 'a':case 'A':cout<<"\nCake is on its way bruh!";
delay(2000);
spc++;
clrscr();
crct(spc,w,5);
delay(2000);
break;
default:cout<<"\nThats Not Even An Option...";
delay(2000);
spc++;
w++;
clrscr();
wrong(spc,w);
if(w==3)
{
Busted();
goto begin;
}
delay(2000);
}
}
qno++;
}
}
}

void main()
{
clrscr();
fstream f1,f3,f5;
char ch;
annoy();
clrscr();
cout<<endl<<endl;
char z[150]={"So... Are You Ready For The Best Quiz In The Entire World?"};
int i=0;
while(i!=strlen(z))
{cout<<z[i];
delay(20);
i++;
}
i=0;
delay(3000);
clrscr();
cout<<endl<<endl;
char faan[50]={"Still No Reply.... Fine..."};
while(i!=strlen(faan))
{
cout<<faan[i];
delay(20);
i++;
}
i=0;
delay(2500);
clrscr();
//inst
cout<<endl<<endl<<endl<<
"                                 "<<(char)5;
char nfs[]=" NFS Quiz-City ",ch2;
int sfn=0;
while(sfn<strlen(nfs))
{
 cout<<nfs[sfn];
 delay(80);
 sfn++;
}

cout<<(char)5;delay(1000);
cout<<endl<<endl<<endl;
fstream f;
f.open("inst.txt",ios::in);
while(!f.eof())
{
 f.get(ch2);
 if(ch2==':')
  {cout<<ch2;delay(500);}
 if(ch2=='@')
  delay(750);
 if(ch2=='+')
  cout<<(char)26;
  if(ch2==';')
  delay(750);
 if(ch2!=':'&&ch2!='@'&&ch2!='+'&&ch2!=';')
  cout<<ch2;
 delay(50);
}delay(500);
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t ";
textcolor(DARKGRAY+BLINK);
cputs("Press ENTER to Start the ENGINE!!");
textcolor(WHITE);
getch();

int n=0;
while(n<1)
{
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t    Revving UP";
 for(i=0;i<3;i++)
 {
  cout<<".";
  delay(500);
 }
 n++;
}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t       3";
delay(500);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t       2";
delay(500);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t       1";
delay(500);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   Lets GO!!";
delay(500);
clrscr();
Quest();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t     ";
textcolor(YELLOW+BLINK);
cputs("RESPECT++");
textcolor(WHITE);
cout<<"\n\t\t\t\t  ";
textcolor(DARKGRAY);
cputs("(Feel the BGM)");
textcolor(WHITE);
delay(13000);
clrscr();
f3.open("Ohfug.txt",ios::in|ios::out);
f3.seekg(0,ios::beg);
while(!f3.eof())
{
f3.get(ch);
mine(ch);
}
song();
nosound();
delay(200);
clrscr();
char fz[50]={"Oh wait...   I think I see U..."};
MINE(fz);
delay(1500);
f1.open("Hejdo.txt",ios::in|ios::out);
f1.seekg(0,ios::beg);
while(!f1.eof())
{
f1.get(ch);
mine(ch);
}
f1.close();
f3.close();
delay(3000);
clrscr();
delay(1000);
//wishes.txt
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\b";
char zxy[25]={"Wishes From Bishes"};
i=0;
while(i<strlen(zxy))
{
 cout<<zxy[i];
 delay(50);
 i++;
}
delay(2500);
i=0;
n=0;
while(n<3)
{
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t    Loading";
 for(i=0;i<3;i++)
 {
  cout<<".";
  delay(500);
 }
 n++;
}

clrscr();
cout<<endl<<endl;
//fstream f5;char ch;
f5.open("W.txt",ios::in|ios::out);
while(!f5.eof())
{
f5.get(ch);
if(ch=='@')
getch();
else
{
if(ch==' ')
cout<<ch;
if(ch=='*')
delay(1500);
else
{
cout<<ch;
delay(50);
}
}
}
clrscr();
fstream f6;
f6.open("C.txt",ios::in|ios::out);
f6.seekg(0,ios::beg);
while(!f6.eof())
{
f6.get(ch);
mine(ch);
}
delay(3000);
getch();
}
