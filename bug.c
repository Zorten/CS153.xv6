#include "types.h"
#include "user.h"

int main(int argc, char* argv[]){
    printf(1, "checkpoint 1\n");
    int val = 1234 / (argc - 1);
    printf(1, "checkpoint 2\n");
    printf(1, "%d\n", val);
    printf(1, "checkpoint 3\n");
    exit(0);
}