#include<iostream.h>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<fstream.h>
#include<ctype.h>
#include<iomanip.h>
#include"games.h"
#define p(ch,ch1) strcmpi(ch,ch1)

void cheki15();
void bill(int,int,int);
void screen();
void history();
void select_date();
void cash();
void cod();
void debitcard();
void credit();
void creditcard();
void select();
void info();
void movie_list1();
void movie_list2();
void always();
void loading1();
void events();
void range();
void login();
void login_slide();
void signup();
void dummy();
void signup_slide();
void home();
void hello(int );
void mop();
void up();
void taskbar(int );
void add1();
void sports25();
void profile();
void file_pos();
void search_city1412();
void screens1();
void screens2();
void search_city();
void support();
void login_slide();
void disp_city(int);
void my_profile();
void signup_slide();
void login_slide();
void home();
void loading();

char str[100],ch;
char skip[50];
int gdrive=DETECT,gmode;
union REGS i,o;

//mouse for main menu
initmouse()
{i.x.ax=0;
int86(0x33,&i,&o);
return(o.x.ax);}

showmouseptr()
{i.x.ax=1;
int86(0x33,&i,&o);
return 1;}

getmousepos(int *button,int *x,int *y)
{i.x.ax=3;
int86(0x33,&i,&o);
*button=o.x.bx;
*x=o.x.cx;
*y=o.x.dx;
return 1;}

void hidemouseptr()
{i.x.ax=2;
int86(0x33,&i,&o);}
//---------sign up--------------------------- 
struct account
{
char fname[50],id[100],password[100];
char phno[50],city[50];
};
char st14[50];int i2=-1,l14=0,arr14=0,file_no=-1;
char ch14[][50]={"Agra","Ahmedabad","Bangalore","Chennai","Hyderabad","Kanchipuram","Kanpur","Kolkata","Mumbai","Mysore","Nagpur","NewDelhi"};
   char temp14[50][50];

int ar14=0,L14=0,i12=-1;
char te14[50][50],s14[50],c14[50][50]={"Mersal (Movie)","Annabelle (Movie)","Golmaal (Movie)","Spyder (Movie)","Vanimahal (Event)","Music Academy-Feb22 (Event)","Romeo Juliet (Drama)","Kattabomman (Drama)","Julius Ceaser (Drama)","WWE Live (Sport)","Neon Run (Sport)","HISL Chennai vs Pune (Sport)","Judwaa 2 (Movie)","Boss Baby (Movie)","Noor (Movie)","Premam (Movie)","Music Academy-Feb14 (Event)","Heider (Drama)","Merchant of Venice (Drama)","Wipro Run (Sport)","HISL Chennai vs Kolkata (Sport)","HISL Chennai vs Delhi (Sport)","HISL Chennai vs Mumbai (Sport)","HISL Chennai vs Kerala (Sport)","HISL Chennai vs AFC (Sport)"};

int date_var=0,d_day=0,d_month=0,d_year=0;
void slide(int n)
{if(n==80 && arr14==l14-1)
   arr14=l14-1;
   else if(n==80 && arr14!=l14-1)
   arr14++;
   else if(n==72 && arr14==0)
   arr14=0;
   else if(n==72 && arr14!=0)
   arr14--;}
void disp_city(int n)
{  settextstyle(1,0,1);
    for(int i=0;i<n;i++)
    {
    if(i==arr14)
    { setcolor(10);
      setfillstyle(8,6);
      bar(237,100+(30*i),500,130+(30*i));
      setcolor(1);
      rectangle(237,100+(30*i),500,130+(30*i));
      setcolor(14);
       outtextxy(250,100+(30*i),temp14[i]);
    }
      else
      {
	  setfillstyle(1,0);
	  bar(237,100+(30*i),500,130+(30*i));
	  setcolor(1);
	  rectangle(237,100+(30*i),500,130+(30*i));
	  setcolor(15);
	  outtextxy(250,100+(30*i),temp14[i]);
    }}}
int display(int n)
{
cleardevice();
setcolor(9);
setfillstyle(10,9);
rectangle(20,20,getmaxx()-20,getmaxy()-20);
floodfill(1,1,9);
setfillstyle(10,1);
bar(20,20,getmaxx()-20,getmaxy()-20);
setcolor(9);
rectangle(20,20,getmaxx()-20,getmaxy()-20);
setcolor(10);
settextstyle(1,HORIZ_DIR,2);
outtextxy(50,50,"ENTER THE CITY : ");
setfillstyle(1,0);
bar(237,50,500,80);
setcolor(15);
rectangle(237,50,500,80);
if(n==2)
{for(int j=0;j<=i2;j++)
{
gotoxy(32+j,5);
cout<<st14[j];}}
else if(n==1)
{gotoxy(32,5);
cout<<temp14[arr14];
gotoxy(64,5);
cout<<"//city selected..";
setcolor(1);
setfillstyle(1,1);
bar(250,150,320,185);
setcolor(15);
rectangle(250,150,320,185);
setcolor(15);
settextstyle(1,0,1);
outtextxy(260,155,"LOGIN");
int status=initmouse();   int tempx,tempy,button,x,y;
 if(status==0)
 printf("mouse not supported");
 else
 {showmouseptr();
  getmousepos(&button,&x,&y);//enabling mouse
   while(!kbhit())           //gets input from user and directs the compiler
   {   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {if(x>250&&y>150&&x<320&&y<185)
   {return(1);
    break;}
    else if(x>237&&y>50&&x<500&&y<80)
    {search_city();
    break;
    }}}}}}
void calculate()
{   l14=0;
int m=0,status=0;
 for(int j=0;j<12;j++)
 {status=1;
 for(int k=0;k<=i2;k++)
 {if(tolower(ch14[j][k])!=tolower(st14[k]))
{status=0;
break;
}}
if(status==1)
{
   strcpy(temp14[l14++],ch14[j]);}}}
void input14()
{          int k;
for(i2=0;;i2++)
{       k=0;
st14[i2]=getch();
if(st14[i2]==(int)8)
{ i2-=2;
if(i2==-2)
i2=-1;}
if(st14[i2]==(int)13)
{
if(arr14<l14)
{display(1);
break;}
else{i2=-1;
}}
//if(st[i]!=(int)72 || st[i]!=(int)80)
//arr=0;
if(st14[i2]==(int)72 || st14[i2]==(int)80)
{ int n=st14[i2];
i2-=2;
//display();
calculate();
slide(n);
disp_city(l14); k=1;}

if(k==0) //if(st[i]!=(int)72 || st[i]!=(int)80)
{display(2);
calculate();
disp_city(l14);}}}
void search_city()
{
int gdrive=DETECT,gmode,errorcode;
initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
l14=0;arr14=0;i2=-1;
display(2);
input14();
}
account spl_ob;
int login(int n)
{
char id[100],pass[100]; int status=0,i;
fstream f;
if(n==1)
goto A;
gotoxy(33,11);
for(i=0;i<25;i++)
{
cout<<" ";}
while(status==0)
{gotoxy(33,11);
cout<<"_";
gotoxy(33,11);
gets(id);
f.open("f1.dat",ios::binary|ios::in);
while(f.read((char*)&spl_ob,sizeof(spl_ob)))
{
if(strcmp(spl_ob.id,id)==0)
{
status=1;
gotoxy(60,11);
cout<<"                  ";
break;
}}
if(status==0)
{gotoxy(60,11);
cout<<"\\Invalid.try again";
gotoxy(33,11);
for(int i=0;i<25;i++)
{cout<<" ";}
return(1);}
f.close();}
A:
status=0;
while(status==0)
{gotoxy(33,14);
cout<<"_";
gotoxy(33,14);
for(int i=0;;i++)
{
pass[i]=(char)getch();
if((int)pass[i]==13)
{pass[i]=='\0';
break;}
else if((int)pass[i]==8)
{gotoxy(33+i-1,14);
cout<<" ";
i-=2;
gotoxy(35+i-1,14);
if(i==-2)
{i=-1;
gotoxy(33,14);}}
else
cout<<"*";
}
status=1;
for(int j=0;j<strlen(spl_ob.password);j++)
{
if(pass[j]!=spl_ob.password[j] || strlen(spl_ob.password)!=i)
{status=0;
break;}}
  if(status==1)
  {
  gotoxy(60,14);
  cout<<"               ";
  break;
  }
if(status==0)
{
gotoxy(60,14);
cout<<"Wrong password..";
gotoxy(33,14);
for(i=0;i<25;i++)
{
 cout<<" ";
}
return(2);
}setcolor(9);
rectangle(220,260,310,295);
setfillstyle(1,9);
floodfill(222,267,9);
setcolor(15);
settextstyle(1,0,1);
outtextxy(235,265,"LOGIN");
int st=initmouse();   int tempx,tempy,button,x,y;
 if(st==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
      getmousepos(&button,&x,&y);      //enabling mouse
   while(!kbhit())           //gets input from user and directs the compiler
  { getmousepos(&button,&x,&y);
   if((button&1)==1)
   {  if(x>=220 && x<=310 && y>=260 && y<=295 && p(skip,"no")==0)
   {
       strcpy(skip,"yes");
   mop();
    break;    }

   if(x>=220 && x<=310 && y>=260 && y<=295)
   {       strcpy(skip,"yes");
       home();
    break;    }
    else if(x>70&&y>405&&x<140&&y<430)
    {  exit(0);
    break;
    }
    else if(x>=220 && x<=310 && y>=340 && y<=375)
    {
    signup_slide();
    break;
    }
else if(x>500&&y>405&&x<570&&y<430)
    {
    strcpy(skip,"no");
    home();
    }}}}}
void login_slide()
{closegraph();
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");

setcolor(9);
setfillstyle(10,9);
rectangle(20,20,getmaxx()-20,getmaxy()-20);
floodfill(1,1,9);
setfillstyle(4,1);
bar(190,40,392,75);
setcolor(13);
rectangle(190,40,392,75);
settextstyle(1,0,3);
setcolor(2);
outtextxy(205,42,"MAKE MY SHOW");
setcolor(10);
outtextxy(203,42,"MAKE MY SHOW");
setcolor(1);
rectangle(100,150,200,180);
setfillstyle(1,1);
floodfill(102,152,1);
setcolor(15);
rectangle(100,150,200,180);
settextstyle(1,0,1);
outtextxy(105,155,"E-MAIL ID   :");

setcolor(15);
rectangle(250,150,460,180);
setcolor(1);
rectangle(100,200,200,230);
setfillstyle(1,1);
floodfill(102,202,1);
setcolor(15);
rectangle(100,200,200,230);
settextstyle(1,0,1);
outtextxy(105,205,"PASSWORD   :");
setcolor(15);
rectangle(250,200,460,230);
setcolor(7);
rectangle(220,260,310,295);
setfillstyle(1,7);
floodfill(222,267,7);
setcolor(9);
setcolor(15);
settextstyle(1,0,1);
outtextxy(235,265,"LOGIN");
setcolor(10);
line(200,315,250,315);
settextstyle(1,0,1);
setcolor(15);
outtextxy(255,302,"or");
setcolor(10);
line(275,315,325,315);
setcolor(2);
rectangle(220,340,310,375);
setfillstyle(1,2);
floodfill(222,352,2);
setcolor(15);
settextstyle(1,0,1);
outtextxy(230,345,"SIGN UP");
setcolor(15);
setfillstyle(10,15);
bar(500,405,570,430);
setcolor(15);
rectangle(500,405,570,430);
settextstyle(3,0,1);
outtextxy(520,405,"SKIP");
setcolor(15);
setfillstyle(10,15);
bar(70,405,140,430);
setcolor(15);
rectangle(70,405,140,430);
settextstyle(3,0,1);
outtextxy(90,405,"EXIT");
int status=initmouse();   int tempx,tempy,button,x,y;
if(status==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
      getmousepos(&button,&x,&y);      
   while(!kbhit())           //gets input from user and directs the compiler
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   { int n;
   if(x>=250 && x<=460 && y>=150 && y<=180)
   {  n=login(0);
    if(n!=1 && n!=2)
    break;
    }
    else if(x>70&&y>405&&x<140&&x<430)
    {exit(0);
    break;}
else if(x>=220 && x<=310 && y>=340 && y<=375)
    {      signup_slide()    }
    else if(n==2)
   {     if(x>250&&y>200&&x<460&&y<230)
     {n=login(1);
     if(n!=2)
   break;     }   }
   else if(x>500&&y>405&&x<570&&y<430)
     {
	 strcpy(skip,"no");
	 home();
     }}}}}
void signup()
{account ob,ob1;
fstream f;
int status=0;
while(status==0)
{
 gotoxy(30,8);
cout<<"_";
gotoxy(30,8);
gets(ob.fname);
 if(strlen(ob.fname)==0)
 { gotoxy(60,8);
    cout<<" //empty";
    gotoxy(30,8);
    cout<<"            ";
 }
 else {status=1; gotoxy(60,8);cout<<"         ";}
}
 status=0;
while(status==0)
{
gotoxy(30,10);
cout<<"_";
gotoxy(30,10);
int st=0;
while(st==0)
{
 gotoxy(30,10);
cout<<"_";
gotoxy(30,10);
gets(ob.id);
 if(strlen(ob.id)==0)
 { gotoxy(60,10);
    cout<<" //empty";
    gotoxy(30,10);
    cout<<"            ";
 }
 else {st=1; gotoxy(60,10);cout<<"         ";}
}status=1;
f.open("f1.dat",ios::binary|ios::in);
while(f.read((char*)&ob1,sizeof(ob1)))
{if(strcmp(ob.id,ob1.id)==0){
status=0;
break;}}
if(status==0)
{gotoxy(61,10);
cout<<"//already exits";
gotoxy(30,10);
cout<<"                   ";
}if(status==1)
{gotoxy(61,10);
cout<<"                ";
}
f.close();}
gotoxy(30,13);
cout<<"_";
gotoxy(30,13);
for(int i=0;;i++)
{
ob.password[i]=(char)getch();
if((int)ob.password[i]==13)
{
   if(i==0)
   {  i--;
      gotoxy(60,13);
      cout<<"//empty";
      gotoxy(30,13);
      cout<<"           ";
      gotoxy(30,13);
      cout<<"_";
      gotoxy(30,13);
   }
   else
   {      gotoxy(60,13);
      cout<<"           ";
    ob.password[i]='\0';
     break; }}
else if((int)ob.password[i]==8)
{gotoxy(30+i-1,13);
cout<<" ";
i-=2;
gotoxy(30+1+i,13);
if(i==-2)
{ i=-1;
gotoxy(30,13);}}
else
cout<<"*";
}
char pass[50];
do
{ gotoxy(30,15);
cout<<"_";
gotoxy(30,15);
for(i=0;;i++)
{
pass[i]=(char)getch();
if((int)pass[i]==13)
{
pass[i]='\0';
break;
}
else if((int)pass[i]==8){
gotoxy(30+i-1,15);
cout<<" ";
i-=2;
gotoxy(30+i+1,15);
if(i==-2){
i=-1;
gotoxy(30,15);
}}
else
cout<<"*";
}
if(strcmp(ob.password,pass)!=0)
{ gotoxy(61,15);
cout<<"//does not match";
gotoxy(30,15);
cout<<"                  ";
}
else{
gotoxy(61,15);
cout<<"                ";
}
}while(strcmp(ob.password,pass)!=0);
gotoxy(30,18);
cout<<"_";
gotoxy(30,18);
for(i=0;;i++)
{
ob.phno[i]=(int)getch();
if(i==0 && ob.phno[i]==13)
{
i--;
continue;
}
else if((int)ob.phno[i]==13)
{
ob.phno[i]='\0';
break;
}
else if((int)ob.phno[i]==8)
{
gotoxy(30+i-1,18);
cout<<" ";
i-=2;
gotoxy(30+i+1,18);
if(i==-2){
i=-1;
gotoxy(30,18);
}
}
else
cout<<ob.phno[i];}
setcolor(9);
rectangle(230,355,310,395);
setfillstyle(1,9);
floodfill(232,357,9);
setcolor(1);
rectangle(230,355,310,395);
setcolor(15);
settextstyle(1,0,1);
outtextxy(245,360,"NEXT");
int st=initmouse(); 
  int tempx,tempy,button,x,y;
 if(st==0)
 printf("mouse not supported");
 else
 { showmouseptr();
      getmousepos(&button,&x,&y);      
   while(!kbhit())    
   {   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {if(x>=230 && x<=310 && y>=355 && y<=395)
   {
    search_city();
    break;}}}}
strcpy(ob.city,temp14[arr14]);
f.open("f1.dat",ios::binary|ios::out|ios::app);
f.write((char*)&ob,sizeof(ob));
f.close();
login_slide();
}
void signup_slide()
{closegraph();
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
setcolor(9);
setfillstyle(10,9);
rectangle(20,20,getmaxx()-20,getmaxy()-20);
floodfill(1,1,9);
setfillstyle(4,1);
bar(190,40,392,75);
setcolor(13);
rectangle(190,40,392,75);
settextstyle(1,0,3);
setcolor(2);
outtextxy(205,42,"MAKE MY SHOW");
setcolor(10);
outtextxy(203,42,"MAKE MY SHOW");
setcolor(1);
for(int i=0;i<5;i++)
{rectangle(70,100+(i*40),180,130+(i*40));}
setcolor(15);
settextstyle(2,0,7);
outtextxy(75,105,"NAME      :");
outtextxy(75,145,"E-MAIL ID :");
outtextxy(75,185,"PASSWORD  :");
outtextxy(75,225,"RE-ENTER  :");
outtextxy(75,265,"PHONE NO. :");
setcolor(8);
for(i=0;i<5;i++)
{
rectangle(220,100+(i*40),470,130+(i*40));
}signup();}
void fiftyp(){  //five
	   line(100,150,200,150);
	   line(100,150,100,230);
	 line(100,230,200,230);
	 line(200,230,200,310);
	  line(100,310,200,310);
	  //zero
	  line(250,150,350,150);
	  line(250,150,250,310);
	  line(350,150,350,310);
	  line(250,310,350,310);
	  //percent
	  line(400,310,500,150);
	  circle(410,185,30);
	  circle(490,275,30);
	   settextstyle(5,HORIZ_DIR,4);
	  outtextxy(150,320,"off on all brands*");
	     settextstyle(7,HORIZ_DIR,6);
	     outtextxy(200,75,"FLAT");
	   settextstyle(2,HORIZ_DIR,4);
	     outtextxy(100,450,"* terms and conditions applied");
	      settextstyle(10,HORIZ_DIR,2);
	      outtextxy(150,370,"FROM 25-28 NOVEMBER!!");
	     }
 void add1()
 { closegraph();
int gmode=DETECT,gdrive;
initgraph(&gmode,&gdrive,"c://tc//bgi");
      int i,j,location,n,c=10;
strcpy(str,"           FLIPKART MAHA SALE  ");
      for(i=0;!kbhit();i++){
	    cleardevice();
	    fiftyp();
	 setfillstyle(SOLID_FILL,BLACK);
	 bar(50,50,600,90);
       /////multicolor banner
       if(c==14)
	 c=10;
       else
	 c++;
       setcolor(c);
       //////
       settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
       outtextxy(50,50,str);
       delay(350);
       ch = str[0];
       //////substring logic
       n=strlen(str);
       location=0;
       for(j=location;j<n;j++){
	 str[j] = str[j+1];
       }
       ///appending char at end
       str[n-1]=ch;
       str[n]='\0';
      }getch();}
