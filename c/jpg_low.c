#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//#include <gtk/gtk.h>
int main (int argc, char *argv[])
{    FILE *p   ;  char ch    ;  
srand ( time(NULL) )         ;
int a = rand()  % 400  + 50  ; // Random number 
char  rnd[20]  ;
sprintf(rnd, "%d", a);
char buf[526]    ;
snprintf(buf,sizeof buf,"%s%s%s%s%s","convert '*.jpg[800x]' -quality 60","%"," ",rnd,"_%03d.jpg" ); 
chdir("/home/pc/Desktop/PIC/");
system(buf);
 /*  p = popen("ver","r");  /* DOS */
p = popen(  "uname","r" );  /* Unix */
    if( p == NULL)
    {
        puts("Unable to open process");
        return(1);
    }
    while( (ch=fgetc(p)) != EOF)
        putchar(ch);
    pclose(p);
 return 0;
}
