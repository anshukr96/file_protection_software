/* file protecction software */
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<io.h>
void main(){
  int i,test;
  char s[] = {" #File/folder protection Software !"},ch,FN[20];
  start:
  clrscr();
  gotoxy(14,5);
  textcolor(2);
  cprintf("__________________________________________");
  gotoxy(14,6);
  cprintf("__________________________________________");
  gotoxy(14,10);
  cprintf("__________________________________________");
  gotoxy(18,8);
  textcolor(10);
  for(i=0;s[i]!='\0';i++)
  {
    _setcursortype(0);      /* 0,1,2 can be passed as argument to get cursore style */
    cprintf("%c",s[i]);
    delay(50);
    sound(1500);
    delay(50);
    nosound();

  }
  textcolor(2);
  gotoxy(22,12);
  cprintf("1.HIDE A FILE/FOLDER ");
  gotoxy(22,14);
  cprintf("2. SHOW A FILE/FOLDER ");
  gotoxy(22,16);
  cprintf("3: HELP ");

  gotoxy(18,24);
  cprintf("DESIGNED & DEVELOPMENT BY ANSHU");
  gotoxy(16,18);
  cprintf("ENTER YOUR CHOICE :->>");

  ch = getch();
  if(ch==27)  /*IF USER PRINT ESCAPE KEY */
     exit(1);
  switch(ch)
  {
  case  '1' : clrscr();
	      gotoxy(15,6);
	      textcolor(2);
	      cprintf("_______________________________");
	      gotoxy(15,7);
	      cprintf("_______________________________");
	      gotoxy(15,12);
	      cprintf("_______________________________");
	      gotoxy(17,9);
	      cprintf("ENTER Correct File Path");
	      gotoxy(17,11);
	      cprintf("$ :");
	      fflush(stdin);
	      gets(FN);
	      test = _chmod(FN,1,FA_SYSTEM | FA_HIDDEN | FA_RDONLY);
	      if(test==-1)
	       {
		 clrscr();
		 gotoxy(19,9);
		 sound(1000);
		 delay(200);
		 cprintf("UNABLE TO HIDE File / Folder ! ");

	       }
	      else
	      {
		  clrscr();
		  gotoxy(19,9);
		  cprintf("Operation executed successfully !");
	      }
	      nosound();

	      break;

case  '2'  :  clrscr();
	      gotoxy(15,6);
	      textcolor(2);
	      cprintf("_______________________________");
	      gotoxy(15,7);
	      cprintf("_______________________________");
	      gotoxy(15,12);
	      cprintf("_______________________________");
	      gotoxy(17,9);
	      cprintf("ENTER Correct File Path");
	      gotoxy(17,11);
	      cprintf("$ :");
	      fflush(stdin);
	      gets(FN);
	      test = _chmod(FN,1,0);
	      if(test==-1)
	       {
		 clrscr();
		 gotoxy(19,9);
		 sound(1000);
		 delay(200);
		 cprintf(" Unable to Show File / Folder");

	       }
	      else
	      {
		  clrscr();
		  gotoxy(19,9);
		  cprintf("Operation executed successfully !");
	      }
	      nosound();

	      break;

case '3'    :  clrscr();
	       gotoxy(9,6);
	       textcolor(2);
	       cprintf("________________________________________");
	       gotoxy(9,7);
	       cprintf("________________________________________");
	       gotoxy(9,16);
	       cprintf("________________________________________");
	       gotoxy(14,9);
	       cprintf("ENTER FULL PATH OF FILE / FOLDER IN FOLLOWIING FORMAT");
	       gotoxy(16,11);
	       cprintf("Example :- if your file/folder present in E drive ");
	       gotoxy(24,13);
	       cprintf("Then e:\\File Name of folder name ");
	       gotoxy(12,15);
	       cprintf("nnote :- Providing the extensions of file is compulsory");

	       break;

default     :  clrscr();
	       sound(1000);
	       gotoxy(19,9);
	       cprintf("PLEASE INPUT CORRECT CHOICE !");
	       nosound();
	       break;
  }

  goto start;
  delay(5000);
}