void taskbar(int jkl)
{ settextstyle(3,HORIZ_DIR,1);
 setcolor(BLACK);
 setfillstyle(SOLID_FILL,9);
       for(int i=20;i<=500;i+=20)
       bar(0,i,130,i+20);
       line(0,20,500,20);
       for(i=50;i<=240;i+=40)
       line(0,i,130,i);
       outtextxy(20,65,"HOME ");
       outtextxy(20,105,"SUPPORT ");
       outtextxy(20,145,"MY PROFILE ");
       outtextxy(20,185,"EXIT ");
       line(0,420,130,420);
       outtextxy(20,420,"LOGOUT");
outtextxy(20,450,"v.1.67");
	 setfillstyle(SOLID_FILL,4);
	 for(i=70;i<200;i+=40)
	 bar(3,i,12,i+10);
	 bar(3,430,12,440);
int status=initmouse();   
int tempx,tempy,button,x,y;
  if(status==0)
 printf("mouse not supported");
 else
 { showmouseptr();
      getmousepos(&button,&x,&y);
   while(!kbhit())
   { getmousepos(&button,&x,&y);
   if((button&1)==1)
   {if(y>=0)
   {int temp=x;
     if(temp<=21&&y>=2&&y<=10&&temp>=2)
     {    if(jkl==1)
   movie_list1();
   else if(jkl==3)
   dummy();
   else if(jkl==4)
   home();
   else if(jkl==5)
   events();
   else if(jkl==6)
   range();
   else if(jkl==14)
   screens1();
   else if(jkl==12)
   screens2();
   else if(jkl==10)
   profile();
   else if(jkl==7)
   support();
   else if(jkl==20)
   search_city1412();
   else
   movie_list2();
     break;
     }     else if(x>20&&y>145&&x<100&&y<170)
     {     profile();   break;     }
     else if(x>0 && y>90 && x<130 && y<145)
     {
     support();
     break;
     }
     else if(y>=420&&temp<=130&&temp>=10&&y<=450)
     {
      login_slide();
      strcpy(skip,"yes");
      break;
      }
       else if(x>0&&y>40&&x<130&&y<90)
       {
       home();
       break;
       }
       else if(x>0&&y>170&&x<130&&y<220)
       {
       exit(0);
       break;
       }     else
    continue;
}}}}}
 void loading1()
 {
 closegraph();
 initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
 int c=150;
 int x,y,i;
 x=getmaxx()/2;
 y=getmaxy()/2;
 for(int e=0;e<25;e++)
 {
 for(i=50;i<100;i++)
 {
 setcolor(6);
 if(i==70)
 setcolor(3);
 if(i>=80)
 setcolor(10);
 circle(x,y,i);
 circle(x,y,c);
 c-- ;
 cleardevice();
 }}}
void movie_list2();
 //-----------------------------
	      int call;
	      int u,l=1;
	       void range1();
		     void range1_graphics();
		 void select11()
     {
     int   status=initmouse();   int button,x,y;

	    setfillstyle(1,LIGHTGRAY); setcolor(BLACK);
	char ch[][10]={"1","2","3","4","5","6","7"};
	int k=0;
	      l=1;
      for(int i=0;i<200;i+=30)
	     {
   bar(280,129+(i),340,129+(i)+24);
	   outtextxy(300,129+i,ch[k]);
       k++;
    }      delay(1000);
  if(status==0)
 printf("mouse not supported");
 else
 { showmouseptr()     getmousepos(&button,&x,&y);
while(!kbhit())
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {
   if(y>=1)
   {      for(int i=0;i<200;i+=30,l++)
       {
   if(x>280&&y>129+(i)&&x<340&&y<129+(i)+24)
  {     range1_graphics();
       break;
       }}}  else   continue; }}}}
      void range1_graphics()
      {
      closegraph();
      initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
	range1();
	}
void range1()
{    setfillstyle(8,1);
   bar(10,20,650,600);
 setcolor(3);
rectangle(10,20,630,460);
setfillstyle(CLOSE_DOT_FILL,5);
floodfill( 0,0,3);
  always();
  pop();
  setfillstyle(1,12);  settextstyle(7,HORIZ_DIR,3);setcolor(BLACK);
  bar(430,350,530,380); outtextxy(435,350,"Proceed");
 setcolor(13);
  outtextxy(130,100,"TICKETS  : ");
  setfillstyle(1,2);
setcolor(2);   rectangle(280,105,340,129);
	   setcolor(15);
      line(320,109,330,120);  line(330,120,340,109);
      line(320,109,340,109);
setcolor(WHITE);  outtextxy(230,180,"SILVER");     outtextxy(380,180,"Rs 100 ");
setcolor(14);   outtextxy(230,230,"GOLD");      outtextxy(380,230,"Rs 120");
setcolor(DARKGRAY);   outtextxy(230,280,"PLATINUM"); outtextxy(380,280,"Rs 150");
   setcolor(2);
circle(200,195,5);circle(200,245,5);circle(200,295,5);
hello(l);
dot(u);
int   status=initmouse();   int button,x,y;
   if(status==0)
 printf("mouse not supported");
 else
 { showmouseptr();
   getmousepos(&button,&x,&y);
   while(!kbhit())
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {if(y>=1)
   {
     if(x<340&&y>105&&y<=129&&x>280)
   {  select11();
     break;   }
    else  if(x<=21&&y>=2&&y<=10&&x>=2)
     {
     taskbar(6);
     break;
     }
     else if(x>430&&y>350&&x<530&&y<380)
     {
    // g=15;
   // bill(1,l,u);
   call=1;
     dummy();
    break;
     }
     else if(x>200&&y>185&&y<220)
     {
       u=1;
      range1_graphics();
      break;     }
      else if(x>200&&y>230&&y<265)
      {   u=2;
	 range1_graphics();
	break;	      }
      else if(x>200&&y>280&&y<315)
      { u=3;
  range1_graphics();
   break;    }
   else
    continue;	 }}}}}
       char hisscreen[50];
       char ti[50],ddt[50];
 void screens2()
  {   closegraph();
      initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
  closegraph();
  initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
 rectangle(10,20,630,460);
setfillstyle(CLOSE_DOT_FILL,1);
floodfill( 0,0,3);
always();
  int style,size;
 size=3;
 settextstyle(1,HORIZ_DIR,size);
 setcolor(13);
// setbkcolor(8);
    outtextxy(40,110,"PvR CINEMAS");
   outtextxy(40,200,"LUXE");
    outtextxy(40,290,"MAYAJAL");
    outtextxy(40,370,"ABIRAMI CINEMAS");
	  /*
	   setcolor(LIGHTGREEN);
    rectangle(250,105,340,140);  rectangle(370,105,460,140);
 rectangle(250,195,340,230);rectangle(370,195,460,230);
    rectangle(490,195,580,230);
     rectangle(420,285,510,320);
    rectangle(300,365,390,400);  rectangle(420,365,510,400);
    size=1;settextstyle(4,HORIZ_DIR,size);
      outtextxy(270,110,"10:00");	       outtextxy(390,110,"1:00");
      setcolor(4);	       outtextxy(510,110,"4:00"); rectangle(490,105,580,140);
	setcolor(RED);         outtextxy(330,290,"2:00"); rectangle(300,285,390,320);
       setcolor(LIGHTGREEN);
	       outtextxy(270,200,"12:00");
	       outtextxy(390,200,"3:00");
	       outtextxy(510,200,"5:00");
	       outtextxy(330,370,"3:30");
	       outtextxy(450,290,"4:00");
	       outtextxy(450,370,"6:00");
    outtextxy(10,50,"PvR CINEMAS");
    outtextxy(10,150,"LUXE ");
    outtextxy(10,250,"MAYAJAL");
    outtextxy(10,350,"ABIRAMI CINEMAS")	*/
   setcolor(LIGHTGREEN);
    rectangle(250,105,340,140);
rectangle(250,195,340,230);rectangle(370,195,460,230);
    rectangle(490,195,580,230);
      rectangle(420,365,510,400);
	     size=1;
 settextstyle(4,HORIZ_DIR,size);
      outtextxy(270,105,"9:45");
     setcolor(4);	       outtextxy(510,105,"7:00"); rectangle(490,105,580,140);
	setcolor(RED);         outtextxy(330,285,"12:45"); rectangle(300,285,390,320);
  outtextxy(330,365,"6:30");  rectangle(420,285,510,320);
    rectangle(300,365,390,400);   rectangle(370,105,460,140);   outtextxy(390,105,"1:25");	       outtextxy(450,285,"4:00");
 setcolor(LIGHTGREEN);
 outtextxy(270,195,"8:00");
 outtextxy(390,195,"3:00");
  outtextxy(510,195,"5:00");
  outtextxy(450,365,"6:45");
  setfillstyle(1,0);
		bar(0,getmaxy()-20,getmaxx(),getmaxy());
		setcolor(LIGHTGRAY);
rectangle(0,getmaxy()-20,getmaxx(),getmaxy());
		setfillstyle(7,9);
bar(getmaxx()/2,getmaxy()15,getmaxx()40,getmaxy()-5);
		rectangle(getmaxx()/2,getmaxy()-15,getmaxx()-40,getmaxy()-5);
		setcolor(LIGHTGRAY);
rectangle(0,getmaxy()-20,30,getmaxy());
rectangle(getmaxx()30,getmaxy()20,getmaxx(),getmaxy())
setcolor(10);
setfillstyle(9,10);
circle(15,getmaxy()-10,7);
floodfill(15,getmaxy()-10,10);
circle(getmaxx()-15,getmaxy()-10,7);
floodfill(getmaxx()-15,getmaxy()-10,10);
int status=initmouse();   int tempx,tempy,button,x,y;
  if(status==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
      getmousepos(&button,&x,&y);
// tempx=x;
// tempy=y;
   while(!kbhit())
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   { {  if(x<=21&&y>=2&&y<=10&&x>=2) {
    taskbar(12);
    break;}  if(date_var==1)
   {
   if(x>250&&y>105&&x<340&&y<140)//1
    {
    strcpy(hisscreen,"PVR CINEMAS");
    strcpy(ti,"9 : 45");
    range1_graphics();
    break;
    }
     else if(x>250&&y>195&&x<340&&y<230) //2
     {
	strcpy(ti,"8 : 00");
     strcpy(hisscreen,"LUXE");
     range1_graphics();
     break; }
     else if(x>370&&y>195&&x<460&&y<230)//2
     {	strcpy(ti,"3 : 00");
     strcpy(hisscreen,"LUXE");
     range1_graphics();
     break;
     }
     else if(x>490&&y>195&&x<580&&y<230)//2
     {
	    strcpy(ti,"5 : 00");
	 strcpy(hisscreen,"LUXE");
     range1_graphics();
     break;
     }
    else if(x>420&&y>365&&x<510&&y<400)//4
     {
	strcpy(ti,"6 : 45");
     strcpy(hisscreen,"ABIRAMI CINEMAS");
     range1_graphics();
     break;
     }}
  if(x>0 && y>getmaxy()-20 && x<getmaxx()/2 && y<getmaxy())
  { screens1();
   break; }
   if(date_var==0)
   {    setcolor(12);
     settextstyle(1,0,2);
     outtextxy(350,400,"Error : Please select date."); }}}}}}
void date_select()
{
 struct date cvb;
getdate(&cvb);
setfillstyle(1,6);
bar(250,45,350,70);
setfillstyle(1,7);
bar(355,45,380,70);
  setcolor(6);
  line(360,65,375,65);
  line(360,65,368,55);
  line(375,65,368,55);
  setfillstyle(1,6);
 floodfill(368,60,6);
for(int i=0;i<5;i++)
{ setfillstyle(SOLID_FILL,0);
bar(250,75+(i*30),350,105+(i*30));
setcolor(15);
   rectangle(250,75+(i*30),350,105+(i*30));
}   int k=0;
  for(i=0;i<10;i+=2)
  {
  gotoxy(34,6+i);
printf("%d/%d/%d",cvb.da_day+k,cvb.da_mon,cvb.da_year);
  k++;
 }
 int status=initmouse();   int tempx,tempy,button,x,y;
 if(status==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
      getmousepos(&button,&x,&y);      //enabling mouse
  while(!kbhit())           //gets input from user and directs the compiler
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {
     int n;
   if(x>250&&y>75+(0*30)&&x<350&&y<105+(0*30))
   {
	  d_day=cvb.da_day;
	  d_month=cvb.da_mon;
	  d_year=cvb.da_year;
	  date_var=1;
	  screens1();
	  break;
   }
   else if(x>250&&y>75+(1*30)&&x<350&&y<105+(1*30))
   {    d_day=cvb.da_day+1;
	  d_month=cvb.da_mon;
	  d_year=cvb.da_year;
	   date_var=1;
	  screens1();
	  break;
   }
   else if(x>250&&y>75+(2*30)&&x<350&&y<105+(2*30))
   {d_day=cvb.da_day+2;
	  d_month=cvb.da_mon;
	  d_year=cvb.da_year;
	   date_var=1;
	  screens1();
	  break;   }
   else if(x>250&&y>75+(3*30)&&x<350&&y<105+(3*30))
   { d_day=cvb.da_day+3;
	  d_month=cvb.da_mon;
	  d_year=cvb.da_year;
	   date_var=1;
	  screens1();
	  break;
   }
   else if(x>250&&y>75+(4*30)&&x<350&&y<105+(4*30))
   { d_day=cvb.da_day+4;
	  d_month=cvb.da_mon;
	  d_year=cvb.da_year;
	   date_var=1;
	  screens1();
	  break;
   }
   else if(x>355&&y>45&&x<380&&y<70)
   {
       screens1();
       break;
   } }}}
