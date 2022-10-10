#include <stdio.h>
#include <math.h>
int main(){
    int n = 0;
    char track[10] = {0};
    int xa = 0,xb = 0,xc = 0, ya = 0, yb = 0, yc = 0;
    scanf("%d%d%d%d%d%d",&xa,&ya,&xb,&yb,&xc,&yc);
    int x = xa,y= ya;

st1: 
    if(abs(x - xc) == 1){goto st2;}    
    else if (x < xb){x++; n++; track[n] = 'R'; goto st1;}
    else if (x > xb){x--; n++; track[n] = 'L'; goto st1;}
    else if (x == xb && y == yb){goto st3;}
    else {goto st2;}
st2:
    if(abs(y - yc) == 1){goto st1;}    
    else if (y < yb){y++; n++; track[n] = 'U'; goto st2;}
    else if (y > yb){y--; n++; track[n] = 'D'; goto st2;}
    else if (x == xb && y == yb){goto st3;}
    else {goto st1;}
st3:
    printf("%d\n%s",n,track);

    return 0;
}