#include<stdio.h>
#include<conio.h>
int main()
{
int x=25,y=5,i;
char ch;
  menu:
  clrscr();
  gotoxy(25,5);
  cprintf("1.OPEN ACTIVITY");
  gotoxy(25,7);
  cprintf("2.STATUS");
  gotoxy(25,9);
  cprintf("3.DEPOSIT");
  gotoxy(25,11);
  cprintf("4.WITHDRAWL");
  gotoxy(25,13);
  cprintf("5.UPDATE DETAILS");
  gotoxy(25,15);
  cprintf("6.EXIT");
for(i=0;i<=i;i++)
{
   gotoxy(x,y);
   ch=getch();
   if(ch==13)          //ascii value 13 for enter
   {
     if(x==25&&y==5)   //for activity
     { clrscr();
       gotoxy(10,10);
       cprintf("Opening Activity...");
       gotoxy(25,25);
	cprintf("Press backspace for MAIN MENU");
	    ch=getch();
	    if(ch==8)     //ascii value 8 for backspace
	     goto menu;
     }
     if(x==25&&y==7)   //for status
     { clrscr();
       gotoxy(10,10);
       cprintf("CHECKING STATUS...");
       gotoxy(25,25);
	cprintf("Press backspace for MAIN MENU");
	    ch=getch();
	    if(ch==8)     //ascii value 8 for backspace
	     goto menu;
     }
     if(x==25&&y==9)     //for deposit
     { clrscr();
       gotoxy(10,10);
       cprintf("DEPOSIT Processing");
       gotoxy(25,25);
	cprintf("Press backspace for MAIN MENU");
	    ch=getch();
	    if(ch==8)     //ascii value 8 for backspace
	     goto menu;
     }
     if(x==25&&y==11)       //for withdrawl
     { clrscr();
       gotoxy(10,10);
       cprintf("WITHDRAWL Processing...");
       gotoxy(25,25);
	cprintf("Press backspace for MAIN MENU");
	    ch=getch();
	    if(ch==8)     //ascii value 8 for backspace
	     goto menu;
     }
     if(x==25&&y==13)        //for update details
     { clrscr();
       gotoxy(10,10);
       cprintf("UPDATING DETAILS...");
       gotoxy(25,25);
       cprintf("Press backspace for MAIN MENU");
	    ch=getch();
	    if(ch==8)     //ascii value 8 for backspace
	     goto menu;
     }
     if(x==25&&y==15)      //for exit
     { clrscr();
       return 0;
     }
    }
   switch(ch)
   {
   case 72:y--;   gotoxy(x,y);     	//72 for upkey
		break;
   case 80:y++;  gotoxy(x,y);           //80 for downkey
		break;
   case 77:x++;  gotoxy(x,y);           //77 for rightkey
		break;
   case 75:x--;  gotoxy(x,y);           //75 for leftkey
		break;
   case 27:return 0;   			//27 for escape
  }                    		        //13 ascii value of enter
}

return 0;
}
