//screens1();}
int var123=0,temp123=2;
void screens1()
{       closegraph();
  initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
 rectangle(10,20,630,460);
setfillstyle(CLOSE_DOT_FILL,1);
floodfill( 0,0,3);
always();
		temp123=2;var123=0;
//setfillstyle(SOLID_FILL,6);
 setcolor(15);
 settextstyle(1,0,2);
 outtextxy(100,40,"Select Date  :");
  if(date_var==0)
 { setfillstyle(SOLID_FILL,LIGHTGRAY);
		    bar(250,45,350,70);
   settextstyle(2,0,6);
 outtextxy(275,50,"Date");  }  else
  { setfillstyle(1,0);
  bar(250,45,350,70);
   setcolor(7);
   rectangle(250,45,350,70);
   gotoxy(34,4);
   cout<<d_day<<"/"<<d_month<<"/"<<d_year;
   }setfillstyle(SOLID_FILL,LIGHTGRAY);
bar(355,45,380,70);
setcolor(6);
  line(360,55,375,55);
  line(360,55,368,65);
  line(375,55,368,65);
  setfillstyle(1,6);
  floodfill(368,60,6);
 int style,size;
 size=3;
 settextstyle(1,HORIZ_DIR,size);
 setcolor(13);
// setbkcolor(8);
   outtextxy(40,110,"PALAZO");
    outtextxy(40,200,"SATHYAM ");
    outtextxy(40,290,"ESCAPE");
    outtextxy(40,370,"AGS T.NAGAR");
 setcolor(LIGHTGREEN);
 rectangle(250,105,340,140);  rectangle(370,105,460,140);
rectangle(250,195,340,230);
rectangle(370,195,460,230);    rectangle(490,195,580,230);
     rectangle(420,285,510,320);
    rectangle(300,365,390,400);  rectangle(420,365,510,400);
   size=1;
 settextstyle(4,HORIZ_DIR,size);
 outtextxy(270,110,"10:00");
 outtextxy(390,110,"1:00");
 setcolor(4);	      
 outtextxy(510,110,"4:00"); rectangle(490,105,580,140);
setcolor(RED);         outtextxy(330,290,"2:00"); rectangle(300,285,390,320);
 setcolor(LIGHTGREEN);
outtextxy(270,200,"12:00");
outtextxy(390,200,"3:00");
outtextxy(510,200,"5:00");
outtextxy(330,370,"3:30");
outtextxy(450,290,"4:00");
outtextxy(450,370,"6:00");
//setcolor(BLUE);
//line(570,450,610,450);line(610,450,590,440);
setfillstyle(1,0);
bar(0,getmaxy()-20,getmaxx(),getmaxy());
setcolor(LIGHTGRAY);
rectangle(0,getmaxy()-20,getmaxx(),getmaxy());
setfillstyle(7,9);
bar(40,getmaxy()-15,getmaxx()/2,getmaxy()-5);
rectangle(40,getmaxy()15,getmaxx()/2,getmaxy()15);
setcolor(LIGHTGRAY);
rectangle(0,getmaxy()-20,30,getmaxy());
rectangle(getmaxx()-30,getmaxy()-20,getmaxx(),getmaxy());
setcolor(10);
setfillstyle(9,10);
circle(15,getmaxy()-10,7);
floodfill(15,getmaxy()-10,10);
circle(getmaxx()-15,getmaxy()-10,7);
floodfill(getmaxx()-15,getmaxy()-10,10);
int status=initmouse();   int tempx,tempy,button,x,y;
 if(status==0)
printf("mouse not supported");
 else
 {
 showmouseptr();
  getmousepos(&button,&x,&y);
//tempx=x;
// tempy=y;
   while(!kbhit())
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
  {  { if(x>355&&y>45&&x<380&&y<70)
     { hidemouseptr();
     date_select();
     break;
     }
     if(x<=21&&y>=2&&y<=10&&x>=2)
    {
    taskbar(14);
    break;
    }
 if(date_var==1)
  {  if(x>250&&y>105&&x<340&&y<140)//1
    {   strcpy(ti,"10:00");
   strcpy(hisscreen,"PALAZO");
    range1_graphics();
   break;   }
    else if(x>370&&y>105&&x<460&&y<140) //1
    {   strcpy(ti,"1 : 00");
       strcpy(hisscreen,"PALAZO");
    range1_graphics();
    break; }
    else if(x>250&&y>195&&x<340&&y<230) //2
     {	strcpy(ti,"12 : 00");
	 strcpy(hisscreen,"SATHAYM");
     range1_graphics();
     break;
     }     else if(x>370&&y>195&&x<460&&y<230)//2
     {	 strcpy(ti,"3 : 00");
	 strcpy(hisscreen,"SATHAYM");
     range1_graphics();
     break;
     }
     else if(x>490&&y>195&&x<580&&y<230)//2
     {	strcpy(ti,"5 : 00");
     strcpy(hisscreen,"SATHYAM");
     range1_graphics();
     break;
     }
      else if(x>420&&y>285&&x<510&&y<320)//3
     {
	strcpy(ti,"4 : 00");
     strcpy(hisscreen,"ESCAPE");
     range1_graphics();
     break;
     }
      else if(x>300&&y>365&&x<390&&y<400)//4
     {     strcpy(ti,"3 : 30");
	 strcpy(hisscreen,"AGS CINEMAS");
     range1_graphics();
     break;
     }
      else if(x>420&&y>365&&x<510&&y<400)//4
     {
	strcpy(ti,"6 : 00");
      strcpy(hisscreen,"AGS CINEMAS");
     range1_graphics();
     break;
     } }   if(date_var==0)
   {     setcolor(12);
     settextstyle(1,0,2);
outtextxy(350,400,"Error : Please selectdate."); 
   if(x>getmaxx()/2 && y>getmaxy()-20 && x<getmaxx() && y<getmaxy())
   {
   screens2();
   break;
   }}}}}}
void always();
/*{setcolor(9);
setfillstyle(SOLID_FILL,9);
		  bar(0,0,800,20);
		   setcolor(BLACK);
		  for(int i=2;i<=20;i+=4)
		  line(5,i,21,i);
		  }  */
void movie_list1()
{closegraph();
  initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
  setcolor(3);
rectangle(10,20,630,460);
setfillstyle(CLOSE_DOT_FILL,5);
floodfill( 0,0,3);
setcolor(8);    always();
setfillstyle(SOLID_FILL,8);
 bar(30,40,290,240);  //1
 bar(310,40,590,240);    //1
 bar(30,260,290,440);             //2
 bar(310,260,590,440);               //2
 setcolor(15);
  line(610,230,630,250);
  line(630,250,610,270);
  line(610,230,610,270);
setfillstyle(SOLID_FILL,4);
 bar(30,210,290,230);
 bar(310,210,590,230);
 bar(30,410,290,430);
 bar(310,410,590,430);
 int style,size;
 size=3;
 settextstyle(10,HORIZ_DIR,size);
 setcolor(14);
 outtextxy(90,50,"MERSAL");
 outtextxy(50,260,"ANNABELLE");
 outtextxy(370,50,"GOLMAAL");
 outtextxy(360,260,"SPYDER");
 size=1;
 settextstyle(3,HORIZ_DIR,size);
 setcolor(15);
outtextxy(100,207,"BOOK NOW ");
 outtextxy(100,407,"BOOK NOW ");
 outtextxy(400,207,"BOOK NOW ");
 outtextxy(400,407,"BOOK NOW ");
     int tp=4;
 settextstyle(7,HORIZ_DIR,size);
 setcolor(tp);
  bar(180,150,265,180);  tp=15;setcolor(tp);
 outtextxy(185,153,"REVIEW");
//   bar(30,150,150,180);
 settextstyle(7,HORIZ_DIR,1);
 setcolor(11);
		  size=1;
 settextstyle(3,HORIZ_DIR,size);
 outtextxy(60,144,"RATING"); setcolor(0);
   outtextxy(50,164,"* * * *");//mersal
    bar(475,150,560,180);
    bar(180,350,265,380);
    bar(475,350,560,380);
		  size=1;
 settextstyle(7,HORIZ_DIR,size);  setcolor(15);
   outtextxy(480,153,"REVIEW");
outtextxy(185,353,"REVIEW");outtextxy(480,353,"REVIEW");
 setcolor(11);
   size=1;
 settextstyle(3,HORIZ_DIR,size);
 outtextxy(360,144,"RATING");
 outtextxy(60,344,"RATING");
 outtextxy(360,344,"RATING");
	   setcolor(0);
	    //outtextxy(50,164,"* * ");//judwaa2
	   outtextxy(350,164,"*");//annabelle
	   outtextxy(50,364,"* *");//golmaal
	   outtextxy(350,364,"* * * ");//spyder
int status=initmouse();   int tempx,tempy,button,x,y;
if(status==0)
 printf("mouse not supported");
 else
 {showmouseptr();
   getmousepos(&button,&x,&y);
// tempx=x;
// tempy=y;
   while(!kbhit())
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {if(y>=1)
   {int temp=x;
   if(temp>=40&&y<=230&&y>=160&&temp<290)//1
    {          delay(100);
    screens1();
    break;
    }
    else if(temp>=310&&y<=230&&y>=160&&temp<520) //2
    {               delay(100);
    screens1();
	break;
      }

     else if(y<=490&&y>=410&&temp>=40&&temp<290) //3
     {                      delay(100);
     screens1();
     break;
     }
     else if(y<=490&&y>=410&&temp>=310&&temp<520)//3
     {
     screens1();
     break;
     }
     else if(temp<=21&&y>=2&&y<=10&&temp>=2)    {     taskbar(1);
     break;    }
     else if(temp>610&&temp<630&&y>230&&y<270)
     {      movie_list2();
      break;}     else
    continue; }}}} }
  void movie_list2()
  {    closegraph();
      initgraph(&gdrive,&gmode,"c:\\tc\\BGI");  setcolor(3);
rectangle(10,20,630,460);
setfillstyle(CLOSE_DOT_FILL,5);
floodfill( 0,0,3);
setcolor(8);    always();
setfillstyle(SOLID_FILL,8);
 bar(30,40,290,240);  //1
 bar(310,40,590,240);    //1
 bar(30,260,290,440);             //2
 bar(310,260,590,440);               //2
 setcolor(15);
  line(610,250,630,230);
   line(630,250,630,270);
   line(610,250,630,270);
setfillstyle(SOLID_FILL,4);
 bar(30,210,290,230);
 bar(310,210,590,230);
 bar(30,410,290,430);
 bar(310,410,590,430);
 int style,size;
 size=3;
 settextstyle(10,HORIZ_DIR,size);
 setcolor(14);
 outtextxy(60,50,"JUDWAA 2 ");
 outtextxy(50,260,"BOSS BABY ");
 outtextxy(370,50,"NOOR");
 outtextxy(360,260,"PREMAM");
    size=1;
 settextstyle(3,HORIZ_DIR,size);
 setcolor(15);
 outtextxy(100,207,"BOOK NOW ");
 outtextxy(100,407,"BOOK NOW ");
 outtextxy(400,207,"BOOK NOW ");
 outtextxy(400,407,"BOOK NOW ");
int tp=4;
  bar(180,150,265,180);  tp=15;setcolor(tp);
 outtextxy(185,153,"REVIEW");
  // bar(30,150,150,180);
 settextstyle(7,HORIZ_DIR,1);
 setcolor(11);
  size=1;
 settextstyle(3,HORIZ_DIR,size);
 outtextxy(60,144,"RATING"); setcolor(0);
   setcolor(11);
   size=1;
 settextstyle(3,HORIZ_DIR,size);
 outtextxy(360,144,"RATING");
 outtextxy(60,344,"RATING");
 outtextxy(360,344,"RATING");
 setcolor(0);
    bar(475,150,560,180);
    bar(180,350,265,380);
    bar(475,350,560,380);
  size=1;
 settextstyle(7,HORIZ_DIR,size);  setcolor(15);
   outtextxy(480,153,"REVIEW");
outtextxy(185,353,"REVIEW");
outtextxy(480,353,"REVIEW");
  setcolor(0);
   outtextxy(50,164,"* * ");//judwaa2
  outtextxy(350,164,"* * * *");//noor
  outtextxy(50,364,"* * * *");//boss baby
  outtextxy(350,364,"* * * * *");//premam
int status=initmouse();   int tempx,tempy,button,x,y;
 if(status==0)
printf("mouse not supported");
 else
 { showmouseptr();
   getmousepos(&button,&x,&y);
// tempx=x;
// tempy=y;
  while(!kbhit())
   {   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {if(y>=1)
   {int temp=x;
   if(temp>=40&&y<=230&&y>=160&&temp<290)//1
    {          delay(100);
    screens1();
    break;
    }
    else if(temp>=310&&y<=230&&y>=160&&temp<520) //2
    {               delay(100);
    screens1();
	break;  }
 else if(y<=490&&y>=410&&temp>=40&&temp<290) //3
     {                      delay(100);
     screens1();
     break;
     }
     else if(y<=490&&y>=410&&temp>=310&&temp<520)//3
     {
     screens1();
     break;
     }
     else if(temp<=21&&y>=2&&y<=10&&temp>=2)
     {
     taskbar(2);
     break;
     }
     else if(temp>610&&temp<630&&y>230&&y<270)
     {
      movie_list1();
      break;
      }

     else
    continue; }}}} }
void range();
void taskbar(int );
  void pop()
  {
   setfillstyle(1,15); settextstyle(7,HORIZ_DIR,3);
 bar(80,440,550,500);     setcolor(6);  outtextxy(180,440,"SWIGGY  IT   NOW  .   .   .  . ");settextstyle(6,HORIZ_DIR,1);
  outtextxy(80,460,"SWIGGY");
   settextstyle(2,HORIZ_DIR,5);  setcolor(BLACK);
   // setcolor(4);
    circle(540,445,5);
      settextstyle(2,HORIZ_DIR,1);
    setcolor(GREEN);
    outtextxy(540,443,"i");
	     settextstyle(2,HORIZ_DIR,5);
    setcolor(BLACK);
  outtextxy(450,465,"INSTALL NOW "); }
void box1()
{   setfillstyle(1,BROWN);
		   bar(30,40,200,60);
		     setcolor(LIGHTGRAY);
		      settextstyle(3,HORIZ_DIR,3);
     outtextxy(100,70," I WAS ");
     outtextxy(120,105,"  not  ");
     outtextxy(110,135," READY ");
     outtextxy(100,165," DA ");
      settextstyle(7,HORIZ_DIR,1);
      setcolor(WHITE);
     outtextxy(50,198,"by aravind SA");
	    settextstyle(7,VERT_DIR,5);
     setcolor(3);
     outtextxy(40,50," S. A ");
	    settextstyle(6,HORIZ_DIR,1);
	    setcolor(GREEN);
     outtextxy(50,260," MARCH 7 @");
     outtextxy(50,280,"::VANI MAHAL ");
}void box2()
{                  setfillstyle(1,BROWN);
		   bar(230,40,400,60);
		   settextstyle(3,VERT_DIR,5);
		   setcolor(LIGHTGRAY);
		   outtextxy(230,80,"CHILDIsH");
		   outtextxy(355,75,"BEHAVIOuR");
			   settextstyle(7,HORIZ_DIR,1);
			   setcolor(WHITE);
outtextxy(280,100,"by :");
outtextxy(280,130," sahil");
outtextxy(300,150,"shah");
   settextstyle(6,HORIZ_DIR,1);
   setcolor(GREEN);
     outtextxy(235,260," FEB 27 @");
     outtextxy(235,280,"::MUSIC ACAD.... "); }
