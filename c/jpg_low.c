#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main ()
{    char ch    ;  
srand ( time(NULL) )         ;
int a = rand()  % 400  + 50  ; // Random number 
char  rnd[20]  ;
char buf[526]    ;
const char *homedir = getpwuid(getuid())->pw_dir;
sprintf(rnd, "%d", a);
snprintf(buf,sizeof buf,"%s%s%s%s%s","convert '*.jpg[800x]' -quality 60","%"," ",rnd,"_%03d.jpg" ); 
system(buf);
 return 0;
}

