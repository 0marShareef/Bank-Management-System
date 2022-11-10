#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
    FILE *fp;
    char accnum[100];
    printf("Enter your 10 digit account number:");
    scanf("%s",accnum);

    const char *fname = accnum;

    if (access(fname, F_OK) == 0)
    printf("Account number already exists.\n");
    else
    fp = fopen(accnum,"w");
    fclose(fp);
}