void box3()
{    		 setfillstyle(1,BROWN);
	   bar(420,40,590,60);
			    settextstyle(6,HORIZ_DIR,1);
	    setcolor(GREEN);
     outtextxy(480,260," FEB 14 @");
     outtextxy(480,280,"::MUSIC ACAD.... ");
    settextstyle(3,HORIZ_DIR,3);
   setcolor(LIGHTGRAY);
   outtextxy(450,80," MY BABAY ");
   outtextxy(440,100,"THINKS i am ");
   outtextxy(450,120,"  FUNNY ");
  settextstyle(7,HORIZ_DIR,1);
  setcolor(WHITE);
  outtextxy(440,180,":SORaBh PANT";   }
     int g;  void range_graphics();
     void select1()
     {   int   status=initmouse(); 
  int button,x,y;
   setfillstyle(1,LIGHTGRAY); setcolor(BLACK);
	char ch[][10]={"1","2","3","4","5","6","7"};
	int k=0;
	      l=1;
      for(int i=0;i<200;i+=30)
	     {
   bar(280,129+(i),340,129+(i)+24);
	   outtextxy(300,129+i,ch[k]);
       k++;    }
      delay(1000);
  if(status==0)
 printf("mouse not supported");
 else
 { showmouseptr();
      getmousepos(&button,&x,&y);
   while(!kbhit())
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {   if(y>=1)
   {      for(int i=0;i<200;i+=30,l++)
       {
   if(x>280&&y>129+(i)&&x<340&&y<129+(i)+24)
  {     range_graphics();
  break;       }}}
 else
continue;  }}}    }
void hello(int y)
     {y+=48;
      char ch[12];
      char p=char(y);
      ch[0]=p;
      ch[1]='\0';
     setcolor(WHITE);
      outtextxy(290,103,ch);
      }
      //int call;
      void range_graphics()
      {      closegraph();
      initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
	range();}
void dot(int h)
	{   if(h==1)
	    {	    setcolor(2);
circle(200,195,5);
     floodfill(200,195,2);
	setcolor(4);
circle(200,195,2);
 floodfill(200,195,2);
  }
  else if(h==2)
  {       setcolor(2);
circle(200,245,5);
 floodfill(200,245,2);
	setcolor(4);
	circle(200,245,2);
    floodfill(200,245,4);   }
   else if(h==3)
   {	  setcolor(2);
       circle(200,295,5);
floodfill(200,295,2);
   setcolor(4);
   circle(200,295,2);
   floodfill(200,295,4);   }
   else
   {  setcolor(2);
circle(200,195,5);
circle(200,245,5);
circle(200,295,5);  }}
void range()
{  setfillstyle(8,1);
 bar(10,20,650,600);
  setcolor(3);
rectangle(10,20,630,460);
setfillstyle(CLOSE_DOT_FILL,5);
floodfill( 0,0,3);
  always();
  pop();
  setfillstyle(1,12);  settextstyle(7,HORIZ_DIR,3);setcolor(BLACK);
  bar(430,350,530,380); outtextxy(435,350,"Proceed");
 setcolor(13);
 outtextxy(130,100,"TICKETS  : ");
  setfillstyle(1,2);
setcolor(2);   rectangle(280,105,340,129);
  setcolor(15);
  line(320,109,330,120);  line(330,120,340,109);
line(320,109,340,109);setcolor(WHITE);  outtextxy(230,180,"SILVER");     outtextxy(380,180,"Rs 815 ");
setcolor(14);   outtextxy(230,230,"GOLD");      outtextxy(380,230,"Rs 1100");
setcolor(DARKGRAY);   outtextxy(230,280,"PLATINUM"); outtextxy(380,280,"Rs 1500");
   setcolor(2);
circle(200,195,5);circle(200,245,5);circle(200,295,5);
hello(l);dot(u);
	int   status=initmouse();   int button,x,y;
   if(status==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
      getmousepos(&button,&x,&y);
  while(!kbhit())
   {   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {if(y>=1)
   {   if(x<340&&y>105&&y<=129&&x>280)
     { select1();
    break;   }
   else  if(x<=21&&y>=2&&y<=10&&x>=2)
  {   taskbar(6); break;}
     else if(x>30&&y>350&&x<530&&y<380)
     {  g=15;
     bill(call,l,u);
   break;
   }
   else if(x>200&&y>185&&y<220)
   {    u=1;
     range_graphics();
      break;
     } else if(x>200&&y>230&&y<265)
      {   u=2;
 range_graphics();
break;
    }  else if(x>200&&y>280&&y<315){  u=3;
  range_graphics();
   break;    }
     else    continue;	 }}}}   }
void events()
{
closegraph();
  initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
	      call=2;
rectangle(10,20,630,460);
setfillstyle(CLOSE_DOT_FILL,1);
floodfill( 0,0,3);
always();
setfillstyle(SOLID_FILL,4);

 bar(30,40,200,310);
 bar(230,40,400,310);
bar(420,40,590,310);
box1();box2();box3();
delay(1000);
pop();
int status=initmouse();   int button,x,y;
 if(status==0)
printf("mouse not supported");
 else
{
showmouseptr();
 getmousepos(&button,&x,&y);
  while(!kbhit())
  {   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {if(y>=1)
   { if(x<=21&&y>=2&&y<=10&&x>=2) {
     taskbar(5);   break;}
     else if(x>30&&x<200&&y>=40&&y<310)
     {     strcpy(ti,"6 : 30");
     strcpy(ddt," MARCH 7 ");
     strcpy(hisscreen,"VANI MAHAL");
       range_graphics();
       break;}
     else if(x>230&&x<400&&y>40&&y<310)
	      { strcpy(hisscreen,"MUSIC ACADEMY");
	       strcpy(ddt," FEB 27 ");
		 strcpy(ti,"6 : 45");
	range_graphics();
	break;
	}	else if(x>420&&x<590&&y>40&&y<310)
	{    strcpy(hisscreen,"MUSIC ACADEMY");
	 strcpy(ddt," FEB 14 ");
	strcpy(ti,"6 : 45");
	range_graphics();
	break;
	}
  else   continue; }}}}}
void always()
{setcolor(9);
setfillstyle(SOLID_FILL,9);
		  bar(0,0,800,20);
		   setcolor(BLACK);
		  for(int i=2;i<=20;i+=4)
		  line(5,i,21,i);  }
int a[8][8],b[8][8],c[8][8],d[3][13];
void slide(int x1,int y1,int x2,int y2,int x)
{setfillstyle(1,x);
 bar(x1,y1,x2,y2);}
void check(int x,int y)
 { int x01,x02,y01,y02;
	 int k=0;
 int  x1=20+30,x2=35+30,y1=40+40,y2=55+40;
 for(int j=0;j<8;j++)
   { for(int i1=0;i1<8;i1++)
     { x01=x1+(i1*20);
       y01=y1+(j*20);
       x02=x2+(i1*20);
       y02=y2+(j*20);
     if(x>x01 && x<x02 && y>y01 && y<y02)
       { hidemouseptr();
 if(a[j][i1]==0)
{break;}  else if(a[j][i1]==1)
	  {  if(var123==l)
	     break;
	  k=1; a[j][i1]=2; var123++;}
	  else if(a[j][i1]==2)
	  {	  k=2; a[j][i1]=1;  var123--;    }
	  slide(x01,y01,x02,y02,k);
	  return;}}}
  x1=190+30;x2=205+30;y1=40+40;y2=55+40;
   for(j=0;j<8;j++)
    {for(int i1=0;i1<8;i1++){
       x01=x1+(i1*20);
       y01=y1+(j*20);
       x02=x2+(i1*20);
       y02=y2+(j*20);
      if(x>x01 && x<x02 && y>y01 && y<y02)
       {	 hidemouseptr();
  if(b[j][i1]==0)
  break;
  else if(b[j][i1]==1)
  {  if(var123==l)
	 break;
	 k=1;b[j][i1]=2; var123++;}
	  else if(b[j][i1]==2)
	  {  k=2; b[j][i1]=1;   var123--;  }
  slide(x01,y01,x02,y02,k);
  return;	  }}}
  x1=360+30;x2=375+30;y1=40+40;y2=55+40;
 for(j=0;j<8;j++)
   {for(int i1=0;i1<8;i1++)
     { x01=x1+(i1*20);
       y01=y1+(j*20);
       x02=x2+(i1*20);
       y02=y2+(j*20);
      if(x>x01 && x<x02 && y>y01 && y<y02)
  { hidemouseptr();
 if(c[j][i1]==0 )
 {  break; }
 else if(c[j][i1]==1)
  {if(var123==l)
	break;
	k=1; c[j][i1]=2; var123++; }
	  else if(c[j][i1]==2)
	  {	  k=2; c[j][i1]=1;  var123--;  }
	  slide(x01,y01,x02,y02,k);
	  return;	  }}}
  x1=130+30;x2=145+30;y1=210+40;y2=225+40;
   for(j=0;j<3;j++)
    {     for(int i1=0;i1<13;i1++){
       x01=x1+(i1*20);
       y01=y1+(j*20);
       x02=x2+(i1*20);
       y02=y2+(j*20);
       if(x>x01 && x<x02 && y>y01 && y<y02)       {	 hidemouseptr();
  if(d[j][i1]==0 )
  {  break;}
	 else if(d[j][i1]==1)
	  {  if(var123==l)
	  break;
	  k=1;d[j][i1]=2;  var123++;}
	  else if(d[j][i1]==2 )
	  { k=2; d[j][i1]=1; var123--;}
  slide(x01,y01,x02,y02,k);
  return;	  } }}}
void disp();
void dummy()
{int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\BGI");
 disp();
int st=initmouse(),button,x,y;
if(st==0)
 printf("mouse not supported");
 else
 { //  getmousepos(&button,&x,&y);      //enabling mouse
  while(!kbhit()) 
   {  showmouseptr();
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {   if(x>530&&y>430&&x<590&&y<450)
    bill(1,l,u);
   check(x,y);
     delay(300);}}}}
getch();
}
void disp()
  {
 setfillstyle(10,15);
  bar(100,440,getmaxx()-150,460);
  setcolor(15);
  settextstyle(2,0,6);
  outtextxy(190,440,"S   C   R   E   E   N");
  outtextxy(191,440,"S   C   R   E   E   N");
  setcolor(15); settextstyle(2,0,5);
  char ch[2],ch1[2];
  ch1[0]='A';
  ch1[1]='\0';
  ch[0]='1';
  ch[1]='\0';
  setfillstyle(1,WHITE);
  bar(530,430,590,450);
   setcolor(RED); line(530,430,590,450);
setcolor(3);
rectangle(10,20,630,460);
setfillstyle(CLOSE_DOT_FILL,5);
floodfill( 0,0,3);    always();
int x1=20+30,x2=35+30,y1=40+40,y2=55+40;
  int col=2;
for(int j=0;j<8;j++)
{for(int i=0;i<8;i++)
{   if(j==0)   {
	setcolor(14);
	outtextxy(x1+(i*20)+5,y1-20,ch1);
	ch1[0]++;}
setcolor(col); a[j][i]=1;
	 if(j==1||j==0) {	 col=4;
	  a[j][i]=0;}
	  else
	  col=2;
setfillstyle(SOLID_FILL,col);
bar(x1+(i*20),y1+(j*20),x2+(i*20),y2+(j*20));
}     col=2 ;
    setcolor(15);
   outtextxy(x1-20,y1+(j*20),ch);
   ch[0]++;}
x1=190+30;x2=205+30;y1=40+40;y2=55+40;
for(j=0;j<8;j++)
{for(int i=0;i<8;i++)
{ if(j==0)
  {	setcolor(14);
	outtextxy(x1+(i*20)+5,y1-20,ch1);
	ch1[0]++;
    }setcolor(2);
setfillstyle(SOLID_FILL,2);
bar(x1+(i*20),y1+(j*20),x2+(i*20),y2+(j*20));
b[j][i]=1;}}
x1=360+30;x2=375+30;y1=40+40;y2=55+40;
  col=2;
for(j=0;j<8;j++)
{for(int i=0;i<8;i++)
{  if(j==0)
   {setcolor(14);
	outtextxy(x1+(i*20)+5,y1-20,ch1);
	ch1[0]++;}
setcolor(col); c[j][i]=1;
 if(j==0 && i%2==0 || i<5&&j==5)
	 { col=4;
	  c[j][i]=0;}
	  else
	  col=2;
setfillstyle(SOLID_FILL,col);
bar(x1+(i*20),y1+(j*20),x2+(i*20),y2+(j*20));
}     col=2 ;
}setcolor(7);
  setfillstyle(CLOSE_DOT_FILL,7);
bar(50,250,150,380);
  //BIG RECTANGLE
x1=130+30;x2=145+30;y1=210+40;y2=225+40;
for(j=0;j<3;j++)
{for(int i=0;i<13;i++)
{setcolor(col); d[j][i]=1;
 if(j==1 && i<10 || j==2 && i<5)
	 {	 col=4;
	  d[j][i]=0;}
	  else col=2;
setfillstyle(SOLID_FILL,col);
bar(x1+(i*20),y1+(j*20),x2+(i*20),y2+(j*20));
}     col=2 ;}
 setcolor(WHITE);
  setfillstyle(CLOSE_DOT_FILL,7);
bar(435,250,545,380);    outtextxy(450,500,"NEXT");
setfillstyle(5,4);
  bar(530,430,590,450);
  setcolor(10);
  settextstyle(2,0,7);
  outtextxy(537,427,"next");
  outtextxy(538,427,"next");}
 void screen(int);
 void screen_mouse();
char st[50],venue[50],descrip1[50],descrip2[50],rating[50];
  int k,cx,vx,dt;
void fullscreen()
{  struct date d;
struct time t;
getdate(&d);
gettime(&t);
 setfillstyle(10,4);
 bar(15,15,625,465);
 setcolor(10);
 rectangle(15,15,625,465);
 setcolor(7);
 circle(320,36,20);
 setfillstyle(11,7);
 floodfill(320,36,7);
 setcolor(10);
 line(320,46,310,31);
 line(320,46,330,31);
 line(310,31,330,31);
 setfillstyle(1,10);
 floodfill(320,32,10);
  setcolor(10);
  setfillstyle(1,10);
  bar(450,400,510,430);
  setcolor(0);
  settextstyle(1,0,1);
  outtextxy(460,400,"NEXT");
  setcolor(10);
  settextstyle(1,0,2);
  outtextxy(250+vx,100,st);
  setcolor(9);
  settextstyle(2,0,6);
 outtextxy(70,170,"DATE :");
  outtextxy(430,170,"TIME :");
   outtextxy(150,235,"VENUE        :");
   outtextxy(150,265,"RATING       :");
   outtextxy(150,298,"DESCRIPTION  :");
	 setcolor(15);
     settextstyle(2,0,6);
    outtextxy(295,235,venue);
     outtextxy(295,265,rating);
     outtextxy(295,298,descrip1);
     outtextxy(295,315,descrip2);
     gotoxy(18,12);
printf("%d/%d/%d",d.da_day+dt,d.da_mon,d.da_year);
  gotoxy(62,12);
     printf("%2d:%02d",t.ti_hour, t.ti_min);
int status=initmouse();   int button,x,y;
 if(status==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
   getmousepos(&button,&x,&y);
   while(!kbhit())
   {  showmouseptr();
   delay(100);
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {
     hidemouseptr();
   if(x>=300&&y>=16&&x<=340&&y<=56)//1
    {
   screen(0);
       break;
    }
    else if(x>450&&y>400&&x<510&&y<430)
 {  range_graphics();
       break;
  }   }}}}
