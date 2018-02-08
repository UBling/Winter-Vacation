#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAXX 10
#define MAXY 10
void main() {
    char MAP[MAXX][MAXY];
    char str;
    int x,y,z,f,n;

    for (x=0;x<MAXX;x++) {
        for (y=0;y<MAXY;y++) {
            MAP[x][y]='.';
        }
    }
    srand((unsigned) time(NULL));
RETRY:
    x=0;y=0;str='A';MAP[x][y]=str;

    for (str='B';str<='Z';str++) {
        n=0;
        f=1;
        while (1) {
            n++;
            z=rand()%4;
            switch (z) {
                case 0: if (y+1<MAXY && MAP[x  ][y+1]=='.') {y++;MAP[x][y]=str;f=0;} break;
                case 1: if (x+1<MAXX && MAP[x+1][y  ]=='.') {x++;MAP[x][y]=str;f=0;} break;
                case 2: if (y-1>0    && MAP[x  ][y-1]=='.') {y--;MAP[x][y]=str;f=0;} break;
                case 3: if (x-1>0    && MAP[x-1][y  ]=='.') {x--;MAP[x][y]=str;f=0;} break;
            }
            if (f==0) break;
            if (n>20) {//×êÈëËÀºúÍ¬
                for (x=0;x<MAXX;x++) {
                    for (y=0;y<MAXY;y++) {
                        MAP[x][y]='.';
                    }
                }
                goto RETRY;
            }
        }//while
        if (x==MAXX-1 || y==MAXY-1) break;
    }//for

    for (x=0;x<MAXX;x++) {
        printf("\n");
        for (y=0;y<MAXY;y++) {
            printf("%c",MAP[x][y]);
        }
    }
    printf("\n");
}
