//cs202 start
#include "types.h"
#include "user.h"

int main(int argc, char** argv) {
    printf(1, "%d,",info(1));
    printf(1, "%d,",info(2));
    printf(1, "%d,",info(3));
    lottery_fork(50);
    lottery_fork(100);
    lottery_fork(250);
    int start = uptime();
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 1000000000; j++)
            asm volatile("nop;\n");
        //printf(2, "%d:%d for 1G nop\n", getpid(), uptime() - start);
        printf(2, "%d,%d,%d\n", getpid(), i, uptime() -start);
    }
    exit();
}

/*
#include   "types.h"
#include   "user.h"

int   main ( int  argc,  char   * argv[])
{

    int   Scheduler ( void );

    Scheduler ();
    return   0 ;
}


int   Scheduler ( void ){

    int  pid;
    int  i,j,k;


    for  (i  =   0 ; i  <   3 ; i ++ ) {
        pid  =   lottery_fork (30 - 10 * i);
        if  (pid  >   0  ) {
            continue ;}
        else   if  ( pid  ==   0 ) {


            for  (j = 0 ;j < 50000 ;j ++ ) {
                for (k = 0 ;k < 1000 ;k ++ ) {
                    asm ( "nop" ); }}
            printf ( 1 ,  " \n  child# %d with %d tickets has finished!  \n " , getpid (), 30 - 10 * i);
            exit ();
        }
        else  {
            printf ( 2 , "  \n  Error  \n " );

        }
    }

    if (pid  >   0 ) {
        for  (i  =   0 ; i  <   3 ; i ++ ) {
            wait (  );

        }

    }
    exit ();
    return   0 ;}*/


//cs202 end