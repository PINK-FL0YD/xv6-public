#include "types.h"
#include "stat.h"
#include "user.h"

int main( int argc, char *argv[] ) {
    printf( 1, "Start Test!\n" );
    printf( 3, "This process PID is ", getpid( ), "\nThen I will fork this process!\n" );
    sleep(3);
    int childPID = fork();
    printf( 3, "\nThen " ,childPID, "Child will kill father" ,kill(getpid()));
    exit( );
}
