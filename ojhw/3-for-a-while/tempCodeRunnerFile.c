#include <stdio.h>
int main(){
    int n = 0, k = 0;
    scanf ("%d%d",&n,&k);
    int str[105] = {0};
    for (int i = 0; i < n ; i++ ){
        scanf ("%d",&str[i]);
    }
    int temp = 0;


    int l = 0, r = n - 1;
    while (l < r)
    {while (str[l]<str[k-1])
    {l++;}
    while (str[r]>=str[k-1])
    {r--;}
    if (l >= r){
        break;
    }
    temp = str[l];
    str[l] = str[r];
    str[r] = temp;
        /*if (str[l] >= str[k - 1]){
            l--;
        }
        if (str[r] < str[k - 1]){
            r++;
        }
        l++;
        r--;
        if (str[l] >= str[k - 1] && str[r] < str[k - 1]){
            temp = str[l];
            str[l] = str[r];
            str[r] = temp;
        }*/
    }

    int times = 0;
    for (int i = 0; i < n; i++){
        if (str[i] < str [k-1]){
            times++;
        }
    }
    temp = str[times];
    str[times] = str[k - 1];
    str[k - 1] = temp;


    for (int i = 0; i < n; i++){
        printf ("%d ",str[i]);
    }


    return 0;
}