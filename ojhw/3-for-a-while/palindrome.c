#include <stdio.h>
int main (){
    int n = 0;
    char str1[100000]={0};
    char str2[100000]={0};
    scanf ("%d",&n);
    getchar ();
    scanf ("%s",str1);
    int temp = 0;

    if (n % 2 == 0){
        for (int i = 0; i < (n / 2); i++){
            if (str1[i]!='?'){
                printf ("%c",str1[i]);
                str2[]
            } else if (str1[i]=='?'){
                if (str1[n - 1 - i]!='?'){
                    printf ("%c",str1[n - 1 - i]);
                } else if (str1[n - 1 - i]=='?'){
                    printf ("%.2d",temp);

                    temp++;
                }
            }
        }
    }

    
    return 0;
}