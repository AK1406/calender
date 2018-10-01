#include<iostream.h>
#include<conio.h>

void main()
 {
   clrscr();
   int x,y,z,a;
   cout<<"Calender";
   cout<<"Enter the year";
   cin>>x;
   cout<<endl<<"Enter the month=";
   cin>>y;
   cout<<endl<<"Enter the date= ";
   cin>>z;
   a=(x-1992)*365;
   a=a+(x-1992)/4;
   switch(y)
   { case 2:a=a+31;
	    break;
     case 3: a=a+59;break;
     case 4:a=a+90;break;
     case 5:a=a+120;break;
     case 6:a=a+151;break;
     case 7:a=a+181;break;
     case 8:a=a+212;break;
     case 9:a=a+243;break;
     case 10:a=a+273;break;
     case 11:a=a+304;break;
     case 12:a=a+334;break;
     default:cout<<"Invalid";
  }
  if(y<3)
  a--;
  a=a+z;int b=a%7;
  cout<<endl<<"Days you looking for=";
  switch(b)
  { case 1:cout<<"Thursday";break;
  case 2:cout<<"Friday";break;
  case 3:cout<<"Saturday";break;
  case 4:cout<<"Sunday";break;
  case 5:cout<<"Monday";break;
  case 6:cout<<"Tuesday";break;
  default:cout<<"Wednesday";break;
}
getch();
}

