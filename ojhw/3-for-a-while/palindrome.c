#include <stdio.h>
int main (){
    int n = 0;
    char str1[100000]={0};
    char str2[100000]={0};
    scanf ("%d",&n);
    getchar ();
    scanf ("%s",str1);
    int temp = 0;
    
    int use[201]={0};
    for (int i = 1; i <= 200; i+=2){
        use[i] = i / 20; 
        use[i+1] = ((i + 1) / 2 - 1 ) % 10;
    }
    /*for (int i = 1; i <= 200; i++){
        printf("%d",use[i]);
    }*/

    if (n % 2 == 0){
        for (int i = 0; i < (n / 2); i++){
            if (str1[i]!='?'){
                printf ("%c",str1[i]);
                str2[n / 2 - i - 1] = str1[i];
            } else if (str1[i]=='?'){
                if (str1[n - 1 - i]!='?'){
                    printf ("%c",str1[n - 1 - i]);
                    str2[n / 2 - i - 1] = str1[n - 1 - i];
                } else if (str1[n - 1 - i]=='?'){
                    printf ("%d%d",use[2 * temp + 1],use[2 * temp + 2]);
                    str2[n / 2 - i - 1] = str1[i];
                    temp++;
                }
            }
        } for (int i = 0; i < (n / 2); i++){
            if (str2[i] == '?'){
                printf("%d%d",use[2 * temp],use[2 * temp - 1]);
                temp--;
            } else {printf ("%c",str2[i]);}
        }
    }

    if (n % 2 != 0){
        for (int i = 0; i < ((n - 1) / 2); i++){
            if (str1[i]!='?'){
                printf ("%c",str1[i]);
                str2[(n - 3) / 2 - i] = str1[i];
            } else if (str1[i]=='?'){
                if (str1[n - 1 - i]!='?'){
                    printf ("%c",str1[n - 1 - i]);
                    str2[(n - 3) / 2 - i] = str1[n - 1 - i];
                } else if (str1[n - 1 - i]=='?'){
                    printf ("%d%d",use[2 * temp + 1],use[2 * temp + 2]);
                    str2[(n - 3) / 2 - i] = str1[i];
                    temp++;
                }
            }
        } if (str1[(n - 1) / 2] != '?')
        {printf ("%c",str1[(n - 1) / 2]);
        } else {printf ("99");}
        for (int i = 0; i < ((n - 1) / 2); i++){
            if (str2[i] == '?'){
                printf("%d%d",use[2 * temp],use[2 * temp - 1]);
                temp--;
            } else {printf ("%c",str2[i]);}
        }
    }
    
    return 0;
}