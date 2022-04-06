#include "types.h"
#include "user.h"

int
main (int argc, char **argv)
{
    printf(1, "hello cs153\n"); // fd=1 means standard output.
    printf(1, "hi there breakpoint\n");
    return 0;
    //change
    //exit(0);
}