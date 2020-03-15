#include<iostream>
#include<conio>

int fif=0,cop=0,pol=0;
int main()
{
textbackground(BLUE);
textcolor(WHITE);
int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
char lf1,lf2,lf3,lf4,lf5,lf6,lf7,lf8,lf9,lf10;
 clrscr();
{

cout<<"\a\a\a\t************** WELCOME TO KOUN BANEGA LAKHPATI *************\n\n";

}
cout<<"HERE IT IS YOUR FIRST QUESTION ON THE SCREEN FOR RS.10,000\n"<<endl;
cout<<"\t  Q.1 WHICH OF THE FOLLOWING CONTAINS 200 V(VOLTS)\n"<<endl;
cout<<"\t    1. TAPE RECORDER    2. TORCH BATTERIES\n"<<endl;
cout<<"\t    3. ELECTRIC BULB    4. CAR BATTERIES\n"<<endl;
cout<<"TO USE LIFELINES::PRESS (Y) ELSE (N)"<<endl;
cin>>lf1;
if(lf1=='y'||lf1=='Y')
{
cout<<"YOUR LIFELINES ARE::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"3.AUDIENCE POLL"<<endl;
cout<<"PRESS::(1) OR (2) OR (3)"<<endl;
cin>>p1;
if(p1==1)
{
cout<<"COMPUTER-ASK:: RIGHT ANSWER IS:: ELECTRIC BULB"<<endl;
cop++;
}
if(p1==2)
{
cout<<"FIFTY-FIFTY:: CAR BATTERIES/ELECTRIC BULB"<<endl;
fif++;
}
if(p1==3)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  15%"<<endl;
cout<<"		       2.  11%"<<endl;
cout<<"		       3.  60%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.10,000"<<endl;
}
else
cout<<"ENTER YOUR ANSWER FOR RS.10,000"<<endl;
cin>>ans1;
switch(ans1)
{
case 1 : textbackground(RED);
	 textcolor(WHITE);
	 cprintf("YOUR ANSWER IS WRONG YOU CAN GO HOME");
	 break;

case 2 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME"<<endl;
	 break;
case 3 : cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT"<<endl;
	 break;
case 4 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME"<<endl;
	 break;
default:cout<<"INVALID OPTION"<<endl;
	 break;
}
if(ans1==3)
{
clrscr();
cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT\n"<<endl;
cout<<"AND YOU WON RS.10,000\n"<<endl;
cout<<"NOW YOU MOVE TO SECOND QUESTION \n"<<endl;
cout<<"AND HERE IT IS YOUR NEXT QUESTION ON THE SCREEN FOR RS.20,000\n"<<endl;
cout<<"\r           Q.2 ENTOMOLOGY IS THE SCIENCE THAT STUDIES\n"<<endl;
cout<<"\r             1. BEHAVIOR OF HUMAN BEINGS     2. INSECTS\n"<<endl;
cout<<"\r             3. MICRO ORGANISMS     4. THE FORMATION OF ROCKS\n"<<endl;
cout<<"\rTO USE LIFELINES::(Y) ELSE (N)"<<endl;
cin>>lf2;
if(lf2=='y'||lf2=='Y')
{
if(cop==0&&fif==0&&pol==0)
{
cout<<"YOUR LIFELINES ARE::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"3.AUDIENCE POLL"<<endl;
cout<<"PRESS::(1) OR (2) OR (3)"<<endl;
cin>>p2;
if(p2==1)
{
cout<<"COMPUTER-ASK:: RIGHT ANSWER IS:: INSECTS"<<endl;
cop++;
}
if(p2==2)
{
cout<<"FIFTY-FIFTY:: INSECTS/THE FORMATION OF ROCKS"<<endl;
fif++;
}
if(p2==3)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  15%"<<endl;
cout<<"		       2.  60%"<<endl;
cout<<"		       3.  11%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.20,000"<<endl;

}
else
if(cop>0)
{
cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.FIFTY-FIFTY"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p2;
if(p2==1)
{
cout<<"FIFTY-FIFTY::INSECTS/THE FORMATION OF ROCKS"<<endl;
fif++;
}
if(p2==2)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  15%"<<endl;
cout<<"		       2.  60%"<<endl;
cout<<"		       3.  11%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.20,000"<<endl;
}
else
if(fif>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p2;
if(p2==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::INSECTS"<<endl;
cop++;
}
if(p2==2)
{
 cout<<"AUDIENCE POLL:::"<<endl;
cout<<"			1.  15%"<<endl;
cout<<"			2.  60%"<<endl;
cout<<"			3.  11%"<<endl;
cout<<"			4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.20,000"<<endl;

}
else
if(pol>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFITY-FIFTY"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p2;
if(p2==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS INSECTS"<<endl;
cop++;
}
if(p2==2)
{
cout<<"FIFTY-FIFTY::INSECTS/THE FOUNDATION OF ROCKS"<<endl;
fif++;
}
cout<<"ENTER YOUR ANSWER FOR RS.20,000"<<endl;
}
}
else
cout<<"ENTER YOUR ANSWER FOR RS.20,000"<<endl;
cin>>ans2;
switch(ans2)
{
case 1 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 2 : cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT"<<endl;
	   break;
case 3 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;

case 4 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
default: cout<<"INVALID OPTION"<<endl;
	 break;
}
 }

if(ans2==2)
{
clrscr();
cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT\n"<<endl;
cout<<"YOU WON RS.20,000\n"<<endl;
cout<<"NOW YOU MOVE TO THIRD QUESTION\n"<<endl;
cout<<"HERE IT IS YOUR NEXT QUESTION ON THE SCREEN FOR RS.30,000\n"<<endl;
cout<<"\r            Q.3 BY DEFAULT A REAL NUMBER IS TREATED AS\n"<<endl;
cout<<"\r             1. FLOAT      2. DOUBLE\n"<<endl;
cout<<"\r             3. LONG DOUBLE       4. FAR DOUBLE\n"<<endl;
cout<<"\rTO USE LIFELINES::(Y) ELSE (N)"<<endl;
cin>>lf3;
if(lf3=='y'||lf3=='Y')
{
if(cop==0&&fif==0&&pol==0)
{
cout<<"YOUR LIFELINES ARE::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"3.AUDIENCE POLL"<<endl;
cout<<"PRESS::(1) OR (2) OR (3)"<<endl;
cin>>p3;
if(p3==1)
{
cout<<"COMPUTER-ASK:: RIGHT ANSWER IS:: DOUBLE"<<endl;
cop++;
}
if(p3==2)
{
cout<<"FIFTY-FIFTY::FLOAT/DOUBLE"<<endl;
fif++;
}
if(p3==3)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  15%"<<endl;
cout<<"		       2.  60%"<<endl;
cout<<"		       3.  11%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.30,000"<<endl;

}
else
if(cop==1&&fif==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"AUDIENCE POLL::\n"<<endl;
cout<<"		      1.  15%"<<endl;
cout<<"		      2.  60%"<<endl;
cout<<"		      3.  11%"<<endl;
cout<<"		      4.  14%"<<endl;
cout<<"\n ENTER YOUR ANSWER FOR RS.30,000"<<endl;
pol++;

}
else
if(cop==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"FIFTY-FIFTY::FLOAT/DOUBLE"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.30,000"<<endl;
fif++;
}
else
if(fif==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"COMPUTER ASK::RIGHT ANSWER IS DOUBLE"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.30,000"<<endl;
cop++;
}
else
if(cop>0)
{
cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.FIFTY-FIFTY"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p3;
if(p3==1)
{
cout<<"FIFTY-FIFTY::FLOAT/DOUBLE"<<endl;
fif++;
}
if(p3==2)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  15%"<<endl;
cout<<"		       2.  60%"<<endl;
cout<<"		       3.  11%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.30,000"<<endl;
}
else
if(fif>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p3;
if(p3==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::DOUBLE"<<endl;
 cop++;
}
if(p3==2)
{
 cout<<"AUDIENCE POLL:::"<<endl;
cout<<"			1.  15%"<<endl;
cout<<"			2.  60%"<<endl;
cout<<"			3.  11%"<<endl;
cout<<"			4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.30,000"<<endl;

}
else
if(pol>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p3;
if(p3==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS DOUBLE"<<endl;
cop++;
}
if(p3==2)
{
cout<<"FIFTY-FIFTY::FLOAT/DOUBLE"<<endl;
fif++;
}
cout<<"ENTER YOUR ANSWER FOR RS.30,000"<<endl;
}
}
else
cout<<"ENTER YOUR ANSWER FOR RS.30,000"<<endl;
cin>>ans3;
switch(ans3)
{
case 1 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 2 : cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT"<<endl;
	 break;
case 3 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 4 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
default: cout<<"INVALID OPTION"<<endl;
	 break;
}


if(ans3==2)
{
clrscr();
cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT\n"<<endl;
cout<<"AND YOU WON RS.30,000\n"<<endl;
cout<<"NOW YOU MOVE TO FOURTH QUESTION\n"<<endl;
cout<<"AND HERE IT IS YOUR NEXT QUESTION ON THE SCREEN\n"<<endl;
cout<<"\r             Q.4 FFC STANDS FOR\n"<<endl;
cout<<"\r              1.FORIEGN FINANCE CORPORATION      2. FILM FINANCE CORPORATION\n"<<endl;
cout<<"\r              3.FEDERATION OF FOOTBALL COUNCIL       4. NONE OF THE ABOVE\n"<<endl;
cout<<"\rTO USE LIFELINES::(Y) ELSE (N)"<<endl;
cin>>lf4;
if(lf4=='y'||lf4=='Y')
{

if(cop==1&&fif==1&&pol==1)
{
cout<<"SORRY YOU DONT HAVE ANY LIFELINE\n"<<endl;
cout<<"ENTER YOUR ANSWER FOR RS.40,000"<<endl;
}
else
if(cop==0&&fif==0&&pol==0)
{
cout<<"YOUR LIFELINES ARE::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;

cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"3.AUDIENCE POLL"<<endl;
cout<<"PRESS::(1) OR (2) OR (3)"<<endl;
cin>>p4;
if(p4==1)
{
cout<<"COMPUTER-ASK:: RIGHT ANSWER IS:: FILM FINANCE CORPORATION"<<endl;
cop++;
}
if(p4==2)
{
cout<<"FIFTY-FIFTY::FORIEGN FINANCE CORPORATION/FILM FINANCE CORPORATION"<<endl;
fif++;
}
if(p4==3)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"                1.  15%"<<endl;
cout<<"                2.  60%"<<endl;
cout<<"		       3.  11%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.40,000"<<endl;

}

else
if(cop==1&&fif==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"AUDIENCE POLL::"<<endl;
cout<<"               1.  15%"<<endl;
cout<<"               2.  60%"<<endl;
cout<<"		      3.  11%"<<endl;
cout<<"               4.  14%"<<endl;
cout<<"\n ENTER YOUR ANSWER FOR RS.40,000"<<endl;
pol++;
}
else
if(cop==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"FIFTY-FIFTY::FORIEGN FINANCE CORPORATION/FILM FINANCE CORPORATION"<<endl;
fif++;
cout<<"\nENTER YOUR ANSWER FOR RS.40,000"<<endl;
}
else
if(fif==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"COMPUTER ASK::RIGHT ANSWER IS:: FILM FINANCE CORPORATION"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.40,000"<<endl;
cop++;
}

else
if(cop>0)
{
cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.FIFTY-FIFTY"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p4;
if(p4==1)
{
cout<<"FIFTY-FIFTY::FORIEGN FINANCE CORPORATION/FILM FINANCE CORPORATION"<<endl;
cout<<"ENTER YOUR ANSWER FOR RS.40,000\n"<<endl;
fif++;
}
if(p4==2)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"                1.  15%"<<endl;
cout<<"                2.  60%"<<endl;
cout<<"                3.  11%"<<endl;
cout<<"                4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER"<<endl;
}
else
if(fif>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p4;
if(p4==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::FILM FINANCE CORPORATION"<<endl;
cop++;
}
if(p4==2)
{
 cout<<"AUDIENCE POLL:::"<<endl;
cout<<"			1.  15%"<<endl;
cout<<"			2.  60%"<<endl;
cout<<"			3.  11%"<<endl;
cout<<"			4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.40,000"<<endl;

}
else
if(pol>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p4;
if(p4==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::FILM FINANCE CORPORATION "<<endl;
cop++;
}
if(p4==2)
{
cout<<"FIFTY-FIFTY::FORIEGN FINANCE CORPORATION/FILM FINANCE CORPORATION"<<endl;
fif++;
}
cout<<"ENTER YOUR ANSWER FOR RS.40,000"<<endl;
}
}
else
cout<<"ENTER YOUR ANSWER FOR RS.40,000"<<endl;
cin>>ans4;
switch(ans4)
{
case 1 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 2 : cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT"<<endl;
	 break;
case 3 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 4 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
default: cout<<"INVALID OPTION"<<endl;
	 break;
}

if(ans4==2)
{
clrscr();
cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT\n"<<endl;
cout<<"AND YOU WON RS.40,000\n"<<endl;
cout<<"NOW YOU MOVE TO FIFTH QUESTION\n"<<endl;
cout<<"HERE IT IS YOUR NEXT ON THE SCREEN FOR RS.50,000\n"<<endl;
cout<<"\r               Q.5 THE FASTEST SHORT WRITER WAS\n"<<endl;
cout<<"\r                1. DR.GD BIRST      2. JRD TATA\n"<<endl;
cout<<"\r                3. JM TAGORE       4. KHUDADA KHAN\n"<<endl;
cout<<"\rTO USE LIFELINES::(Y) ELSE (N)"<<endl;
cin>>lf5;
if(lf5=='y'||lf5=='Y')
{

if(cop==1&&fif==1&&pol==1)
{
cout<<"SORRY YOU DONT HAVE ANY LIFELINE"<<endl;
cout<<"ENTER YOUR ANSWER FOR RS.50,000"<<endl;
}
else
if(cop==0&&fif==0&&pol==0)
{
cout<<"YOUR LIFELINES ARE::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"3.AUDIENCE POLL"<<endl;
cout<<"PRESS::(1) OR (2) OR (3)"<<endl;
cin>>p5;
if(p5==1)
{
cout<<"COMPUTER-ASK:: RIGHT ANSWER IS:: DR.GD BIRST"<<endl;
cop++;
}
if(p5==2)
{
cout<<"FIFTY-FIFTY::DR.GD BIRST/JM TAGORE"<<endl;
fif++;
}
if(p5==3)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  60%"<<endl;
cout<<"		       2.  15%"<<endl;
cout<<"		       3.  11%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.50,000"<<endl;

}

else
if(cop==1&&fif==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"AUDIENCE POLL::\n"<<endl;
cout<<"		      1.  60%"<<endl;
cout<<"		      2.  15%"<<endl;
cout<<"		      3.  11%"<<endl;
cout<<"		      4.  14%"<<endl;
cout<<"\n ENTER YOUR ANSWER FOR RS.50,000"<<endl;
pol++;
}
else
if(cop==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"\nFIFTY-FIFTY::DR.GD BIRST/JM TAGORE"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.50,000"<<endl;
fif++;
}
else
if(fif==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"\nCOMPUTER ASK::RIGHT ANSWER IS:: DR.GD BIRST"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.50,000"<<endl;
cop++;
}

else
if(cop>0)
{
cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.FIFTY-FIFTY"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p5;
if(p5==1)
{
cout<<"FIFTY-FIFTY::DR.GD BIRST/JM TAGORE"<<endl;
fif++;
}
if(p5==2)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  60%"<<endl;
cout<<"		       2.  15%"<<endl;
cout<<"		       3.  11%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.50,000"<<endl;
}
else
if(fif>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p5;
if(p5==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::DR.GD BIRST"<<endl;
cop++;
}
if(p5==2)
{
 cout<<"AUDIENCE POLL:::"<<endl;
cout<<"                 1.  60%"<<endl;
cout<<"			2.  15%"<<endl;
cout<<"			3.  11%"<<endl;
cout<<"			4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.50,000"<<endl;

}
else
if(pol>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p5;
if(p5==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::DR.GD BIRST "<<endl;
cop++;
}
if(p5==2)
{
cout<<"FIFTY-FIFTY::DR.GD BIRST/JM TAGORE"<<endl;
fif++;
}
cout<<"ENTER YOUR ANSWER FOR RS.50,000"<<endl;
}
}
else
cout<<"ENTER YOUR ANSWER FOR RS.50,000"<<endl;
cin>>ans5;
switch(ans5)
{
case 2 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 1 : cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT"<<endl;
	 break;
case 3 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 4 : cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
default: cout<<"INVALID OPTION"<<endl;
	 break;
}


if(ans5==1)
{
clrscr();
cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT\n"<<endl;
cout<<"AND YOU WON RS.50,000\n"<<endl;
cout<<"NOW YOU MOVE TO SIXTH QUESTION\n"<<endl;
cout<<"AND HERE IT IS YOUR NEXT QUESTION ON THE SCREEN FOR RS.60,000\n"<<endl;
cout<<"\r           Q.6 ENGLAND IS THE PLACE ASSOCIATED WITH\n"<<endl;
cout<<"\r             1. SNOOKER      2. POLO\n"<<endl;
cout<<"\r             3. SHOOTING      4. HORSE RACING\n"<<endl;
cout<<"\rTO USE LIFELINES::PRESS (Y) ELSE (N)"<<endl;
cin>>lf6;
if(lf6=='y'||lf6=='Y')
{

if(cop==1&&fif==1&&pol==1)
{
cout<<"SORRY YOU DONT HAVE ANY LIFELINE\n"<<endl;
cout<<"ENTER YOUR ANSWER FOR RS.60,000"<<endl;
}
else
if(cop==0&&fif==0&&pol==0)
{
cout<<"YOUR LIFELINES ARE::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"3.AUDIENCE POLL"<<endl;
cout<<"PRESS::(1) OR (2) OR (3)"<<endl;
cin>>p6;
if(p6==1)
{
cout<<"COMPUTER-ASK:: RIGHT ANSWER IS:: HORSE RACING"<<endl;
cop++;
}
if(p6==2)
{
cout<<"FIFTY-FIFTY::DR.GD BIRST/JM TAGORE"<<endl;
fif++;
}
if(p6==3)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  60%"<<endl;
cout<<"		       2.  15%"<<endl;
cout<<"		       3.  11%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.60,000"<<endl;

}

else
if(cop==1&&fif==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"AUDIENCE POLL::\n"<<endl;
cout<<"		      1.  60%"<<endl;
cout<<"		      2.  15%"<<endl;
cout<<"		      3.  11%"<<endl;
cout<<"		      4.  14%"<<endl;
cout<<"\n ENTER YOUR ANSWER FOR RS.60,000"<<endl;
pol++;
}
else
if(cop==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"FIFTY-FIFTY::HORSE RACING/SHOOTING"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.60,000"<<endl;
fif++;
}
else
if(fif==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"COMPUTER ASK::RIGHT ANSWER IS:: HORSE RACING"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.60,000"<<endl;
cop++;
}

else
if(cop>0)
{
cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.FIFTY-FIFTY"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p6;
if(p6==1)
{
cout<<"FIFTY-FIFTY::HORSE RACING/SHOOTING"<<endl;
fif++;
}
if(p6==2)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  60%"<<endl;
cout<<"		       2.  15%"<<endl;
cout<<"		       3.  11%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.60,000"<<endl;
}
else
if(fif>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p6;
if(p6==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::HORSE RACING"<<endl;
cop++;
}
if(p6==2)
{
 cout<<"AUDIENCE POLL:::"<<endl;
cout<<"			1.  60%"<<endl;
cout<<"			2.  15%"<<endl;
cout<<"			3.  11%"<<endl;
cout<<"			4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.60,000"<<endl;

}
else
if(pol>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p6;
if(p6==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::HORSE RACING "<<endl;
cop++;
}
if(p6==2)
{
cout<<"FIFTY-FIFTY::HORSE RACING/SHOOTING"<<endl;
fif++;
}
cout<<"ENTER YOUR ANSWER FOR RS.60,000"<<endl;
}
}
else
cout<<"ENTER YOUR ANSWER FOR RS.60,000"<<endl;
cin>>ans6;
switch(ans6)
{
case 2 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 4 : cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT"<<endl;
	 break;
case 3 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;

case 1 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
default:cout<<"INVALID OPTION"<<endl;
	 break;

}
if(ans6==4)
{
clrscr();
cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT\n"<<endl;
cout<<"AND YOU WON RS.60,000\n"<<endl;
cout<<"NOW YOU MOVE TO SEVENTH QUESTION\n"<<endl;
cout<<"AND HERE IT IS YOUR NEXT QUESTION ON THE SCREEN FOR RS.70,000\n"<<endl;
cout<<"\r           Q.7 GOLF PLAYER VIJAY SINGH BELONGS TO WHICH COUNTRY\n"<<endl;
cout<<"\r             1. USA      2. FIJI\n"<<endl;
cout<<"\r             3. INDIA      4. VK\n"<<endl;
cout<<"\rTO USE LIFELINES::PRESS (Y) ELSE (N)"<<endl;
cin>>lf7;
if(lf7=='y'||lf7=='Y')
{

if(cop==1&&fif==1&&pol==1)
{
cout<<"SORRY YOU DONT HAVE ANY LIFELINE\n"<<endl;
cout<<"ENTER YOUR ANSWER FOR RS.70,000"<<endl;
}
else
if(cop==0&&fif==0&&pol==0)
{
cout<<"YOUR LIFELINES ARE::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"3.AUDIENCE POLL"<<endl;
cout<<"PRESS::(1) OR (2) OR (3)"<<endl;
cin>>p7;
if(p7==1)
{
cout<<"COMPUTER-ASK:: RIGHT ANSWER IS:: FIJI"<<endl;
cop++;
}
if(p7==2)
{
cout<<"FIFTY-FIFTY::INDIA/FIJI"<<endl;
fif++;
}
if(p7==3)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  15%"<<endl;
cout<<"		       2.  60%"<<endl;
cout<<"		       3.  11%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.70,000"<<endl;

}

else
if(cop==1&&fif==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"AUDIENCE POLL::\n"<<endl;
cout<<"		      1.  15%"<<endl;
cout<<"		      2.  60%"<<endl;
cout<<"		      3.  11%"<<endl;
cout<<"		      4.  14%"<<endl;
cout<<"\n ENTER YOUR ANSWER FOR RS.70,000"<<endl;
pol++;
}
else
if(cop==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"FIFTY-FIFTY::INDIA/FIJI"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.70,000"<<endl;
fif++;
}
else
if(fif==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"COMPUTER ASK::RIGHT ANSWER IS:: FIJI"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.70,000"<<endl;
cop++;
}

else
if(cop>0)
{
cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.FIFTY-FIFTY"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p7;
if(p7==1)
{
cout<<"FIFTY-FIFTY::INDIA/FIJI"<<endl;
fif++;
}
if(p7==2)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  15%"<<endl;
cout<<"		       2.  60%"<<endl;
cout<<"		       3.  11%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.70,000"<<endl;
}
else
if(fif>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p7;
if(p7==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::FIJI"<<endl;
cop++;
}
if(p7==2)
{
 cout<<"AUDIENCE POLL:::"<<endl;
cout<<"			1.  15%"<<endl;
cout<<"			2.  60%"<<endl;
cout<<"			3.  11%"<<endl;
cout<<"			4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.70,000"<<endl;

}
else
if(pol>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p7;
if(p7==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::FIJI "<<endl;
cop++;
}
if(p7==2)
{
cout<<"FIFTY-FIFTY::INDIA/FIJI"<<endl;
fif++;
}
cout<<"ENTER YOUR ANSWER FOR RS.70,000"<<endl;
}
}
else
cout<<"ENTER YOUR ANSWER FOR RS.70,000"<<endl;
cin>>ans7;
switch(ans7)
{
case 1 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 2 : cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT"<<endl;
	 break;
case 3 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;

case 4 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
default: cout<<"INVALID OPTION"<<endl;
	 break;
}

if(ans7==2)
{

clrscr();
cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT\n"<<endl;
cout<<"AND YOU WON RS.70,000\n"<<endl;
cout<<"NOW YOU MOVE TO EIGHT QUESTION\n"<<endl;
cout<<"AND HERE IT IS YOUR NEXT QUESTION ON THE SCREEN FOR RS.80,000\n"<<endl;
cout<<"\r               Q.8 THE REACTION WHICH CONVERTS SUGAR SOLUTION INTO ALCOHOL IS AN \t\t    EXAMPLE OF\n"<<endl;
cout<<"\r                 1. SAPONIFICATION      2. HYDROGENETION\n"<<endl;
cout<<"\r                 3. FERMENTATION       4. HYDROLYSIS\n"<<endl;
cout<<"\rTO USE LIFELINES::PRESS (Y) ELSE (N)"<<endl;
cin>>lf8;
if(lf8=='y'||lf8=='Y')
{

if(cop==1&&fif==1&&pol==1)
{
cout<<"SORRY YOU DONT HAVE ANY LIFELINE\n"<<endl;
cout<<"ENTER YOUR ANSWER FOR RS.80,000"<<endl;
}
else
if(cop==0&&fif==0&&pol==0)
{
cout<<"YOUR LIFELINES ARE::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"3.AUDIENCE POLL"<<endl;
cout<<"PRESS::(1) OR (2) OR (3)"<<endl;
cin>>p8;
if(p8==1)
{
cout<<"COMPUTER-ASK:: RIGHT ANSWER IS:: FERMENTATION"<<endl;
cop++;
}
if(p8==2)
{
cout<<"FIFTY-FIFTY::SAPONIFICATION/FERMENTATION"<<endl;
fif++;
}
if(p8==3)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  15%"<<endl;
cout<<"		       2.  11%"<<endl;
cout<<"		       3.  60%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.80,000"<<endl;

}

else
if(cop==1&&fif==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"AUDIENCE POLL::\n"<<endl;
cout<<"		      1.  15%"<<endl;
cout<<"		      2.  11%"<<endl;
cout<<"		      3.  60%"<<endl;
cout<<"		      4.  14%"<<endl;
cout<<"\n ENTER YOUR ANSWER FOR RS.80,000"<<endl;
pol++;
}
else
if(cop==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"FIFTY-FIFTY::SAPONIFICATION/FERMENTATION"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.80,000"<<endl;
fif++;
}
else
if(fif==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"COMPUTER ASK::RIGHT ANSWER IS:: FERMENTATION"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.80,000"<<endl;
cop++;
}

else
if(cop>0)
{
cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.FIFTY-FIFTY"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p8;
if(p8==1)
{
cout<<"FIFTY-FIFTY::SAPONIFICATION/FERMENTATION"<<endl;
fif++;
}
if(p8==2)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  15%"<<endl;
cout<<"		       2.  11%"<<endl;
cout<<" 	       3.  60%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.80,000"<<endl;
}
else
if(fif>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p8;
if(p8==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::FERMENTATION"<<endl;
cop++;
}
if(p8==2)
{
 cout<<"AUDIENCE POLL:::"<<endl;
cout<<"			1.  15%"<<endl;
cout<<"			2.  11%"<<endl;
cout<<"			3.  60%"<<endl;
cout<<"			4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.80,000"<<endl;

}
else
if(pol>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p8;
if(p8==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::FERMENTATION "<<endl;
cop++;
}
if(p8==2)
{
cout<<"FIFTY-FIFTY::SAPONIFICATION/FERMENTATION"<<endl;
fif++;
}
cout<<"ENTER YOUR ANSWER FOR RS.80,000"<<endl;
}
}
else
cout<<"ENTER YOUR ANSWER FOR RS.80,000"<<endl;
cin>>ans8;
switch(ans8)
{
case 1 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 3 : cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT"<<endl;
	 break;
case 2 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;

case 4 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
default:cout<<"INVALID OPTION"<<endl;
	 break;
}


if(ans8==3)
{

clrscr();
cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT\n"<<endl;
cout<<"AND YOU WON RS.80,000\n"<<endl;
cout<<"YOU MOVE TO NINTH QUESTION\n"<<endl;
cout<<"AND HERE IT IS YOUR NEXT QUESTION ON THE SCREEN FOR RS.90,000\n"<<endl;
cout<<"\r           Q.9 THE SCOTTISH BACTERIOLOGIST WHO DISCOVERED PENICILLIN WAS\n"<<endl;
cout<<"\r             1. ALEXANDER FLEMING      2. MARIE CURIE\n"<<endl;
cout<<"\r             3. ARCHIMEDER       4. STEPHEN HAWKING\n"<<endl;
cout<<"\rTO USE LIFELINES::PRESS (Y) ELSE (N)"<<endl;
cin>>lf9;
if(lf9=='y'||lf9=='Y')
{

if(cop==1&&fif==1&&pol==1)
{
cout<<"SORRY YOU DONT HAVE ANY LIFELINE\n"<<endl;
cout<<"ENTER YOUR ANSWER FOR RS.90,000"<<endl;
}
else
if(cop==0&&fif==0&&pol==0)
{
cout<<"YOUR LIFELINES ARE::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"3.AUDIENCE POLL"<<endl;
cout<<"PRESS::(1) OR (2) OR (3)"<<endl;
cin>>p9;
if(p9==1)
{
cout<<"COMPUTER-ASK:: RIGHT ANSWER IS:: ALEXANDER FLEMING"<<endl;
cop++;
}
if(p9==2)
{
cout<<"FIFTY-FIFTY::STEPHEN HAWKING/ALEXANDER FLEMING"<<endl;
fif++;
}
if(p9==3)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  60%"<<endl;
cout<<"		       2.  11%"<<endl;
cout<<"		       3.  15%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.90,000"<<endl;

}

else
if(cop==1&&fif==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"AUDIENCE POLL::"<<endl;
cout<<"		      1.  60%"<<endl;
cout<<"		      2.  11%"<<endl;
cout<<"		      3.  15%"<<endl;
cout<<"		      4.  14%"<<endl;
cout<<"\n ENTER YOUR ANSWER FOR RS.90,000"<<endl;
pol++;
}
else
if(cop==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"FIFTY-FIFTY::STEPHEN HAWKING/ALEXANDER FLEMING"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.90,000"<<endl;
fif++;
}
else
if(fif==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"COMPUTER ASK::RIGHT ANSWER IS:: ALEXANDER FLEMING"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.90,000"<<endl;
cop++;
}

else
if(cop>0)
{
cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.FIFTY-FIFTY"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p9;
if(p9==1)
{
cout<<"FIFTY-FIFTY::STEPHEN HAWKING/ALEXANDER FLEMING"<<endl;
fif++;
}
if(p9==2)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  60%"<<endl;
cout<<"		       2.  11%"<<endl;
cout<<"		       3.  15%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.90,000"<<endl;
}
else
if(fif>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p9;
if(p9==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::ALEXANDER FLEMING"<<endl;
cop++;
}
if(p9==2)
{
 cout<<"AUDIENCE POLL:::"<<endl;
cout<<"			1.  60%"<<endl;
cout<<"			2.  11%"<<endl;
cout<<"			3.  15%"<<endl;
cout<<"			4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.90,000"<<endl;

}
else
if(pol>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p9;
if(p9==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::ALEXANDER FLEMING"<<endl;
cop++;
}
if(p9==2)
{
cout<<"FIFTY-FIFTY::STEPHEN HAWKING/ALEXANDER FLEMING"<<endl;
fif++;
}
cout<<"ENTER YOUR ANSWER FOR RS.90,000"<<endl;
}
}
else
cout<<"ENTER YOUR ANSWER FOR RS.90,000"<<endl;
cin>>ans9;
switch(ans9)
{
case 3 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 1 : cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT"<<endl;
	 break;
case 2 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;

case 4 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
default:cout<<"INVALID OPTION"<<endl;
	 break;
}

if(ans9==1)
{

clrscr();
cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT\n"<<endl;
cout<<"AND YOU WON RS.90,000\n"<<endl;
cout<<"NOW YOU MOVE TO LAST QUESTION\n"<<endl;
cout<<"AND HERE IT IS YOUR LAST QUESTION ON THE SCREEN FOR RS.1,00,000\n"<<endl;
cout<<"\r           Q.10 THE RULING PARTY OF SINGAPORE, WHERE NO OPPOSITION PARTIES ARE \t\t\tALLOWED IS CALLED\n"<<endl;
cout<<"\r             1. PEOPLES'S PARTY      2. PEOPLE'S ACTION PARTY\n"<<endl;
cout<<"\r             3. LABOUR PARTY       4. COMMUNIST PARTY\n"<<endl;
cout<<"\rTO USE LIFELINES::PRESS (Y) ELSE (N)"<<endl;
cin>>lf10;
if(lf10=='y'||lf10=='Y')
{

if(cop==1&&fif==1&&pol==1)
{
cout<<"SORRY YOU DONT HAVE ANY LIFELINE\n"<<endl;
cout<<"ENTER YOUR ANSWER FOR RS.1,00,000"<<endl;
}
else
if(cop==0&&fif==0&&pol==0)
{
cout<<"YOUR LIFELINES ARE::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"3.AUDIENCE POLL"<<endl;
cout<<"PRESS::(1) OR (2) OR (3)"<<endl;
cin>>p10;
if(p10==1)
{
cout<<"COMPUTER-ASK:: RIGHT ANSWER IS:: PEOPLE'S ACTION PARTY"<<endl;
cop++;
}
if(p10==2)
{
cout<<"FIFTY-FIFTY::LABOUR PARTY/PEOPLE'S ACTION PARTY"<<endl;
fif++;
}
if(p10==3)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  11%"<<endl;
cout<<"		       2.  60%"<<endl;
cout<<"		       3.  15%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.1,00,000"<<endl;

}

else
if(cop==1&&fif==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"AUDIENCE POLL::\n"<<endl;
cout<<"		      1.  11%"<<endl;
cout<<"		      2.  60%"<<endl;
cout<<"		      3.  15%"<<endl;
cout<<"		      4.  14%"<<endl;
cout<<"\n ENTER YOUR ANSWER FOR RS.1,00,000"<<endl;
pol++;
}
else
if(cop==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"FIFTY-FIFTY::LABOUR PARTY/PEOPLE'S ACTION PARTY"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.1,00,000"<<endl;
fif++;
}
else
if(fif==1&&pol==1)
{
cout<<"YOU HAVE ONLY ONE LIFE LINE I.E."<<endl;
cout<<"COMPUTER ASK::RIGHT ANSWER IS:: PEOPLE'S ACTION PARTY"<<endl;
cout<<"\nENTER YOUR ANSWER FOR RS.1,00,000"<<endl;
cop++;
}

else
if(cop>0)
{
cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.FIFTY-FIFTY"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p10;
if(p10==1)
{
cout<<"FIFTY-FIFTY::LABOUR PARTY/PEOPLE'S ACTION PARTY"<<endl;
fif++;
}
if(p10==2)
{
cout<<"AUDIENCE POLL:::"<<endl;
cout<<"		       1.  11%"<<endl;
cout<<"		       2.  60%"<<endl;
cout<<"		       3.  15%"<<endl;
cout<<"		       4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.1,00,000"<<endl;
}
else
if(fif>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.AUDIENCE POLL"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p10;
if(p10==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::PEOPLE'S ACTION PARTY"<<endl;
cop++;
}
if(p10==2)
{
 cout<<"AUDIENCE POLL:::"<<endl;
cout<<"			1.  11%"<<endl;
cout<<"			2.  60%"<<endl;
cout<<"			3.  15%"<<endl;
cout<<"			4.  14%"<<endl;
pol++;
}
cout<<"ENTER YOUR ANSWER FOR RS.1,00,000"<<endl;

}
else
if(pol>0)
{
 cout<<"YOU HAVE TWO LIFELINES I.E.::"<<endl;
cout<<"1.COMPUTER-ASK"<<endl;
cout<<"2.FIFTY-FIFTY"<<endl;
cout<<"PRESS (1) OR (2)"<<endl;
cin>>p10;
if(p10==1)
{
cout<<"COMPUTER-ASK::RIGHT ANSWER IS::PEOPLE'S ACTION PARTY"<<endl;
cop++;
}
if(p10==2)
{
cout<<"FIFTY-FIFTY::LABOUR PARTY/PEOPLE'S ACTION PARTY"<<endl;
fif++;
}
cout<<"ENTER YOUR ANSWER FOR RS.1,00,000"<<endl;
}
}
else
cout<<"ENTER YOUR ANSWER FOR RS.1,00,000"<<endl;
cin>>ans10;
switch(ans10)
{
case 3 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
case 2 : cout<<"CONGRASTULATION YOUR ANSWER IS RIGHT"<<endl;
	 cout<<"AND YOU WON RS.1,00,000"<<endl;
	 break;
case 1 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;

case 4 :  cout<<"YOUR ANSWER IS WRONG YOU CAN GO HOME\n"<<endl;
	 break;
default:cout<<"INVALID OPTION"<<endl;
	 break;
}
}
}
}
}
}
}
}
}

getch();
return 0;
}
