#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
 dew:
 clrscr();
 ofstream fout;
 fout.open("numerology");
 char name[20];
 char ch;
 int z=1,r=0,s1=0,s2,s3=0,g3,s4=0,g4,g5,g2,d,m,y,s5=0,s6=0,g1,g6,a[10];
 cout<<"NOTE:ENTER YOUR NAME IN SMALL LETTERS ONLY"<<endl;
 cout<<"enter the name  :";
 cin>>name;
 for(int i=0;name[i]!=0;i++)
 {
   s1=s1+name[i];
 }
 s2=s1-i*96;
 g2=s2;
 if(s2>9)
 {
   while(s2>0)
   {
     s3=s3+s2%10;
     s2=s2/10;
    }
   g3=s3;
 }
 if(s3>9)
{
  while(s3>0)
  {
    s4=s4+s3%10;
    s3=s3/10;
  }
 g4=s4;
}
if(g2<10)
cout<<"the sum is"<<g2<<endl;
else if(g3<10)
cout<<"the sum is"<<g3<<endl;
else if(g3>9&&g4<10)
cout<<"the sum is"<<g4<<endl;
cout<<"enter the date of birth  :\n";
cin>>d>>m>>y;
int p;
p=d;
if(y>0)
{
   if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
   {
     if(d<0||d>31)
     z=0;
    }
    else if(m==4||m==6||m==9||m==11)
    {
      if(d<0||d>30)
      z=0;
     }
     else if(m==2)
     {
       if(y%100!=0&&y%4==0||y%400==0)
	{
	   if(d<0||d>29)
	   z=0;
	 }
	else if(d<0||d>28)
      z=0;
     }
 }
   else z=0;
   if(z==0)
   {
     cout<<"invalid date";
     goto dew;
   }
  d=d+m+y;
  g1=d;
  if(d>9)
  {
   while(d>0)
   {
     s5=s5+d%10;
     d=d/10;
   }
   g5=s5;
  }
  if(s5>9)
  {
    while(s5>0)
    {
      s6=s6+s5%10;
      s5=s5/10;
    }
    g6=s6;
  }
  if(g1<10)
  cout<<"the sum is"<<g1<<endl;
  else if(g5<10)
  cout<<"the sum is"<<g5<<endl;
  else if(g5>10&&g6<10)
  cout<<"the sum is"<<g6<<endl;
   {
      if(g2<10&&g1<10&&g2==g1)
      r=1;
      else if(g2>10&&g3<10&&g1<10&&g3==g1)
      r=1;
      else if(g3>10&&g4<10&&g1<10&&g4==g1)
      r=1;
      else if(g2<10&&g1>10&&g5<10&&g5==g2)
      r=1;
      else if(g2>10&&g3<10&&g5<10&&g5==g3)
      r=1;
      else if(g3>10&&g4<10&&g5<10&&g4==g5)
      r=1;
      else if(g2<10&&g5>10&&g6<10&&g6==g2)
      r=1;
      else if(g2>10&&g3<10&&g6<10&&g6==g3)
      r=1;
      else if(g3>10&&g4<10&&g6<10&&g6==g4)
      r=1;
   }
   if(r==1)
   {
     cout<<"your name is lucky for you\n";
    }
    else cout<<"your nameis not lucky for you\n";
   cout<<"press a for another check";
   cin>>ch;
   fout<<name<<"\t"<<p<<"/"<<m<<"/"<<y<<endl;
   if(ch=='a')
   goto dew;
   fout.close();
   //getch();
}
