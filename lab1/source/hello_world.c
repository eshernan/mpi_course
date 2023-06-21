#include "mpi.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main( int argc, char *argv[] )
{
    int rank, size;
    MPI_Init( &argc, &argv );
    MPI_Comm_rank( MPI_COMM_WORLD, &rank );
    MPI_Comm_size( MPI_COMM_WORLD, &size );
    printf( "I am %d of %d  ", rank, size );
    printf("My current process id is %ld\n", (long)getpid());
    MPI_Finalize();
    return 0;
}