void halfscreen()
{setfillstyle(10,4);
 bar(15,300,625,465);
 setcolor(10);
 rectangle(15,300,625,465);
setcolor(7);
 circle(320,300,20);
 setfillstyle(11,7);
 floodfill(320,300,7);
 setcolor(10);
 line(320,290,310,305);
 line(320,290,330,305);
 line(310,305,330,305);
 setfillstyle(1,10);
 floodfill(320,302,10);
 setcolor(10);
 settextstyle(1,0,2);
 outtextxy(220+cx,350,st);
int status=initmouse();   int button,x,y;
if(status==0)
 printf("mouse not supported");
 else
 { showmouseptr();
     getmousepos(&button,&x,&y);
  while(!kbhit())
   {  showmouseptr();
   delay(100);
   getmousepos(&button,&x,&y);

   if((button&1)==1)
   {      hidemouseptr();
   if(x>=300&&y>=280&&x<=340&&y<=320)//1
    {  fullscreen();
       break;}
   else if(x>=45&&y>=95&&x<=75&&y<=145)//1
    {   strcpy(st,"ROMEO JULIET");
	strcpy(rating,"* * * *");
	strcpy(venue,"01,Sattanan St,Mylapore,ch-112");
	strcpy(descrip1,"Romeo, a trader, fell in love with");
	strcpy(descrip2,"Juliet, daughter of business man.");
	    cx=30;    vx=0;  dt=5;
       halfscreen();
       k=1;      break;
    }
  else if(x>=485&&y>=80&&x<=515&&y<=130)//1
    {   strcpy(st,"KATTABOMMAN");
    strcpy(rating,"* * * * *");   dt=3;
       strcpy(venue,"14,Perumal St,Avadi,ch-86");
       strcpy(descrip1,"Kattabomman clashing British turns");
       strcpy(descrip2,"out to one of great freedom fight."); cx=30;vx=0;
       halfscreen();
       k=1;  break;
    }
  else if(x>=115&&y>=215&&x<=145&&y<=265)//1
    {   strcpy(st,"HEIDER");
    strcpy(rating,"* * *");        dt=1;
	   strcpy(descrip1,"Bond gets into trouble when he");
    strcpy(descrip2,"took incharge of Raj murder case.");
	   cx=70;vx=30;
       strcpy(venue,"12,Irwin road,Kellys,ch-45");
       halfscreen();
      k=1;  break;    }
   else if(x>=385&&y>=205&&x<=415&&y<=255)//1
    {   strcpy(st,"MERCHANT OF VENICE"); dt=2;     cx=0;  vx=-50;
    strcpy(rating,"* * * *");
     strcpy(venue,"9,Ryder St,Teynampet,ch-17");
       strcpy(descrip1,"Antonio gets into trouble when he");
       strcpy(descrip2,"borrows money for his friend.");
    halfscreen();
	k=1;    break;    }
 else if(x>=405&&y>=335&&x<=435&&y<=385)//1
    { if(k!=1)
    { strcpy(st,"JULIUS CEASER");
       strcpy(rating,"* * ");     dt=4;      cx=30;  vx=0;
      strcpy(venue,"42,Gandhi St,Thiruvallur,ch-92");
 strcpy(descrip1,"The war between Julius and Ceaser")       strcpy(descrip2,"cause great loss for Portia.");
       halfscreen();  break;}}
    else if(x>=15&&y>=15&&x<=625&&y<=280)
     { k=0;
     screen(1);       break;}   }}}}
void screen(int n)
{setcolor(1);
rectangle(15,15,625,465);
setfillstyle(8,1);
floodfill(2,2,1);
setfillstyle(1,14);
bar(15,15,625,465);
setfillstyle(1,7);setcolor(7);
bar(15,60,150,75);      //1
bar(140,15,155,150);    //2
bar(150,40,350,55);     //3
bar(250,70,350,85);     //4
bar(350,40,360,85);     //5
bar(350,50,625,70);     //6
bar(250,80,265,155);    //7
bar(260,140,300,155);   //8
bar(300,100,315,155);    //9
line(310,100,390,140);
line(310,120,390,160);
line(390,140,390,160);
setfillstyle(1,7);
floodfill(316,120,7);  //10
//bar(390,110,405,280);  //11
bar(390,140,625,175);  //12
bar(460,175,475,210);
line(460,210,490,250);
line(475,210,505,250);
line(490,250,505,250);
floodfill(500,248,7);
bar(490,235,575,250);
bar(560,250,575,300);
line(370,305,310,230);
line(390,305,330,230);
line(370,305,390,305);
line(310,230,330,230);
floodfill(340,251,7);
line(140,130,280,190);
line(140,150,280,210);
line(280,190,280,210);
setfillstyle(1,7);
floodfill(160,150,7); //13
line(140,140,15,200);
line(150,155,15,220);
line(15,220,15,200);
floodfill(16,202,7); //14
line(400,150,280,250);
line(405,165,280,270);
line(280,250,280,270);
floodfill(385,165,7); //15
line(280,250,180,210);
line(280,270,180,230);
line(180,210,180,230);
floodfill(182,212,7); //16
line(180,210,235,175);
line(180,230,240,190);
floodfill(200,215,7); //17
//bar(405,205,625,220);
//bar(550,125,565,220);
bar(35,200,50,260);
bar(35,260,80,275);
bar(65,275,80,340);
bar(65,340,170,355);
bar(170,355,185,300);
bar(90,355,105,390);
bar(15,390,105,405);
bar(130,355,145,465);
bar(140,420,625,435);
bar(300,420,315,370);
line(301,369,475,225);
line(301,390,490,235);
line(475,225,490,235);
floodfill(350,340,7);
line(450,420,560,310);
line(475,420,585,310);
line(560,310,585,310);
floodfill(535,345,7);
bar(180,300,625,315);
setcolor(4);
circle(60,110,15);
circle(130,230,15);
circle(500,95,15);
circle(400,220,15);
circle(420,350,15);
setfillstyle(1,4);
floodfill(60,110,4);
floodfill(130,230,4);
floodfill(500,95,4);
floodfill(400,220,4);
floodfill(420,350,4);
setcolor(1);
line(60,126,50,140);
line(60,126,70,140);
line(50,140,70,140);
line(130,246,120,260);
line(130,246,140,260);
line(120,260,140,260);
line(500,111,490,125);
line(500,111,510,125);
line(490,125,510,125);
line(400,236,390,250);
line(400,236,410,250);
line(410,250,390,250);
line(420,366,410,380);
line(420,366,430,380);
line(410,380,430,380);
setfillstyle(1,1);
floodfill(60,139,1);
floodfill(130,259,1);
floodfill(500,124,1);
floodfill(400,249,1);
floodfill(420,379,1);
setcolor(10);
settextstyle(2,0,3);
outtextxy(50,105,"shows");
outtextxy(120,225,"shows");
outtextxy(490,90,"shows");
outtextxy(390,215,"shows");
outtextxy(410,345,"shows");
setcolor(12);
settextstyle(3,0,1);
outtextxy(30,140,"Mylapore");
outtextxy(410,90,"Avadi");
outtextxy(500,205,"Teynampet");
outtextxy(200,350,"Ambattur");
outtextxy(170,250,"Kellys");
outtextxy(170,100,"Paris");
outtextxy(350,380,"Thiruvallur");
setcolor(1);
settextstyle(4,0,1);
rectangle(540,20,600,45);
outtextxy(547,20,"MAP");
if(n==1)
screen_mouse();
if(n==0)
halfscreen();}
void screen_mouse()
{int status=initmouse();   int button,x,y;
  if(status==0)
 printf("mouse not supported");
 else{ showmouseptr();
      getmousepos(&button,&x,&y);
   while(!kbhit())
   {  showmouseptr();
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {   hidemouseptr();
   if(x>=45&&y>=95&&x<=75&&y<=145)//1
    {   strcpy(st,"ROMEO JULIET"); k=1;    dt=5;
	strcpy(rating,"* * * *");  vx=0;  cx=30;
	strcpy(venue,"56,Sattanan St,Mylapore,ch-112");
 strcpy(descrip1,"Romeo, a trader, fell in love with");
strcpy(descrip2,"Juliet, daughter of a business man.");
  halfscreen();
break;}
  else if(x>=485&&y>=80&&x<=515&&y<=130)//1
    {   strcpy(st,"KATTABOMMAN");k=1;
	strcpy(rating,"* * * * *");    dt=3;
	  strcpy(venue,"14,Perumal St,Avadi,ch-86");
	 strcpy(descrip1,"Kattabomman clashing British turns");
       strcpy(descrip2,"out to one of great freedom fight.");
	cx=30; vx=0;
       halfscreen();
	 break;
    }
  else if(x>=115&&y>=215&&x<=145&&y<=265)//1
    { k=1;
    strcpy(st,"HEIDER");
    cx=70; vx=30;  dt=1;
    strcpy(rating,"* * *");
	strcpy(venue,"12,Irwin road,kellys,ch-45");
       strcpy(descrip1,"Bond gets into trouble when he");
    strcpy(descrip2,"took incharge of Raj murder case.");  halfscreen();
	    break;
    }    else if(x>=385&&y>=205&&x<=415&&y<=255)//1
    { k=1;
    strcpy(st,"MERCHANT OF VENICE");  dt=2;   cx=0;vx=-50;
    strcpy(rating,"* * * *");
       strcpy(venue,"9,Ryder St,Teynampet,ch-17");
       strcpy(descrip1,"Antonio gets into trouble when");
       strcpy(descrip2,"he borrows money for his friend.");
halfscreen();
	break;    }
  else if(x>=405&&y>=335&&x<=435&&y<=385)//1
  {   k=1; strcpy(st,"JULIUS CEASER");    dt=4;       cx=30;   vx=0;    strcpy(rating,"* * ");
	strcpy(venue,"42,Gandhi St,Thiruvallur,ch-92");
	strcpy(descrip1,"The war between Julius and Ceaser");
     strcpy(descrip2,"cause great loss for Portia.");
   halfscreen();break; }  }}}}
void map(){
   closegraph();
     initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
	call=4;
	screen(1);
getch();}
 void home()
 { loading1();
 closegraph();
  initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
setcolor(9);
 setfillstyle(10,9);
rectangle(22,20,getmaxx()-20,getmaxy()-20);
floodfill(1,1,9);
setfillstyle(CLOSE_DOT_FILL,1);
bar(22,20,getmaxx()-20,getmaxy()-20);
setcolor(9);
//rectangle(22,20,getmaxx()-20,getmaxy()-20);
always();
setfillstyle(SOLID_FILL,6);
 settextstyle(3,HORIZ_DIR,4);
 bar(30,50,160,85);
 setcolor(7);
 outtextxy(45,45,"movies");
bar(180,50,310,85); outtextxy(200,45,"events");
bar(330,50,460,85);  outtextxy(350,45,"sports");
bar(480,50,610,85);  outtextxy(500,45,"drama");
setfillstyle(SOLID_FILL,LIGHTGRAY);
 bar(160,200,440,235);
  setfillstyle(SOLID_FILL,9);setcolor(9);
 circle(180,213,6); floodfill(180,213,9);
 line(180,213,170,225);   line(180,213,170,225);
  settextstyle(6,HORIZ_DIR,2);
  setcolor(WHITE);
outtextxy(260,199,"SEARCH");
 setfillstyle(4,10);
bar(50,350,90,390);
 settextstyle(5,HORIZ_DIR,4);
 outtextxy(60,345,"H");
setfillstyle(5,1);
bar(50,400,90,440);
settextstyle(5,HORIZ_DIR,4);
 outtextxy(60,390,"P");
settextstyle(5,HORIZ_DIR,2);setcolor(5);
outtextxy(50,310,"try our");
settextstyle(5,HORIZ_DIR,2);setcolor(5);
outtextxy(450,310,"coming soon ");
   setcolor(WHITE);		 setfillstyle(5,4);
bar(460,350,500,390);
 settextstyle(5,HORIZ_DIR,4);
 outtextxy(465,345,"D");
 setcolor(WHITE);		 setfillstyle(4,3);
bar(460,400,500,440);
  settextstyle(5,HORIZ_DIR,4);
outtextxy(465,390,"S");
int status=initmouse();   int button,x,y;
 if(status==0)
printf("mouse not supported");
 else{
 showmouseptr();
      getmousepos(&button,&x,&y);
   while(!kbhit())
  {   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {if(y>=1)
   {
     if(x<=21&&y>=2&&y<=10&&x>=2)
     {
     taskbar(4);
     break;  }
     else if(x>35&&x<=160&&y>=50&&y<80)
     {    add1();
       movie_list1();
       break;
       }
     else if(x>180&&x<310&&y>50&&y<85)
     {
     add1();
     events();
     break;
     }
     else if(x>160&&y>200&&x<440&&y<235)
     {
	  search_city1412();
	  break;
     }
    else if (x>480&&y>50&&x<610&&y<85)
    {
    add1();
    map();
    break;
    }
    else if(x>50&&y>350&&x<90&&y<390)
    {
    add1();
    hangman1();
    break;
    }
    else if(x>50&&y>400&&x<90&&y<440)
    {
    add1();
    cleardevice();
   loading();
   closegraph();
    pb();
    break;
    }
   else if(x>330&&y>50&&x<460&&y<85)  {
     add1();
     sports25();
     break;
    }
     else continue; }}}}}
char 
id[][50]={"1412P%0109V","1234L%4353K","3534D%3452J","9764X%6739H"};
	      int bdfg,cost15,jk15;
