#include <stdio.h>
#include <math.h>
#include <ctype.h>
//ctype toupper 变大写
int main ()
{   
    char first_name[] = "Tayu";
    char last_name[] = "Lo";
    char gender = 'm';
//一个字符单引号
//[]用来存储一串字符  填写字符的数量减一可以大不能小
    int birth_year = 1954;
    int birth_month = 7;
    int birth_day = 20;
    char weekday[] = "Tuesday";
    int c_score = 50;
    int music_score = 99;
    int medicine_score = 78;
    double mean = (c_score + music_score + medicine_score) / 3.0;
    double sd = sqrt(pow(c_score - mean,2) + pow(music_score - mean,2) + pow(medicine_score - mean,2)) / 3.0;
//sqrt 开跟
    int rank = 10;
    printf("%s %s \t %c\n"
    "%.2d-%d-%d \t %.3s.\n"
    "C = %d \t Music = %d \t Medicine = %d\n"
    "Mean = %.1f \t SD = %.2f \t Rank = %d%%\n",
    //%%输出百分号
//%.2d .2使整数至少输出两位数与f不同
//%.3s最多输出3个字符前三个
    first_name, last_name, toupper(gender),birth_month,birth_day,birth_year,weekday,c_score,music_score,medicine_score,mean,sd,rank);
//%s字符串 \t
    return 0;
}