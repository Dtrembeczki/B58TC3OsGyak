#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer;
    fpointer = fopen("B58TC3.txt", "w");

    fprintf(fpointer, "Nev: Trembeczki David \nNK: B58TC3 \nSzak: Mernokinfo\nOS Feladat");

    fclose(fpointer);

    Sleep(120);

    printf("Loading\t");
    load();
    printf("\n\nKesz a B58TC3.txt File!");


    return 0;
}//End of main


void load(){ //Loading Bar


    for(int i; i < 5; i++){
        Sleep(280);
        printf(".");

    }


}//end of load

//Trembeczki David | B58TC3
