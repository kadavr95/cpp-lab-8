#include <iostream.h>
#include <conio.h>

void main( )
{
	  int i=0,j;
	  char s[100];
	  char allowed[]="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890-_.";
	  cout<<"Enter e-mail: ";
	  cin.getline(s,100);
	  while ((s[i]!='@') && (s[i]!='\0'))
	  {
	  	i++;
	  }
	  i++;
	  if (s[i]!='\0')
	  {
		  while (s[i]!='\0')
			{
			   j=0;
			   while (allowed[j]!=0 &&  allowed[j]!=s[i])
				  j++;
			   if (allowed[j]=='\0')
			   {
				  cout<<"Invalid e-mail address!";
				  break;
			   }
			   i++;
			}
		  if (s[i]=='\0')
		  {
				cout<<"E-mail is correct";
		  }
	  }
	  else
      cout<<"Invalid e-mail address!";
	  getch();
}
