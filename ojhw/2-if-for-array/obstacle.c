#include <stdio.h>
#include <math.h>
<<<<<<< HEAD
int main(){
    long long int n = 0;
    char track[10000000] = {0};
    long long int xa = 0,xb = 0,xc = 0, ya = 0, yb = 0, yc = 0;
    scanf("%lld%lld%lld%lld%lld%lld",&xa,&ya,&xb,&yb,&xc,&yc);
    long long int x = xa,y= ya;

    if (xa == xb && xb == xc){
        if ((ya < yc && yc < yb) || (yb < yc && yc < ya)){x++; track[n] = 'R'; n++; goto st2;}
        else {goto st2;}}
    else if (ya == yb && yb == yc){
        if ((xa < xc && xc < xb) || (xb < xc && xc < xa)){y++; track[n] = 'U'; n++; goto st1;}
        else {goto st1;}}
    else if (xa == xc || yb == yc){goto st1;}
    else if (ya == yc || xb == xc){goto st2;}
st1: 
    if (x < xb){x++; track[n] = 'R'; n++; goto st1;}
    else if (x > xb){x--; track[n] = 'L'; n++;goto st1;}
    else if (x == xb && y == yb){goto st3;}
    else {goto st2;}
st2:
    if (y < yb){y++; track[n] = 'U'; n++;goto st2;}
    else if (y > yb){y--; track[n] = 'D'; n++;goto st2;}
    else if (x == xb && y == yb){goto st3;}
    else {goto st1;}
st3:
    printf("%d\n%s",n,track);
=======
int main()
{
    long long int n = 0;
    char track[10000000] = {0};
    long long int xa = 0, xb = 0, xc = 0, ya = 0, yb = 0, yc = 0;
    scanf("%lld%lld%lld%lld%lld%lld", &xa, &ya, &xb, &yb, &xc, &yc);
    long long int x = xa, y = ya;

    if (xa == xb && xb == xc)
    {
        if ((ya < yc && yc < yb) || (yb < yc && yc < ya))
        {
            x++;
            track[n] = 'R';
            n++;
            goto st2;
        }
        else
        {
            goto st2;
        }
    }
    else if (ya == yb && yb == yc)
    {
        if ((xa < xc && xc < xb) || (xb < xc && xc < xa))
        {
            y++;
            track[n] = 'U';
            n++;
            goto st1;
        }
        else
        {
            goto st1;
        }
    }
    else if (xa == xc || yb == yc)
    {
        goto st1;
    }
    else if (ya == yc || xb == xc)
    {
        goto st2;
    }
st1:
    if (x < xb)
    {
        x++;
        track[n] = 'R';
        n++;
        goto st1;
    }
    else if (x > xb)
    {
        x--;
        track[n] = 'L';
        n++;
        goto st1;
    }
    else if (x == xb && y == yb)
    {
        goto st3;
    }
    else
    {
        goto st2;
    }
st2:
    if (y < yb)
    {
        y++;
        track[n] = 'U';
        n++;
        goto st2;
    }
    else if (y > yb)
    {
        y--;
        track[n] = 'D';
        n++;
        goto st2;
    }
    else if (x == xb && y == yb)
    {
        goto st3;
    }
    else
    {
        goto st1;
    }
st3:
    printf("%d\n%s", n, track);
>>>>>>> cd56ec5bc1a5e6772db72b415400403d434e55db
    return 0;
}