void bill(int h,int d,int m)
{
closegraph();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\BGI");



  struct date cvb;
struct time t;

getdate(&cvb);
gettime(&t);
char scr[][10]={"SILVER","GOLD","PLATINUM"};
setcolor(1);
rectangle(20,30,625,450);
setfillstyle(8,1);
floodfill(2,2,1);
int p;
randomize();
p=random(4);
bdfg=p;
   float cost;
if(m==1&&h==1)
   cost=100;
    else if(m==1&&h==2)
 cost=815;
 else if(m==2&&h==1)
  cost=120;
  else if(m==2&&h==2)
  cost=1100;
  else if(m==3&&h==1)
  cost=150;
else if(m==3&&h==2)
  cost=1500;
  else if(m==1&&h==4)
  cost=815;
 else if(m==2&&h==4)
 cost=1100;
 else if(m==3&&h==4)
  cost=1500;
    else if(m==1&&h==3)
	    cost=815;
	    else if(m==2&&h==3)
	    cost=1100;
	    else if(m==3&&h==3)
	    cost=1500;
   float jk,nm;
   jk=cost;
 nm =jk*18;
 nm/=100;
 cost+=nm;
    jk*=d;
   cost*=d;
gotoxy(37,18);cout<<jk;
 gotoxy(37,22);cout<<cost;
 cost15=cost;
 jk15=jk;
 setfillstyle(1,WHITE);
bar(500,50,600,100);
   setfillstyle(1,BLACK);
 bar(520,50,525,100);bar(510,50,512,100);
   setcolor(BLACK);
 for(int z=0;z<400;z+=7)
  bar(527+z,50,527+z,100);
for(z=3;z<600;z+=6)
  { setcolor(BLACK);
  bar(527+z,50,527+z,100)		    }
setcolor(4);
settextstyle(3,0,3);
outtextxy(180,42,"BOOKING SUMMARY");
outtextxy(181,42,"BOOKING SUMMARY");
setcolor(4);
line(175,75,400,75);
setcolor(14);
line(175,76,400,76);
setcolor(15);
settextstyle(2,0,6);
d+=48;  char ch[3];      char a=char(d);
  ch[0]=a;   ch[1]='\0';
outtextxy(50,108,"BOOKING ID :");      outtextxy(290,108,id[p]);
outtextxy(150,170,"SEATS      :");  outtextxy(290,170,ch);
outtextxy(150,202,"TIME       :");   outtextxy(290,202,ti);
outtextxy(150,235,"DAY/DATE   :");   outtextxy(290,235,ddt);
outtextxy(150,265,"COST       :");
outtextxy(150,332,"TOTAL COST :");
outtextxy(150,298,"GST        :");     outtextxy(290,298,"18%");
setcolor(4);
rectangle(95,378,195,408);
setfillstyle(1,4);
floodfill(100,380,4);
setcolor(15);
settextstyle(2,0,7);
outtextxy(112,380,"CANCEL");
outtextxy(113,380,"CANCEL");
setcolor(2);
rectangle(370,378,470,408);
setfillstyle(1,2);
floodfill(372,380,2);
setcolor(15);
settextstyle(2,0,7);
outtextxy(380,380,"CONFIRM");
outtextxy(381,380,"CONFIRM");
 settextstyle(2,0,6);
if(h==1)
{outtextxy(50,138,"THEATRE    :");
outtextxy(290,138,hisscreen);
outtextxy(400,138,"SCREEN    :");
outtextxy(500,138,scr[m-1]);
}
else if(h==2)
{
outtextxy(50,138,"VENUE    :");  outtextxy(290,138,hisscreen);
}
else if(h==3)
{
outtextxy(50,138,"VENUE    :");outtextxy(290,138,"JAWARLAL NEHRU STADIUM");
  outtextxy(290,202,"6 : 30 PM");
  outtextxy(290,235,ddt);}
else if(h==4)
{
outtextxy(50,138,"LOCATION    :");
   outtextxy(200,138,venue);
     gotoxy(37,16);
printf("%d/%d/%d",cvb.da_day+dt,cvb.da_mon,cvb.da_year);     gotoxy(37,14);
     printf("%2d:%02d",t.ti_hour, t.ti_min);
}	int   status=initmouse();   int button,x,y;
   if(status==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
      getmousepos(&button,&x,&y);
 while(!kbhit())
 { getmousepos(&button,&x,&y);
   if((button&1)==1)
   { if(y>=1)
   {  if(x>370&&y>378&&x<470&&y<408)
     {  mop();
     break;}
      else if(x>95&&y>378&&x<195&&y<408)
      {  if(h==1)
      range1_graphics();
      else
      range_graphics();
      break;
     }
   else continue;}}}}}
  void redirect(char x){
setcolor(6);
settextstyle(10,0,1);
char str[20];
strcpy(str,"REDIRECTING IN   ");
  str[15]=x;           setbkcolor(WHITE);
  outtextxy(100,100,str); }

  void dumb()
{clrscr();gotoxy(15,15);cout<<"cummy";  }
void bsuccess(){
cleardevice();setbkcolor(15);
setcolor(6);
settextstyle(10,0,1);
outtextxy(getmaxx()/2-100,getmaxy()/2-200,"BOOKING ");
delay(500);
outtextxy(getmaxx()/2-100,getmaxy()/2+45-200,"SUCCESSFULL");delay(1000);
cleardevice();setbkcolor(BLACK);
redirect('8');delay(500);cleardevice();
redirect('7');delay(500);cleardevice();
redirect('6');delay(500);cleardevice();
redirect('5');delay(500);cleardevice();
redirect('4');delay(500);cleardevice();
redirect('3');delay(500);cleardevice();
redirect('2');delay(500);cleardevice();
redirect('1');delay(500);cleardevice();
redirect('0');delay(500);cleardevice();
// dumb();
//getch();
}
void end()
{ initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
bsuccess();
 home();
}
//void creditcard();
//void debitcard();
//void cod();
void loadings()
{ closegraph();
 cheki15();
 initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
for(int i=1;i<=10;i++)
{setcolor(i);
circle(250,200,80);
circle(250,200,50);
line(250,150,250,120);
line(250,250,250,280);
line(300,200,330,200);
line(200,200,170,200);
setcolor(i);
delay(100);
setfillstyle(1,i);
floodfill(252,148,i);
delay(100);
floodfill(302,202,i);
delay(100);
floodfill(248,252,i);
delay(100);
floodfill(198,198,i);
}cheki15();
end();}
void screen()
{setcolor(1);
rectangle(10,10,630,470);
setfillstyle(8,1);
floodfill(2,2,1);
setcolor(15);
rectangle(10,10,630,470);
setfillstyle(1,15);
floodfill(50,50,15);
int mx,bx;mx=45;bx=250;
bar(10,10,400,470);
setcolor(0);
settextstyle(1,0,2);
outtextxy(mx,55,"MODE OF PAYMENT  ");
line(mx-5,90,mx+200,90);
outtextxy(55,125,"CREDIT CARD");
outtextxy(55,175,"DEBIT CARD");
outtextxy(55,225,"CASH ON DELIVERY");
setfillstyle(1,14);
 bar(30,130,45,145);
  bar(30,180,45,195);
  bar(30,230,45,245);
setfillstyle(1,0);
 bar(bx,10,630,470);
  setcolor(10);
rectangle(bx,10,630,470);}
void cash()
{char ch[50];
gotoxy(57,7);
 cout<<"_";
 gotoxy(57,7);
 gets(ch);
 gotoxy(57,10);
 cout<<"_";
 gotoxy(57,10);
 gets(ch);
 gotoxy(57,13);
 cout<<"_";
 gotoxy(57,13);
 gets(ch);
 gotoxy(57,16);
 cout<<"_";
 gotoxy(57,16);
 gets(ch);
 gotoxy(57,19);
 cout<<"_";
 gotoxy(57,19);
 gets(ch);}
void cod()
{        closegraph();
 initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
	screen();
	setcolor(4);
circle(38,238,4);
setfillstyle(1,4);
floodfill(38,238,4);
 setcolor(0);
    rectangle(250,10,630,470);
	setcolor(10);
	settextstyle(1,0,3);
	outtextxy(340,30,"CASH ON DELIVERY");
	line(330,62,565,62);
	setcolor(14);
	settextstyle(1,0,1);
	outtextxy(300,90, "FULL NAME  :");
	outtextxy(300,140,"STREET NAME:");
	outtextxy(300,185,"FLAT NO    :");
	outtextxy(300,233,"LANDMARK   :");
	outtextxy(300,280,"PIN CODE   :");
	outtextxy(300,330,"standard delivery:");
	outtextxy(300,350,"(usually 5-6 days)");
	outtextxy(300,375,"express delivery:") ;
	outtextxy(300,395,"(1-2 working days)");
	setcolor(15);
	rectangle(440,90,595,115);
	rectangle(440,140,595,165);
	rectangle(440,185,595,210);
	rectangle(440,233,595,258);
	rectangle(440,280,595,305);
	setfillstyle(6,10);
	 bar(500,340,520,360);
	 bar(500,385,520,405);
	setcolor(8);
	rectangle(510,420,600,455);
     setfillstyle(1,8);
     floodfill(512,422,8);
     setcolor(15);
settextstyle(1,0,1);
     outtextxy(517,424,"PROCEED");
  int status=initmouse();   int button,x,y;
 if(status==0)
 printf("mouse not supported");
 else
 { showmouseptr();
      getmousepos(&button,&x,&y);
   while(!kbhit())
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {
   if(x>=30&&y>=130&&y<=145&&x<=45)//1
    {
    creditcard();
    break;
    }
    else if(y<=195&&y>=180&&x>=30&&x<=45) //2
     {  debitcard();
     break;
     }
    else if(y<=245&&y>=230&&x>=30&&x<=45)
      { cod();
      break;}
      else if(x>=440&&y>=90&&x<=595&&y<=115)
      {
      cash();
      break;
     }  }}}
  if(status==0)
 printf("mouse not supported");
 else
{ showmouseptr();
      getmousepos(&button,&x,&y);
  while(!kbhit())
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {
  if(x>=30&&y>=130&&y<=145&&x<=45)//1
    {    creditcard();
  break;
    }
    else if(y<=195&&y>=180&&x>=30&&x<=45) //2
     {  debitcard();
     break;     }
    else if(y<=245&&y>=230&&x>=30&&x<=45)
      { cod();
      break;}
    else if(x>=500&&x<=520&&y>=340&&y<=360)
      {hidemouseptr();
      setfillstyle(7,5);
      bar(500,340,520,360);
      break;    }
       else if( x>=500&&x<=520&&y>=385&&y<=405)
       { hidemouseptr();
       setfillstyle(7,5);
       bar(500,385,520,405);
	  break;}}}}
     setcolor(2);
	rectangle(510,420,600,455);
     setfillstyle(1,2);
     floodfill(512,422,2);
     setcolor(15);
settextstyle(1,0,1);
     outtextxy(517,424,"PROCEED");
      //status=initmouse();
     if(status==0)
 printf("mouse not supported");
 else {showmouseptr();
      getmousepos(&button,&x,&y);
   while(!kbhit())
   {  getmousepos(&button,&x,&y);
   if((button&1)==1)
   {   if(x>=30&&y>=130&&y<=145&&x<=45)//1
    {   creditcard();
    break;
    }  else if(y<=195&&y>=180&&x>=30&&x<=45) //2
     {  debitcard();
    break;    }
    else if(y<=245&&y>=230&&x>=30&&x<=45)
      { cod();
     break;}
     else if(x>=510&&y>=420&x<=600&&y<=455)
      {loadings();
      break;      }}}} }

void credit()
{
char ch[50];
gotoxy(56,9);
cout<<"_";
gotoxy(56,9);
gets(ch);
gotoxy(56,12);
cout<<"_";
gotoxy(56,12);
gets(ch);
int status=1;
while(status!=0)
{  status=0;
gotoxy(42,16);
cout<<"    ";
gotoxy(42,16);
cout<<"_";
gotoxy(42,16);
int n;
cin>>n;
if(n>13 || n==0)
{ status=1;
  gotoxy(42,16);
  cout<<"    ";
  gotoxy(42,18);
cout<<"//invalid";}
else
{gotoxy(42,18);
cout<<"          ";}}
status=1;
while(status!=0)
{ status=0;
gotoxy(48,16);
cout<<"     ";
gotoxy(48,16);
cout<<"_";
gotoxy(48,16);
int n;
cin>>n;
if(n<2018)
{ status=1;
  gotoxy(48,16);
  cout<<"     ";
  gotoxy(48,18);
cout<<"//expired";}
else{
gotoxy(48,18);
cout<<"          ";}}
  char c;
gotoxy(68,16);
cout<<"_";
gotoxy(68,16);
for(int i=0;i<4;i++)
{ c=(char)getch();
if((int)c==8)
{gotoxy(68+i-1,16);
  cout<<" ";
  i-=2;
 gotoxy(68+i+1,16);
 if(i==-2)
 {i=-1;
 gotoxy(68,16);}}
else cout<<"*";}
setcolor(2);
 rectangle(500,350,600,380);     setfillstyle(1,2);
     floodfill(502,353,2);
     setcolor(15);
settextstyle(1,0,2);
     outtextxy(510,350,"PROCEED");
int sts=initmouse();   int button,x,y;
  if(sts==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
      getmousepos(&button,&x,&y);

   while(!kbhit())
   {   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {   if(x>=30&&y>=130&&y<=145&&x<=45)//1
    {
    creditcard();
    break;
    }
    else if(y<=195&&y>=180&&x>=30&&x<=45) //2
     {  debitcard();
     break;    }
    else if(y<=245&&y>=230&&x>=30&&x<=45)
      { cod();
      break;}      else if(x>=500&&y>=350&&x<=600&&y<=380)
      {      loadings();
      //end();
     // home();
      break;    }}}}}
void debitcard()
{        closegraph();
 initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
      screen();
setcolor(4);
circle(38,188,4);
setfillstyle(1,4);
floodfill(38,188,4);
setcolor(10);
settextstyle(1,0,2);
outtextxy(330,55,"DEBIT CARD DETAILS");
line(325,85,530,85);
setcolor(14);
outtextxy(300,120,"CARD NO   :");
outtextxy(300,170,"NAME      :");
outtextxy(260,235,"DOE :");
outtextxy(460,235,"CVV :");
setcolor(15);
rectangle(430,120,600,145);
rectangle(430,170,600,195);
rectangle(320,235,360,260);
rectangle(370,235,425,260);
rectangle(520,235,620,260);
     setcolor(8);
     rectangle(500,350,600,380);
     setfillstyle(1,8);
     floodfill(502,353,8);
     setcolor(15);
settextstyle(1,0,2);
     outtextxy(510,350,"PROCEED");
setcolor(7);
settextstyle(2,0,6);
outtextxy(328,237,"mm");
outtextxy(378,237,"yyyy");
int status=initmouse();   int button,x,y;
 if(status==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
      getmousepos(&button,&x,&y);
   while(!kbhit())   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {   if(x>=30&&y>=130&&y<=145&&x<=45)//1
    {   creditcard();
    break;}
    else if(y<=195&&y>=180&&x>=30&&x<=45) //2
     {  debitcard();
    break;     }
    else if(y<=245&&y>=230&&x>=30&&x<=45)
      { cod();
     break;}
      else if(x>=430&&y>=120&&x<=600&&y<=145)
     {credit();
      break;}     }}}}
void creditcard()
{        closegraph();
 initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
screen();
setcolor(4);
circle(38,138,4);
setfillstyle(1,4);
floodfill(38,138,4);
setcolor(10);
settextstyle(1,0,2);
outtextxy(330,55,"CREDIT CARD DETAILS");
line(325,85,540,85);
setcolor(14);
outtextxy(300,120,"CARD NO   :");
outtextxy(300,170,"NAME      :");
outtextxy(260,235,"DOE :");
outtextxy(460,235,"CVV :");
setcolor(15);
rectangle(430,120,600,145);
rectangle(430,170,600,195);
rectangle(320,235,360,260);
rectangle(370,235,425,260);
rectangle(520,235,620,260);
     setcolor(8);
     rectangle(500,350,600,380);
     setfillstyle(1,8);
     floodfill(502,353,8);
     setcolor(15);
settextstyle(1,0,2);
     outtextxy(510,350,"PROCEED");
setcolor(7);
settextstyle(2,0,6);
outtextxy(328,237,"mm");
outtextxy(378,237,"yyyy");
int status=initmouse();   int button,x,y;
 if(status==0)
 printf("mouse not supported");
 else
 { showmouseptr();
   getmousepos(&button,&x,&y);
   while(!kbhit())
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {

   if(x>=30&&y>=130&&y<=145&&x<=45)//1
    {
    creditcard();
    break;
    }
    else if(y<=195&&y>=180&&x>=30&&x<=45) //2
     {  debitcard();

     break;  }
    else if(y<=245&&y>=230&&x>=30&&x<=45)
      { cod();
      break;}
      else if(x>=430&&y>=120&&x<=600&&y<=145)
      {
      credit();
      break;
      }  }}}
   getch(); }
void mop()
 { closegraph();
 initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
if(p(skip,"no")==0)
{login_slide();}
setcolor(1);
rectangle(10,10,630,470);
setfillstyle(8,1);
floodfill(2,2,1);
setcolor(15);
rectangle(10,10,630,470);
setfillstyle(1,15);
floodfill(50,50,15);

  int mx,bx;mx=100;bx=400;
 setcolor(0);
settextstyle(1,0,2);
outtextxy(mx,55,"MODE OF PAYMENT  ");
outtextxy(55,125,"CREDIT CARD");
outtextxy(55,175,"DEBIT CARD");
outtextxy(55,225,"CASH ON DELIVERY");
line(mx-5,90,mx+200,90);
setfillstyle(1,14);
  bar(30,130,46,146);
  bar(30,180,46,196);
  bar(30,230,46,246);
 setcolor(0);
 setfillstyle(1,0);
 bar(bx,10,630,470);
 setcolor(10);
 rectangle(bx,10,630,470);
int status=initmouse();   int button,x,y;
  if(status==0)
 printf("mouse not supported");
 else {
 showmouseptr();
     getmousepos(&button,&x,&y);
 while(!kbhit())
   {   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {   if(x>=30&&y>=130&&y<=145&&x<=45)//1
    {   creditcard();
    break;}
    else if(y<=195&&y>=180&&x>=30&&x<=45) //2
     {  debitcard();break; }
    else if(y<=245&&y>=230&&x>=30&&x<=45)
      { cod();
     break;}
   else   continue;}}}
 getch();  }
