#include "types.h"
#include "stat.h"
#include "user.h"

int main( int argc, char *argv[] ) {
    printf( 1, "Start Test!\n" );
    sleep(3);
    fork();
    exit( );
}
