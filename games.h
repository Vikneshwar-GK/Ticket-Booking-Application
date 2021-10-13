int score ;
void game();void selection();void selection2();void layout(int i);
void rules()
{ initgraph(&gdrive,&gmode,"c:\\turboc3\\BGI\\");
int style,size;  size=2;
settextstyle(1,HORIZ_DIR,size);
setcolor(15);  setbkcolor(RED);
outtextxy(23,100,"rules");
outtextxy(23,130,"1 : MAKE SURE CAPS IS OFF");
outtextxy(23,160,"2 : YOU CAN MAKE A MAXIMUM OF 10 ATTEMPTS PER WORD");
outtextxy(23,190,"3 : MAKE SURE YOU ENTER THE RIGHT SPELLING");
outtextxy(23,220,"4 : YOU WILL RECEIVE THE FIRST CLUE AT THE 4 TH ATTEMPT");
outtextxy(23,250,"5 : YOU WILL RECEIVE THE SECOND CLUE AT THE 7 TH ATTEMPT");
outtextxy(50,300,"press any key to go back");
char p; cin>>p  ; selection() ;  getch(); }
void about()
{ cleardevice();  int style,size;  size=2;
settextstyle(1,HORIZ_DIR,size);
setcolor(15);   setbkcolor(RED);
outtextxy(23,130," your  reviews  and  suggestions  are  welcome");
outtextxy(23,160," mail  us  to :  help_desk220@vrvproductions.com ");
outtextxy(23,190," or  contact  us  at  www.vrvproductions.com \ contact  ");
outtextxy(50,300,"press  any  key  to  go  back");
char p;  cin>>p; selection();
getch();  }
void background()
{for(int i=1;i<=10;i++)
{setcolor(i);
rectangle(30,20,600,450);
setfillstyle(CLOSE_DOT_FILL,i+2);
floodfill( 0,0,i);  }  }
void disph()
{    cleardevice();  int style,size;   size=7;
settextstyle(4,HORIZ_DIR,size);
setcolor(15);  setbkcolor(RED);
outtextxy(150,10,"HANGMAN");
delay(1000);
size=1;
settextstyle(1,HORIZ_DIR,size);
setcolor(15);
outtextxy(230,100," \n\t 1.RULES");
outtextxy(230,140," \n\t 2.NEW GAME");
outtextxy(230,180," \n\t 3.STATISTICS");
outtextxy(230,220," \n\t 4.ABOUT");
outtextxy(230,260," \n\t 5.QUIT");
getch();}
void stat()
{   cleardevice();
char choice;
cout<<"S.NO\t\tNAME\t\tSCORE "<<endl;
cout<<"1.\t\tHEMA\t\t450"<<endl;
cout<<"2.\t\tIAMGREAT\t\t400"<<endl;
cout<<"3.\t\tDOISHA\t\t350"<<endl;
cout<<"4.\t\tDEMIOS236\t\t300"<<endl;
delay(2000);
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"press x to exit";
cin>>choice;
if(choice=='x'||choice=='X')
{ closegraph();  exit(0);  }
else 
selection2();  }
void options()   {  cleardevice();
outtextxy(230,50,"PLEASE  SELECT  YOUR  CHOICE  ");
outtextxy(230,100," \n\t 1.DICTIONARY");
outtextxy(230,140," \n\t 2.COUNTRIES");
outtextxy(230,180," \n\t 3.COLORS"); }
void loading()
{int x=100,i;
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
setbkcolor(BLACK);
setcolor(14);
outtextxy(90,35,"VRV PRODUCTIONS");
circle(300,150,4);
for(i=0;i<400;++i)
{delay(10);
line(x,400,x,420);
if(x==110){
circle(286,120,2); //left eye
circle(314,120,2);           //righteye
}if(x==130) {delay(100);
circle(300,130,35);}             //head
if(x==150)    {
line(300,165,300,300);
delay(100);
}        //body
if(x==250)  {
line(300,200,355,255);//right hand
delay(100);
}
if(x==260)  {
line(300,200,245,255);//lefthand
delay(100);}if(x==400){
line(300,300,355,355);//right leg
delay(300);}if(x==420){
line(300,300,245,355);//left leg
delay(100);} x++; }
cleardevice();}
void hangman(int g)
{ setcolor(5);
//setbkcolor(CYAN);
if(g==11){      }
else if(g==10)
{line(350,270,450,270);//1bottom
}else if(g==9)
{line(350,270,450,270);//1bottom
line(400,270,400,30);//2middleup
}      else if (g==8)
{ line(350,270,450,270);//1bottom
line(400,270,400,30);//2middleup
line(400,30,500,30);//abovehorizontal      }
else if (g==7)
{line(350,270,450,270);//1bottom
line(400,270,400,30);//2middleup
line(400,30,500,30);//abovehorizontal
line(475,30,475,70);//abovehead
}else if (g==6)
{      circle(465,95,2);
circle(485,95,2);   circle(475,115,4);
circle(475,100,30);
line(350,270,450,270);//1bottom
line(400,270,400,30);//2middleup
line(400,30,500,30);//abovehorizontal
line(475,30,475,70);//abovehead
}else if(g==5)
{circle(465,95,2);  circle(485,95,2);
circle(475,115,4);  circle(475,100,30);
line(350,270,450,270);//1bottom
line(400,270,400,30);//2middleup
line(400,30,500,30);//abovehorizontal
line(475,30,475,70);//abovehead
line(475,130,475,210);//body
}else if(g== 4)
{circle(465,95,2);  circle(485,95,2);
circle(475,115,4);  circle(475,100,30);
line(350,270,450,270);//1bottom
line(400,270,400,30);//2middleup
line(400,30,500,30);//abovehorizontal
line(475,30,475,70);//abovehead
line(475,130,475,210);//body
line(475,165,440,210);//lefthand
}else if(g==3)
{circle(465,95,2); circle(485,95,2);
circle(475,115,4);  circle(475,100,30);
line(350,270,450,270);//1bottom
line(400,270,400,30);//2middleup
line(400,30,500,30);//abovehorizontal
line(475,30,475,70);//abovehead
line(475,130,475,210);//body
line(475,165,440,210);//lefthand
line(475,165,510,210);//righthan
}else if(g==2)
{ circle(465,95,2); circle(485,95,2);
circle(475,115,4);  circle(475,100,30);
line(350,270,450,270);//1bottom
line(400,270,400,30);//2middleup
line(400,30,500,30);//abovehorizontal
line(475,30,475,70);//abovehead
line(475,130,475,210);//body
line(475,210,440,250);//leftleg
line(475,210,510,250);//rightleg
line(475,165,440,210);//lefthand
line(475,165,510,210);//righthan
}else if(g==1)
{circle(465,95,2); circle(485,95,2);
circle(475,115,4); circle(475,100,30);
line(350,270,450,270);//1bottom
line(400,270,400,30);//2middleup
line(400,30,500,30);//abovehorizontal
line(475,30,475,70);//abovehead
line(475,130,475,210);//body
line(475,210,440,250);//leftleg
line(475,210,510,250);//rightleg
line(475,165,440,210);//lefthand
line(475,165,510,210);//righthand
}   }
void choice()
{cleardevice(); int style,size; size=2;
settextstyle(1,HORIZ_DIR,size);
setcolor(6);  setbkcolor(DARKGRAY);
outtextxy(230,50,"PLEASE SELECT YOUR cHOICE");
outtextxy(230,100," \n\t 1.PLAY  AGAIN");
outtextxy(230,180," \n\t 2.MENU");}
void menu()
{ cleardevice(); selection();}
void play() { cleardevice() ; selection2(); }
void again() { choice();
int status=initmouse();
int tempx,tempy,button,x,y;
char array[89];
if(status==0)
printf("mouse not supported");
else
{showmouseptr();
getmousepos(&button,&x,&y);
while(!kbhit())
{getmousepos(&button,&x,&y);
if((button&1)==1)
{if(y<=250)
{int temp=x;
if(temp<=400&&y<=120&&y>=80)
{ play(); break; }
else if(temp<=400&&y<=200&&y>180)
{ menu(); break;  }
else continue;}}}}
getch();}
void dictionary()
{closegraph();
initgraph(&gdrive,&gmode,"c:\\TURBOC3\\BGI");
background();    //displays background for output
char words[][20]={"jazz","abruptly","buzz","dwarves","haphazard",
"catastrophe","esplanade","jings","axiom","pneumonia"};
char clue1[][150]={"type of american music","suddenly","low humming sound",
"short people","lacking being organised","massive disaster","beach road",
"unexpected surprise","self explanatory","lung inflamation"};
char clue2[][150]={"sound by piano,guitar & violin","unexpectedly",
"exciting atmosphere","snowwhite & the 7___","inappropriate manner",
"sudden calamity","space between fortress & town","exclamation",
"universal truth","severe version of cold"};
randomize();
int i,n,status=0,clue;
char pink[90],g,hlo[90];
i=random(10);//random word from 10 words is chosen & user must find this word
clue=i;       //appropriate clues for the chosen word are stored
strcpy(pink,words[i]);
n=strlen(pink);     //number of alphabets in the word are stored
for(i=0;i<n;i++)
hlo[i]='_';
hlo[i]='\0';
hangman(10);       // animation made possible
cout<<"\n\n\n\n\n\n\n\n\n\t         YOUR WORD IS : ";
for(i=0;i<n;i++)
cout<<hlo[i]<<"  ";   // number of alphabets in the word are displayed as '_'
puts("\n start guessing...");
for(int ch=10;ch>0;ch--)  //life decreases each iteration (ch=10)
{cout<<"\t\t";   cin>>g;
for(int j=0;j<n;j++)     //linear searching
{if(pink[j]==g)       {
hlo[j]=g;  status=1;   score+=20;}}
if(status==0)
score-=20; 
if(status==1)           ch++;
closegraph();
initgraph(&gdrive,&gmode,"c:\\TURBOC3\\BGI");
layout(ch); cout<<endl <<"\n\t\t\t";
for(i=0;i<n;i++)
cout<<hlo[i]<<"  ";
cout<<endl; cout<<"\t\t life:  "<<ch-1;
hangman(ch);
if(ch==1)
{cout<<" SORRY  YOU HAVE LOST THE GAME";
cout<<"\n\n  THE WORD IS :"<<pink;
cout<<"\n score:  "<<score;  delay(3000);
again();  exit(0);  } if(ch==7) {
cout<<" \n HINT::"<<clue1[clue]; }if(ch==4)
{cout<<"\n\n\t\t\t\n                HINT::"<<clue2[clue];
}if(strcmpi(hlo,pink)==0)
{cout<<"\n\n\t     HURRAY!!!";
cout<<"\n    WON THE GAME ";
cout<<"\n  score:  "<<score;  delay(3000);
again(); exit(0); }
status=0; } getch();
void countries()
{ closegraph();
initgraph(&gdrive,&gmode,"c:\\TURBOC3\\BGI");
background();   
char words[][150]={"israel","azerbaijan","cameroon",
"cyprus","czechrepublic","fiji","ghana","qatar","madagascar","yemen"};
char clue1[][150]={"city of jews","land of fire","won CAF 2017",
"third most populated island","capital is prague","mostly indian population",
"dark chocolate","host of 2022 fifa world cup","penguins of ____",
"starts with y"};
char clue2[][150]={"has star in flag","capital=BAKU","african country",
"capital=NICOSIA","second word is Z","capital=SUVA","capital=ACCRA",
"main sponsor of FC BARCELONA","name of animated movie series",
"nehru visited this country"};
randomize();
int i,n,status=0,clue;
char pink[90],g,hlo[90];
i=random(10);//random word from 10 words is chosen & user must find this word
clue=i;      //appropriate clues for the chosen word are stored
strcpy(pink,words[i]);
n=strlen(pink);
for(i=0;i<n;i++)     // number of alphabets in the word are stored
hlo[i]='_';
hlo[i]='\0';
hangman(10);        //enabling animation
cout<<"\n\n\n\n\n\n\n\n\n\t         YOUR WORD IS :: ";
for(i=0;i<n;i++)
cout<<hlo[i]<<"  ";   // number of alphabets in the word are displayed as '_'
puts("\n\t                          start guessing");
for(int ch=10;ch>0;ch--)  //life decreases each iteration (ch=9)
{cin>>g;
for(int j=0;j<n;j++)   //linear search
{if(pink[j]==g)
{hlo[j]=g;          status=1;
score+=20;}}
if(status==0)
score-=20;
if(status==1)        ch++;
closegraph();initgraph(&gdrive,&gmode,"c:\\TURBOC3\\BGI");layout(ch);
cout<<endl<<endl<<"\n\n\n\n\n\n\n\t\t\t";
for(i=0;i<n;i++)
cout<<hlo[i]<<"  ";
cout<<endl; cout<<"\t life:  "<<ch-1;
//displays no of remaining attempts
hangman(ch);
if(ch==1)
{ cout<<"   SORRY  YOU HAVE LOST THE GAME";
cout<<"\n THE WORD IS :"<<pink;
cout<<"\n score:  "<<score;
delay(3000);again();exit(0);}
if(ch==7)
{cout<<" \n\n\t\t\t\n               HINT::"<<clue1[clue];}
if(ch==4)
{cout<<"\n HINT::"<<clue2[clue];  
}  if(strcmpi(hlo,pink)==0)
{ cout<<"\n\n\t     HURRAY!!!";
cout<<"\n  WON THE GAME ";
cout<<"\n  score :"<<score;
delay(3000);   again();   exit(0);  }
status=0;
}getch();}
void colors()
{ closegraph();
initgraph(&gdrive,&gmode,"c:\\TURBOC3\\BGI");
background();         char words[][50]= {"pink","maroon","chiffon","sal     mon", "chocolate", "orchid","ivory"} ;
char clue2[][150]={"barbie","American band","popularcake","fish","edible","flower","elephants"};
char clue1[][150]={"lotus"," color of plums","transparent fabric","type of peach color","dark/white/MILK","anaconda-Hunt for the Blood ___?","limestone"};
randomize();
int i,n,status=0,clue;
char pink[90],g,hlo[90];
i=random(7);  clue=i;          strcpy(pink,words[i]);
n=strlen(pink);
for(i=0;i<n;i++)     // number of alphabets in the word are stored
hlo[i]='_';
hlo[i]='\0';
hangman(10);        //enabling animation
cout<<"\n\n  YOUR WORD IS : ";
for(i=0;i<n;i++)     cout<<hlo[i]<<"  ";
puts("\n\t start guessing...");
for(int ch=10;ch>0;ch--)     { cin>>g;
for(int j=0;j<n;j++)
{if(pink[j]==g)
{hlo[j]=g;status=1;score+=20;}}
if(status==0)score-=20;if(status==1)
ch++;closegraph();
initgraph(&gdrive,&gmode,"c:\\TURBOC3\\BGI");
layout(ch);
cout<<endl<<endl<<"\n\n\t\t\t";
for(i=0;i<n;i++)
cout<<hlo[i]<<"  ";
cout<<endl; cout<<"\t life:  "<<ch-1;
hangman(ch); if(ch==1)
{ cout<<" SORRY YOU HAVE LOST THE GAME";
cout<<"\n THE WORD IS :"<<pink;
cout<<"\n SCORE::   "<<score;
delay(3000);again();exit(0);}
if(ch==7)
{cout<<"\n\n\t\t\t\n      HINT:"<<clue1[clue]; }
if(ch==4){cout<<"\n\n\t\t\t\n                HINT:"<<clue2[clue]; }
if(strcmpi(hlo,pink)==0)
{cout<<"\n\n\t                         HURRAY!!!";
cout<<"\n   ON THE GAME ";
cout<<"\n       score::  "<<score;
delay(3000);again();exit(0);}
status=0; getch(); }
void selection2() { options();
int status=initmouse();   int tempx,tempy,button,x,y;
char array[89];
if(status==0)
printf("mouse not supported");
else
{showmouseptr();
getmousepos(&button,&x,&y);       //enabling mouse
while(!kbhit())      //gets input from user to display appropriate results
{  getmousepos(&button,&x,&y);
if((button&1)==1)
{if(y<=250)
{int temp=x;
if(temp<=400&&y<=120&&y>=80)
{ dictionary();  break; }
else if(temp<=400&&y<=160&&y>120)
{ countries();   break;}
else if(temp<=400&&y<=200&&y>180)
{colors();      break;}
elsecontinue; } } } } getch();  }
void selection()
{closegraph();
initgraph(&gdrive,&gmode,"c:\\TURBOC3\\BGI");
disph();
int status=initmouse();
int tempx,tempy,button,x,y;
char array[89];
if(status==0)
printf("mouse not supported");
else  {  showmouseptr();
getmousepos(&button,&x,&y);      
while(!kbhit())           {getmousepos(&button,&x,&y);
if((button&1)==1)
{if(y<=250)
{int temp=x;
if(temp<=400&&y<=120&&y>=80)        //rules
{rules(); selection(); break;}
else if(temp<=400&&y<=160&&y>120)   {
selection2();  break; }
else if(temp<=400&&y<=200&&y>180)    {stat(); break;}
else if(temp<=400&&y<=240&&y>220)
{about(); break;}
else if(temp<=400&&y<=500&&y>260)
{exit(0); } else
continue; } } } } }
 void layout(int i)
{ setcolor(i);
rectangle(30,20,600,450);
setfillstyle(CLOSE_DOT_FILL,i+2);
floodfill( 0,0,i);   }
void hangman1()
{   clrscr();  initgraph(&gdrive,&gmode,"c:\\TURBOC3\\BGI");
loading();   selection( );    getch(); }
char ch23[][4][2]={{{'A',(char)1},{'B',(char)2},{'C',(char)3},{'D',(char)4}},{{'E',(char)5},{'F',(char)3},{'G',(char)6},{'H',(char)14}},{{'I',(char)6},{'J',(char)15},{'K',(char)1},{'L',(char)4}},{{'M',(char)15},{'N',(char)2},{'O',(char)14},{'P',(char)5}}},c23[2];
int a23[2],b23[2],number23=2,i23=0,j23=0,m23=0,k23=0,v23=0,g23=1,i123,j123;
long x23=1;
void pb()  {  clrscr();
void input();  void compute(); void display();
cout<<"\n\n\n";  
for(i23=0;i23<4;i23++)
{   cout<<"\t\t\t";
for(j23=0;j23<4;j23++)
cout<<ch23[i23][j23][0]<<"  ";
cout<<"\n\n";
} int p=16;
for(int i23=1;i23<=32;i23++)
{ g23=1;  input();  compute(); display();
for(i123=0;i123<4;i123++)
for(j123=0;j123<4;j123++)
if(ch23[i123][j123][0]!=' ')
{  g23=0;  break;  }
if(g23==1)
{ cout<<"\n\n\t\t\t\tYOU WIN!!!!\n\n";
break; }
if(i23%2==0)
{ p--;  cout<<"\nChance remaining "<<p; }
if(p==0 && v23!=16)
cout<<"\nSORRY..YOU LOOSE "; } getch(); }
void input()  {  m23=0;
number23=(number23==1)?2:1;
cout<<"Enter "<<number23<<"character :";
while(m23!=1)
{ cin>>c23[number23-1];
c23[number23-1]=toupper(c23[number23-1]);
if(((int)c23[number23-1]-64)%4==0)
{ a23[number23-1]=(((int)c23[number23-1]-64)/4)-1;
b23[number23-1]=3;}
else
{a23[number23-1]=((int)c23[number23-1]-64)/4;
b23[number23-1]=(((int)c23[number23-1]-64)%4)-1;
} if(number23==2 && (c23[number23-2]==c23[number23-1]))
cout<<"\n\n\t\tAlready entered..Please enter another valid block..\n";
else if(ch23[a23[number23-1]][b23[number23-1]][0]==' ')
{ cout<<"\n\n\t\tThe enter block is empty. Please enter a unempty block.";
m23=0; }
else if(c23[number23-1]>'P' || isalpha(c23[number23-1])==0)
{cout<<"\n\n\t\tInvalid Input. Please enter a valid Input.";
m23=0;}
else
m23=1;}}
void compute()
{if(((int)c23[number23-1]-64)%4==0)
{ a23[number23-1]=(((int)c23[number23-1]-64)/4)-1;
b23[number23-1]=3;
} else
{
a23[number23-1]=((int)c23[number23-1]-64)/4;
b23[number23-1]=(((int)c23[number23-1]-64)%4)-1;}
if(number23==2) { if(ch23[a23[0]][b23[0]][1]==ch23[a23[1]][b23[1]][1])
{k23=1;  }  else  {   k23=0;  } } }
void display()
{if(number23==1){
clrscr(); cout<<"\n\n\n";
for(i23=0;i23<4;i23++)
{cout<<"\t\t\t";
for(j23=0;j23<4;j23++)
if(i23==a23[0] && j23==b23[0])
cout<<ch23[i23][j23][1]<<"  ";
else cout<<ch23[i23][j23][0]<<"  ";
cout<<"\n\n";}}
else   { if(k23==0)
{clrscr();
cout<<"\n\n\n";
for(i23=0;i23<4;i23++)
{cout<<"\t\t\t";
for(j23=0;j23<4;j23++)
if((i23==a23[0] && j23==b23[0]) || (i23==a23[1] && j23==b23[1]))
cout<<ch23[i23][j23][1]<<"  ";
else  cout<<ch23[i23][j23][0]<<"  ";
cout<<"\n\n"; }
cout<<"\n\n\t\tSorry..Not Correct..Try again..\n\n";  delay(1000);
clrscr(); cout<<"\n\n\n";
for(i23=0;i23<4;i23++)
{cout<<"\t\t\t";
for(j23=0;j23<4;j23++)
cout<<ch23[i23][j23][0]<<"  ";
cout<<"\n\n";}}
else { v23++;
clrscr();  cout<<"\n\n\n";
for(i23=0;i23<4;i23++)
{ cout<<"\t\t\t";
for(j23=0;j23<4;j23++)
if((i23==a23[0] && j23==b23[0]) || (i23==a23[1] && j23==b23[1]))
{ cout<<ch23[i23][j23][1]<<"  ";
ch23[i23][j23][0]=' ';} else
cout<<ch23[i23][j23][0]<<"  ";
cout<<"\n\n"; }
cout<<"\n\n\t\tYes..It is correct..\n\n";
delay(1000); clrscr(); cout<<"\n\n\n";
for(i23=0;i23<4;i23++)
{cout<<"\t\t\t"; for(j23=0;j23<4;j23++)
cout<<ch23[i23][j23][0]<<"  ";
cout<<"\n\n";
}
}
}
}
