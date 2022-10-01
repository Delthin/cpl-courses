#include <stdio.h>
#include <math.h>
#include <ctype.h>
// ctype toupper 变大写
int main()
{
    char first_name[10];
    char last_name[10];
    char gender;
    //[]用来存储一串字符  填写字符的数量减一(有个\0)可以大不能小
    int birth_year;
    int birth_month;
    int birth_day;
    char weekday[10];
    int c_score;
    int music_score;
    int medicine_score;
    int rank;

    scanf("%s%s %c %d-%d-%d %s %d%d%d %*f%*f %d%%",
          //%c不会忽略空格%s会忽略前方的空白符
          //*只识别不赋值，后面不用再加mean sd
          first_name, last_name, &gender, &birth_year, &birth_month, &birth_day,
          weekday, &c_score, &music_score, &medicine_score, &rank);
    //除了【】都要&加地址
    double mean = (c_score + music_score + medicine_score) / 3.0;
    double sd = sqrt(pow(c_score - mean, 2) + pow(music_score - mean, 2) + pow(medicine_score - mean, 2)) / 3.0;
    printf("%s %s \t %c\n"
           "%.2d-%d-%d \t %.3s.\n"
           "C = %d \t Music = %d \t Medicine = %d\n"
           "Mean = %.1f \t SD = %.2f \t Rank = %d%%\n",
           //%%输出百分号
           //%.2d .2使整数至少输出两位数与f不同
           //%.3s最多输出3个字符前三个
           first_name, last_name, toupper(gender), birth_month, birth_day, birth_year, weekday, c_score, music_score, medicine_score, mean, sd, rank);
    //%s字符串 \t
    return 0;
}