void sport1();
void sport2();
class sport
{     public:
  char str[100];
  char heading[10];
}s[9];
void hjkk(){int x,y;
 x=getmaxx()/2;
 y=getmaxy()/2;
 setbkcolor(BLACK);
 setcolor(6);
  settextstyle(SMALL_FONT, HORIZ_DIR, 10);
  //settextjustify(x,y);
  outtextxy(x-70,y-60,"WELCOME");
  delay(150);
  outtextxy(x-70,y-20,"TO");
  delay(150);
  outtextxy(x-10,y-20,"CHOOSE");
  delay(150);
  outtextxy(x-70,y+15,"TICKETS");
  delay(700);
range_graphics();
}void sport2()
{//sidebar();
setcolor(10);
setfillstyle(1,4);
bar(605,40,630,365);
//slide 2 coordinates
setfillstyle(1,10);
bar(608,183,627,327);//slide 2
//arrow
setfillstyle(1,YELLOW);
bar(605,340,630,365);//downarrowbox
setcolor(BLACK);
line(617,343,617,360);//hor
line(607,350,617,360);//leftdiagnol
line(627,350,617,360);//rightdiag
//uparrow
setfillstyle(1,YELLOW);
bar(605,10,630,40);//uparrowbox
setcolor(BLACK);
line(617,15,617,35);//vertical
line(607,22,617,15);//leftdiagnol
line(627,22,617,15);//rightdiag
setbkcolor(BLUE);
setfillstyle(1,10);
bar(50,50,200,200);
bar(240,50,390,200);
bar(430,50,580,200);
 bar(50,250,200,400);
 bar(240,250,390,400);
 bar(430,250,580,400);
 setcolor(YELLOW);
 settextstyle(9,0,3);
 outtextxy(getmaxx()/2-70,0,"SPORTS");
int xs=60;
strcpy(s[0].str,"CHENNAI VS KOCHI");
strcpy(s[1].str,"CHENNAI VS DELHI");
strcpy(s[2].str,"CHENNAI VS MUMBAI");
strcpy(s[3].str,"CHENNAI VS PUNE ");
strcpy(s[4].str,"CHENNAI VS KERALA ");
strcpy(s[5].str,"CHENNAI VS AFC ");
for(int i=0;i<=1;i++);
	 setcolor(3);
	 settextstyle(11,0,1);
outtextxy(60,160,s[0].str);
xs+=190;
outtextxy(xs,160,s[1].str);
xs+=190;
outtextxy(xs,160,s[2].str);
xs=60;
outtextxy(xs,360,s[3].str) ;
xs+=190;
outtextxy(xs,360,s[4].str);
xs+=190;
outtextxy(xs,360,s[5].str)  ;
//================================================================
//heading.............
setcolor(BLUE);
strcpy(s[0].heading,"HISL");
strcpy(s[1].heading,"HISL");
strcpy(s[2].heading,"HISL");
strcpy(s[3].heading,"HISL ");
strcpy(s[4].heading,"HISL ");
strcpy(s[5].heading,"HISL ");
  xs=85;
   settextstyle(10,0,3);
outtextxy(xs,75,s[0].heading);
xs+=190;
outtextxy(xs,75,s[1].heading);
xs+=190;
outtextxy(xs,75,s[2].heading);
xs=85;
outtextxy(xs,275,s[3].heading) ;
xs+=190;
outtextxy(xs,275,s[4].heading);
xs+=190;
outtextxy(xs,275,s[5].heading)  ;

//==============================================
//book now
char *bkn="BOOK NOW";
setfillstyle(1,BLUE);
bar(60,170,195,195);
bar(60+190,170,385,195);
bar(60+190+190,170,575,195);
bar(60,370,195,395);
bar(60+190,370,385,395);
bar(60+190+190,370,575,395);
setcolor(10);
settextstyle(8,0,1);
outtextxy(75,165,bkn);
outtextxy(75+190,165,bkn);
outtextxy(75+190+190,165,bkn);
outtextxy(75,365,bkn);
outtextxy(75+190,365,bkn);
outtextxy(75+190+190,365,bkn);
int st=initmouse();   int tempx,tempy,button,x,y;
if(st==0)
 printf("mouse not supported");
 else
 { showmouseptr();
  getmousepos(&button,&x,&y);
// tempx=x;
// tempy=y;
   while(!kbhit())   
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {
   if(x>=605 && x<=630 && y>=340 && y<=365)
   {  cleardevice(); sport2();
    break;    }
    else if(x>=605 && x<=630 && y>=10 && y<=40)
    {           cleardevice();
    sport1();
    break;}
      else if(x>=60 && x<=195 && y>=170 && y<=195)
    {        cleardevice();
    hjkk();
    break;
    }
	  else if(x>=60+190 && x<=385 && y>=170 && y<=195)
    {           cleardevice();
    hjkk();
    break;
    }
       else if(x>=60+190+190 && x<=575 && y>=170 && y<=195)
    {           cleardevice();
    hjkk();
    break;
    }  else if(x>=60 && x<=195 && y>=370 && y<=395)
    {           cleardevice();
    hjkk();
    break;
    }
     else if(x>=60+190 && x<=385 && y>=370 && y<=395)
    {           cleardevice();
    hjkk();
    break;
    }
     else if(x>=60+190+190 && x<=575 && y>=370 && y<=395)
    {           cleardevice();
    hjkk();
    break;
    } }}}
getch();}
void sport1()
{ setcolor(YELLOW);
 settextstyle(9,0,3);
 outtextxy(getmaxx()/2-70,0,"SPORTS");
setcolor(10);
setfillstyle(1,4);
bar(605,40,630,365);
setfillstyle(1,10);
bar(608,45,627,175);//inside bar at top position//slide1
//slide 2 coordinates
//setfillstyle(1,10);
//bar(608,183,627,327);//slide 2
//arrow
setfillstyle(1,YELLOW);
bar(605,340,630,365);//downarrowbox
setcolor(BLACK);
line(617,343,617,360);//hor
line(607,350,617,360);//leftdiagnol
line(627,350,617,360);//rightdiag
//uparrow
setfillstyle(1,YELLOW);
bar(605,10,630,40);//uparrowbox
setcolor(BLACK);
line(617,15,617,35);//vertical
line(607,22,617,15);//leftdiagnol
line(627,22,617,15);//rightdiag

setbkcolor(BLUE);
setfillstyle(1,10);
bar(50,50,200,200);
bar(240,50,390,200);
bar(430,50,580,200);
 bar(50,250,200,400);
 bar(240,250,390,400);
 bar(430,250,580,400);
setcolor(7);
//settextstyle(1,0,1);
 int xs=60;
strcpy(s[3].str,"CHENNAI VS KOCHI");
strcpy(s[4].str,"CHENNAI VS DELHI");
strcpy(s[5].str,"CHENNAI VS MUMBAI");
strcpy(s[0].str,"27 JANUARY 2018 ");
strcpy(s[1].str,"30 DECEMBER 2017 ");
strcpy(s[2].str,"2 FEBRUARY 2018");
for(int i=0;i<=1;i++);
	 setcolor(3);
	 settextstyle(11,0,1);
outtextxy(60,160,s[0].str);
xs+=190;
outtextxy(xs,160,s[1].str);
xs+=190;
outtextxy(xs,160,s[2].str);
xs=60;
outtextxy(xs,360,s[3].str) ;
xs+=190;
outtextxy(xs,360,s[4].str);
xs+=190;
outtextxy(xs,360,s[5].str)  ;
//====================================
//book now
char *bkn="BOOK NOW";
setfillstyle(1,BLUE);
bar(60,170,195,195);
bar(60+190,170,385,195);
bar(60+190+190,170,575,195);
bar(60,370,195,395);
bar(60+190,370,385,395);
bar(60+190+190,370,575,395);
setcolor(10);
settextstyle(8,0,1);
outtextxy(75,165,bkn);
outtextxy(75+190,165,bkn);
outtextxy(75+190+190,165,bkn);
outtextxy(75,365,bkn);
outtextxy(75+190,365,bkn);
outtextxy(75+190+190,365,bkn);
//================================================================
//heading.............
setcolor(BLUE);
strcpy(s[0].heading,"WWE ");
strcpy(s[1].heading,"NEON");
strcpy(s[2].heading,"WIPRO");
strcpy(s[3].heading,"HISL ");
strcpy(s[4].heading,"HISL ");
strcpy(s[5].heading,"HISL ");
  xs=85;
   settextstyle(10,0,3);
outtextxy(xs-5,75-30,s[0].heading);
xs+=190;
outtextxy(xs,75-20,s[1].heading);
xs+=190;
outtextxy(xs-15,75-20,s[2].heading);
xs=85;
outtextxy(xs,275,s[3].heading) ;
xs+=190;
outtextxy(xs,275,s[4].heading);
xs+=190;
outtextxy(xs,275,s[5].heading)  ;
outtextxy(80,90,"LIVE");
outtextxy(275,90,"RUN");
outtextxy(465,90,"RUN");
int st=initmouse();   int tempx,tempy,button,x,y;
 if(st==0)
 printf("mouse not supported");
 else
 { showmouseptr();
      getmousepos(&button,&x,&y);      //enabling mouse
// tempx=x;
// tempy=y;
 while(!kbhit())           //gets input from user and directs the compiler
   {  getmousepos(&button,&x,&y);
   if((button&1)==1)
   {   if(x>=605 && x<=630 && y>=340 && y<=365)
   {  cleardevice(); sport2();
break;
    }
    else if(x>=605 && x<=630 && y>=10 && y<=40)
    {           cleardevice();
    sport1();
    break;
    }  else if(x>=60 && x<=195 && y>=170 && y<=195)
    {        cleardevice();
    hjkk();
    break;
    }
	  else if(x>=60+190 && x<=385 && y>=170 && y<=195)
    {           cleardevice();
    hjkk();
    break;
    }
       else if(x>=60+190+190 && x<=575 && y>=170 && y<=195)
    {           cleardevice();
    hjkk();
    break;
    }  else if(x>=60 && x<=195 && y>=370 && y<=395)
    {           cleardevice();
    hjkk();
    break;
    }
     else if(x>=60+190 && x<=385 && y>=370 && y<=395)
    {           cleardevice();
    hjkk();
    break;
    }
     else if(x>=60+190+190 && x<=575 && y>=370 && y<=395)
    {           cleardevice();
    hjkk();
    break;
   }} }}
getch();}
void sports25()
{int gdrive=DETECT,gmode;
initgraph(&gdrive,&gmode,"c://tc//bgi");
call=3;
sport1();
getch();}
char scr[][10]={"SILVER","GOLD","PLATINUM"};
void layout15()
{closegraph();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\BGI");
setcolor(1);
rectangle(20,30,625,450);
setfillstyle(8,1);
floodfill(2,2,1);
setfillstyle(1,WHITE);
 bar(500,50,600,100);
 setfillstyle(1,BLACK);
 bar(520,50,525,100);bar(510,50,512,100);
 setcolor(BLACK);
 for(int z=0;z<400;z+=7)
  bar(527+z,50,527+z,100);
	for(z=3;z<600;z+=6)
   { setcolor(BLACK);
  bar(527+z,50,527+z,100);   }
setcolor(4);
settextstyle(3,0,3);
outtextxy(180,42,"BOOKING SUMMARY");
outtextxy(181,42,"BOOKING SUMMARY");
setcolor(4);
line(175,75,400,75);
setcolor(14);
line(175,76,400,76);
setcolor(15);
settextstyle(2,0,6);
outtextxy(50,108,"BOOKING ID :");
outtextxy(150,170,"SEATS      :");
outtextxy(150,202,"TIME       :");
outtextxy(150,235,"DAY/DATE   :");
outtextxy(150,265,"COST       :");
outtextxy(150,332,"TOTAL COST :");
outtextxy(150,298,"GST        :");
setcolor(4);
rectangle(95,378,195,408);
setfillstyle(1,4);
floodfill(100,380,4);
setcolor(15);
settextstyle(2,0,7);
outtextxy(112,380,"BACK");
outtextxy(113,380,"BACK");
 settextstyle(2,0,6);
if(call==1)
{outtextxy(50,138,"THEATRE    :");
outtextxy(290,138,hisscreen);
outtextxy(400,138,"SCREEN    :");
outtextxy(500,138,scr[u-1]);}
else if(call==2)
{
outtextxy(50,138,"VENUE    :");  outtextxy(290,138,hisscreen);
}
else if(call==3710)
{
outtextxy(50,138,"VENUE    :");
}
else if(call==4)
{outtextxy(50,138,"LOCATION    :");
   outtextxy(200,138,venue);
}
int   status=initmouse();   int button,x,y;
   if(status==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
      getmousepos(&button,&x,&y);
  while(!kbhit())
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {
   if(y>=1)
   {
       if(x>95&&y>378&&x<195&&y<408)
      {
      home();  }
      break;
      }
    else
    continue;	 }}}}
 struct history
 { char uid[50];
 char bid[60];
 float cost;
 float jk;
 char venue[70];
 char screen[50];
 int nos;
  char dte[10];
  char tme[10];
 }mn;
 void cheki15()
 {closegraph();
 initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
	fstream f; account his;
strcpy(mn.dte,ddt);
	strcpy(mn.tme,ti);
   strcpy(mn.bid,id[bdfg]);
    strcpy(mn.uid,his.id);
    mn.nos=l;
    mn.cost=cost15;
    mn.jk=jk15;
    if(call==4)
   strcpy(mn.venue,venue);
    else
    strcpy(mn.venue,hisscreen);
     f.open("doisha.dat",ios::in|ios::out);
    f.write((char*)&mn,sizeof(mn));
     f.close();
}
 int yk15=0;
 void rorito()
 {
 closegraph();
  initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
  setbkcolor(WHITE);
  account his;
 fstream f;
  f.open("doisha.dat",ios::in|ios::out);
 setfillstyle(1,RED);int hj15=0;
 settextstyle(3,0,2);
  for(int i=1;i<=3;i++)
   {  bar(450,70+hj15,550,100+hj15);
	outtextxy(470,76+hj15,"VIEW");
   hj15+=80;     }}
