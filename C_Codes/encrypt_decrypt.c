#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printfile(FILE *ifp)
{
    int c;
    rewind(ifp);
    while((c=getc(ifp))!=EOF)
        putc(c,stdout);
}

void encrypt(FILE *ifp,FILE *ofp)
{
    int c;
    rewind(ifp);
    while((c=getc(ifp))!=EOF){
        if((c>=65 && c<=77) || (c>=97&& c<=109))
            putc(c+13,ofp);
        else if((c>=78 && c<=90) || (c>=110 && c<=122))
            putc(c-13,ofp);
        else
            putc(c,ofp);
    }
}

void decrypt(FILE *ifp,FILE *ofp)
{
    int c;
    rewind(ifp);
    while((c=getc(ifp))!=EOF){
        if((c>=65 && c<=77) || (c>=97 && c<=109))
            putc(c+13,ofp);
        else if((c>=78 && c<=90) || (c>=110 && c<=122))
            putc(c-13,ofp);
        else
            putc(c,ofp);
    }
}

int main(int argc,char *argv[])
{
    FILE *ifp,*ofp;
    if(argc!=4){
        printf("Need executable,operation,input file,output file");
        exit(1);
    }
    ifp = fopen(argv[2],"r+");
    ofp = fopen(argv[3],"w+");
    if(strcmp(argv[1],"encrypt") == 0){
        printf("%s File before encryption :\n\n", argv[2]);
        printfile(ifp);
        printf("\n\n");
        encrypt(ifp,ofp);
        printf("%s file is encrypted into file %s.\n\n Encrypted text:\n\n", argv[2], argv[3]);
        printfile(ofp);
        printf("\n\n");
    }
    else if(strcmp(argv[1],"decrypt") == 0){
        decrypt(ifp,ofp);
        printf("%s file is decrypted into file %s.\n\nDecrypted text:\n\n", argv[2], argv[3]);
        printfile(ofp);
        printf("\n\n");
    } 
}