void history()
{
fstream f;            account his;
	      f.open("doisha.dat",ios::in|ios::out);
    while(  f.read((char*)&mn,sizeof(mn)))      {    if(strcmpi(his.id,mn.uid)==1)
     {     yk15++;    }       }
		    f.close();
		    if(yk15>0)
		    rorito();
		    else
		    {
		closegraph();
cout<<"\n\n\t you have not booked any tickets";
if(kbhit())
home();}}
void pro_name()
{setfillstyle(1,0);
bar(280,120+(50*0),440,150+(50*0));
setcolor(7);
rectangle(280,120+(50*0),440,150+(50*0));
int st=0; char ch[50];
while(st==0)
{ gotoxy(37,9);
cout<<"_";
gotoxy(37,9);
gets(ch);
 if(strlen(ch)==0)
 { gotoxy(60,9);
    cout<<" //empty";
    gotoxy(37,9);
    cout<<"            ";
 }
 else {st=1; gotoxy(60,9);cout<<"         ";}
}

strcpy(spl_ob.fname,ch);
profile();
}
void pro_id()
{
setfillstyle(1,0);
bar(280,120+(50*1),440,150+(50*1));
setcolor(7);
rectangle(280,120+(50*1),440,150+(50*1));
account ob;
fstream f;
int status=0;  char ch[50];
while(status==0)
{gotoxy(37,12);
cout<<"_";
gotoxy(37,12);
int st=0;
while(st==0)
{gotoxy(37,12);
cout<<"_";
gotoxy(37,12);
gets(ch);
 if(strlen(ch)==0)
 { gotoxy(60,12);
cout<<" //empty";
gotoxy(37,12);
cout<<"                "; }
 else {st=1; gotoxy(60,12);cout<<"          ";}}
status=1;
f.open("f1.dat",ios::binary|ios::in);
while(f.read((char*)&ob,sizeof(ob)))
{if(strcmp(ob.id,spl_ob.id)==0)
continue;
else if(strcmp(ob.id,ch)==0)
{status=0;
break;}}
if(status==0)
{gotoxy(61,12);
cout<<"//already exits";
gotoxy(37,12);
cout<<"                   ";
}if(status==1)
{gotoxy(61,12);cout<<"                ";}
f.close();
}
strcpy(spl_ob.id,ch);
profile();
}
void pro_phno()
 { setfillstyle(1,0);
bar(280,120+(50*2),440,150+(50*2));
setcolor(7);
rectangle(280,120+(50*2),440,150+(50*2));
char ch[50];int st=0;
while(st==0)
{gotoxy(37,15);
cout<<"_";
gotoxy(37,15);
gets(ch);
 if(strlen(ch)==0)
 { gotoxy(60,15);
    cout<<" //empty";
    gotoxy(37,15);
    cout<<"            ";
 } else {st=1; gotoxy(60,15);cout<<"         ";}
strcpy(spl_ob.phno,ch);
profile();
}void pro_slide(int n)
{  if(n==80 && arr14==l14-1)
   arr14=l14-1;
   else if(n==80 && arr14!=l14-1)
   arr14++;
   else if(n==72 && arr14==0)
   arr14=0;
   else if(n==72 && arr14!=0)
   arr14--;}
void pro_disp_city(int n)
{  settextstyle(1,0,1);
 for(int i=0;i<n;i++)
  {  if(i==arr14)
    { setcolor(10);
      setfillstyle(8,6);
      bar(237,100+(30*i),500,130+(30*i));
      setcolor(1);
      rectangle(237,100+(30*i),500,130+(30*i));
      setcolor(14);
       outtextxy(250,100+(30*i),temp14[i]); }
      else
      {  setfillstyle(1,0);
	  bar(237,100+(30*i),500,130+(30*i));
	  setcolor(1);
	  rectangle(237,100+(30*i),500,130+(30*i));
	  setcolor(15);
	  outtextxy(250,100+(30*i),temp14[i]);}}
int pro_display(int n)
{cleardevice();
setcolor(9);
setfillstyle(10,9);
rectangle(20,20,getmaxx()-20,getmaxy()-20);
floodfill(1,1,9);
setfillstyle(10,1);
bar(20,20,getmaxx()-20,getmaxy()-20);
setcolor(9);
rectangle(20,20,getmaxx()-20,getmaxy()-20);
setcolor(10);
settextstyle(1,HORIZ_DIR,2);
outtextxy(50,50,"ENTER THE CITY : ");
setfillstyle(1,0);
bar(237,50,500,80);
setcolor(15);
rectangle(237,50,500,80);
if(n==2){for(int j=0;j<=i2;j++){
gotoxy(32+j,5);
cout<<st14[j];}}
else if(n==1)
{gotoxy(32,5);
cout<<temp14[arr14];
gotoxy(64,5);
cout<<"//wait..";
delay(1000);
gotoxy(64,5);
cout<<"//city selected..";
strcpy(spl_ob.city,temp14[arr14]);
delay(1000);
profile();
}}
void pro_calculate()
{
   l14=0;
int m=0,status=0;
 for(int j=0;j<12;j++)
 {
 status=1;
 for(int k=0;k<=i2;k++)
 {
 if(tolower(ch14[j][k])!=tolower(st14[k]))
{
status=0;
break;
}
}
if(status==1)
{
   strcpy(temp14[l14++],ch14[j]);
}}}
void pro_input()
{          int k;
for(i2=0;;i2++)
{   k=0;
st14[i2]=getch();
if(st14[i2]==(int)8)
{i2-=2;
if(i2==-2)
i2=-1;
}if(st14[i2]==(int)13)
{if(arr14<l14)
{pro_display(1);
break;}
else{i2=-1;}}
if(st14[i2]==(int)72 || st14[i2]==(int)80)
{ int n=st14[i2];
i2-=2;
//display();
pro_calculate();
pro_slide(n);
pro_disp_city(l14); k=1;
}
if(k==0) //if(st[i]!=(int)72 || st[i]!=(int)80)
{pro_display(2);
pro_calculate();
pro_disp_city(l14);
}}}
void pro_city()
{int gdrive=DETECT,gmode,errorcode;
initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
l14=0;arr14=0;i2=-1;
pro_display(2);
pro_input();
}void profile_change()
{fstream f1,f2;
f1.open("f1.dat",ios::binary|ios::in);
f2.open("t111.dat",ios::binary|ios::out);
account ob;  int n=-1;
while(f1.read((char*)&ob,sizeof(ob)))
{ n++;
if(n==file_no)
{
f2.write((char*)&spl_ob,sizeof(spl_ob));
}
else
{
f2.write((char*)&ob,sizeof(ob));
}
}

f1.close();
f2.close();
remove("f1.dat");
rename("t111.dat","f1.dat");
}
void profile()
{closegraph();
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
 setcolor(9);
 setfillstyle(10,9);
rectangle(22,20,getmaxx()-20,getmaxy()-20);
floodfill(1,1,9);
file_pos();
setfillstyle(11,4);
bar(22,20,getmaxx()-20,getmaxy()-20);
setcolor(9);
rectangle(22,20,getmaxx()-20,getmaxy()-20);
always();
setfillstyle(10,1);
bar(190,40,380,75);
setcolor(13);
rectangle(190,40,380,75);
settextstyle(1,0,3);
setcolor(2);
outtextxy(205,42," MY PROFILE");
setcolor(10);
outtextxy(203,42," MY PROFILE");
setcolor(9);
settextstyle(1,0,2);
for(int i=0;i<4;i++)
{rectangle(120,120+(50*i),240,150+(50*i));}
setcolor(15);
outtextxy(130,120,"NAME");
outtextxy(130,170,"EMAIL ID");
outtextxy(130,220,"PHONE NO.");
outtextxy(130,270,"CITY");
for(i=0;i<4;i++)
{setcolor(7);
setfillstyle(1,7);
rectangle(280,120+(50*i),440,150+(50*i));
bar(440,120+(50*i),460,150+(50*i));
setcolor(4);
circle(450,(120+(50*i)+150+(50*i))/2,5);}
setcolor(15);
settextstyle(2,0,5);
outtextxy(290,125,spl_ob.fname);
outtextxy(290,175,spl_ob.id);
outtextxy(290,225,spl_ob.phno);
outtextxy(290,275,spl_ob.city);
setcolor(10);
setfillstyle(1,10);
bar(220,350,305,385);
setcolor(3);
rectangle(220,350,305,385);
setcolor(4);
settextstyle(1,0,2);
outtextxy(228,350,"change");
int st=initmouse();   int button,x,y;
 if(st==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
      getmousepos(&button,&x,&y);      //enabling mouse
    while(!kbhit())           //gets input from user and directs the compiler
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {
   if(x>440&& y>120+(50*0)&&x<460&& y<150+(50*0))
   {
       pro_name();

    }
    else if(x>440&& y>120+(50*1)&&x<460&& y<150+(50*1))
    {
       pro_id();
    }
    else if(x>440&& y>120+(50*2)&&x<460&& y<150+(50*2))
    {
    pro_phno();
    }
    else if(x>440&& y>120+(50*3)&&x<460&& y<150+(50*3))
    {
    pro_city();
    }
    else if(x>220&&y>350&&x<305&&y<385)
    {
    profile_change();
    }
    else if(x<=21&&y>=2&&y<=10&&x>=2)
    {
    taskbar(10);
    break;
    } }}} }


void file_pos()
{
fstream f;  file_no=-1;
account ob1;
f.open("f1.dat",ios::binary|ios::in);
while(f.read((char*)&ob1,sizeof(ob1)))
{ file_no++;
if(strcmp(spl_ob.fname,ob1.fname)==0)
break;
}}
void slide1412(int n)
{   if(n==80 && ar14==L14-1)
   ar14=L14-1;
   else if(n==80 && ar14!=L14-1)
   ar14++;
   else if(n==72 && ar14==0)
   ar14=0;
   else if(n==72 && ar14!=0)
   ar14--;}
void disp_city1412(int n)
{  settextstyle(2,0,6);
    for(int i=0;i<n;i++)
    {    if(i==ar14)
    { setcolor(10);
      setfillstyle(1,10);
       bar(50,90+(30*i),550,120+(30*i));
	   setcolor(4);
	rectangle(50,90+(30*i),550,120+(30*i));
       outtextxy(150,90+(30*i),te14[i]);
       outtextxy(151,90+(30*i),te14[i]);    }
      else
      {        setfillstyle(1,3);
	       bar(50,90+(30*i),550,120+(30*i));
	  setcolor(15);
	  rectangle(50,90+(30*i),550,120+(30*i));
    outtextxy(150,90+(30*i),te14[i]);
    outtextxy(151,90+(30*i),te14[i]);  } }}
int display1412(int n)
{closegraph();
     initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
 setcolor(9);
 setfillstyle(10,9);
rectangle(22,20,getmaxx()-20,getmaxy()-20);
floodfill(1,1,9);
setfillstyle(CLOSE_DOT_FILL,1);
bar(22,20,getmaxx()-20,getmaxy()-20);
setcolor(9);
//rectangle(10,20,630,460);
//setfillstyle(CLOSE_DOT_FILL,1);
//floodfill( 0,0,3);
//always();
setfillstyle(1,WHITE);
bar(50,50,550,85);
setfillstyle(SOLID_FILL,9);setcolor(9);
circle(75,65,6); floodfill(75,65,9);
 line(75,65,65,77);  // line(180,213,170,225);
always();
if(n==2)
{    s14[i12+1]='\0';
setcolor(0);
settextstyle(2,0,6);
outtextxy(100,60,s14);}
else if(n==1)
{ setcolor(0);
settextstyle(2,0,6);
outtextxy(100,60,te14[ar14]);
char t[50];
strcpy(t,te14[ar14]);
ar14=0;L14=0;i12=-1;
s14[0]='\0';
if(p(t,"Mersal (Movie)")==0 || p(t,"Annabelle (Movie)")==0|| p(t,"Golmaal (Movie)")==0 || p(t,"Spyder (Movie)")==0)
movie_list1();
else if(p(t,"Judwaa 2 (Movie)")==0||p(t,"Boss Baby (Movie)")==0|| p(t,"Noor (Movie)")==0|| p(t,"Premam (Movie)")==0)
movie_list2();
else if(p(t, "Vanimahal (Event)")==0||p(t,"Music Academy-Feb22 (Event)")==0||p(t,"Music Academy-Feb14 (Event)")==0)
events();
else if(p(t,"Romeo Juliet (Drama)")==0||p(t,"Kattabomman (Drama)")==0||p(t,"Julius Ceaser (Drama)")==0||p(t,"Heider (Drama)")==0||p(t,"Merchant of Venice (Drama)")==0)
map();
else if(p(t,"WWE Live (Sport)")==0||p(t,"Neon Run (Sport)")==0||p(t,"HISL Chennai vs Pune (Sport)")==0||p(t,"Wipro Run (Sport)")==0||p(t,"HISL Chennai vs Kolkata (Sport)")==0||p(t,"HISL Chennai vs Delhi (Sport)")==0||p(t,"HISL Chennai vs Mumbai (Sport)")==0||p(t,"HISL Chennai vs Kerala (Sport)")==0||p(t,"HISL Chennai vs AFC (Sport)")==0)
sports25();
}
}
void calculate1412()
{   L14=0;
int status=0;
 for(int j=0;j<25;j++)
 { status=1;
 for(int k=0;k<=i12;k++)
 { if(tolower(c14[j][k])!=tolower(s14[k]))
{status=0;
break;
}
}
if(status==1)
{
   strcpy(te14[L14++],c14[j]);
}}}
void input1412()
{     int k;
for(i12=0;;i12++)
{   k=0;
s14[i12]=getch();
if(s14[i12]==(int)8)
{i12-=2;
if(i12==-2)
i12=-1;
}
if(s14[i12]==(int)13)
{
if(ar14<L14)
{
display1412(1);
break;
}
else{i12=-1;
}
}
//if(st[i]!=(int)72 || st[i]!=(int)80)
//arr=0;
if(s14[i12]==(int)72 || s14[i12]==(int)80)
{ int n=s14[i12];
i12-=2;
//display();
calculate1412();
slide1412(n);
disp_city1412(L14); k=1;
}if(k==0) //if(st[i]!=(int)72 || st[i]!=(int)80)
{display1412(2);
calculate1412();
disp_city1412(L14);
}}}
void search_city1412()
{int gdrive=DETECT,gmode,errorcode;
initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
setcolor(9);
 setfillstyle(10,9);
rectangle(22,20,getmaxx()-20,getmaxy()-20);
floodfill(1,1,9);
setfillstyle(CLOSE_DOT_FILL,1);
bar(22,20,getmaxx()-20,getmaxy()-20);
setcolor(9);
setfillstyle(1,LIGHTGRAY);
bar(50,50,550,85);
setfillstyle(SOLID_FILL,9);setcolor(9);
circle(75,65,6);  floodfill(75,65,9);
 line(75,65,65,77);  // line(180,213,170,225);
 always();
 int st=initmouse();   int button,x,y;
 if(st==0)
 printf("mouse not supported");
 else
 { showmouseptr();
      getmousepos(&button,&x,&y);      //enabling mouse
  while(!kbhit())      {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {
   if(x<=21&&y>=2&&y<=10&&x>=2)
   {
       taskbar(20);
    }
    else if(x>50&&y>50&&x<550&&y<85)
   {
   display1412(2);
   input1412();
    break;
    } }}}}
void support()
{initgraph(&gdrive,&gmode,"c://tc//bgi");
setcolor(9);
 setfillstyle(10,9);
rectangle(22,20,getmaxx()-20,getmaxy()-20);
floodfill(1,1,9);
/*setfillstyle(CLOSE_DOT_FILL,1);
bar(22,20,getmaxx()-20,getmaxy()-20);
setcolor(9);
//rectangle(22,20,getmaxx()-20,getmaxy()-20);
*/
always();
settextstyle(3,0,4);setcolor(10);
outtextxy(getmaxx()/2-70,40,"SUPPORT");
char ch2580[200]="VRV PRODUCTIONS ALWAYS LOOKS TO BRING OUT THE BEST. ";
char ch1397[200]="WE HOPE TO HAVE CAUSED NO DISTURBANCES TO OUR USERS.";
char sup[200]="IF YOU HAVE ANY QUERIES OR QUESTION YOU COULD MAIL US TO";
char emailll[50]=" THE FOLLOWING EMAIL ID's";
char rajesh[200]=" RAJESH KRISHNAN  -  rajeshkrishnan2k@gmail.com "  ;
char vatsal[200]=" VATSAL MIMANI    -  vmimani11@gmail.com   ";
char viknesh[200]=" VIKNESHWAR G K   -  viknesh1900gk@gmail.com";
settextstyle(8,0,1);
//closegraph();
//outtextxy(x,100,ch);
gotoxy(13,7);
for(int i=0;i<strlen(ch2580);i++)
{cout<<ch2580[i];
delay(100);
}gotoxy(13,9);
for( i=0;i<strlen(ch1397);i++)
{cout<<ch1397[i];
delay(100);
}
gotoxy(13,11);
for( i=0;i<strlen(sup);i++)
{cout<<sup[i];
delay(100);
}gotoxy(13,13);
for( i=0;i<strlen(emailll);i++)
{cout<<emailll[i];
delay(100);
}
gotoxy(13,15);
for( i=0;i<strlen(rajesh);i++)
{cout<<rajesh[i];
delay(50);
}
gotoxy(13,17);
for( i=0;i<strlen(vatsal);i++)
{cout<<vatsal[i];
delay(50);
}
gotoxy(13,19);
for( i=0;i<strlen(viknesh);i++)
{cout<<viknesh[i];
delay(50);
}
settextstyle(10,0,4);
       setcolor(YELLOW);
outtextxy(150,320,"THANK YOU!!");
int st=initmouse();   int button,x,y;
if(st==0)
 printf("mouse not supported");
 else
 {
 showmouseptr();
      getmousepos(&button,&x,&y);      //enabling mouse

    while(!kbhit())           //gets input from user and directs the compiler
   {
   getmousepos(&button,&x,&y);
   if((button&1)==1)
   {
   if(x<=21&&y>=2&&y<=10&&x>=2)
   {
       taskbar(7);    } }}}}













void main()
{ clrscr();
  initgraph(&gdrive,&gmode,"c:\\tc\\BGI");
  loading();
   login_slide();
    getch(); }
