#include <stdio.h>
#include <stdlib.h>
typedef struct player
{
    char name[21];
    int attack;
    int defend;
    int point;
} Player;

typedef struct team
{
    char name[21];
    Player players[11];
    double avratk;
    double avrdef;
    double avrpoi;
} Team;
Team teams[1001];
int Cmpatk(const void *l, const void *r);
int Cmpdef(const void *l, const void *r);
int Cmppoi(const void *l, const void *r);

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", teams[i].name);
        for (int j = 0; j < 11; j++)
        {
            scanf("%s%d%d%d", teams[i].players[j].name,
                  &teams[i].players[j].attack,
                  &teams[i].players[j].defend,
                  &teams[i].players[j].point);
        }
    }

    for (int i = 0; i < n; i++)
    {
        double sumatk = 0;
        double sumdef = 0;
        double sumpoi = 0;
        for (int j = 0; j < 11; j++)
        {
            sumatk += teams[i].players[j].attack;
            sumdef += teams[i].players[j].defend;
            sumpoi += teams[i].players[j].point;
        }

        teams[i].avratk = sumatk / 11;
        teams[i].avrdef = sumdef / 11;
        teams[i].avrpoi = sumpoi / 11;
    }
    int (*Cmp)(const void *, const void *) = Cmpatk;
    int size = sizeof teams / sizeof *teams;
    qsort(teams, n, sizeof(Team), Cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s ", teams[i].name);
    }
    printf("\n");

    Cmp = Cmpdef;
    qsort(teams, n, sizeof(Team), Cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s ", teams[i].name);
    }
    printf("\n");

    Cmp = Cmppoi;
    qsort(teams, n, sizeof(Team), Cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s ", teams[i].name);
    }
    printf("\n");

    return 0;
}
int Cmpdef(const void *l, const void *r)
{
    Team a = *(Team *)l;
    Team b = *(Team *)r;
    if (a.avrdef < b.avrdef)
    {
        return 1;
    }
    if (a.avrdef > b.avrdef)
    {
        return -1;
    }
    return 0;
}
int Cmppoi(const void *l, const void *r)
{
    Team a = *(Team *)l;
    Team b = *(Team *)r;
    if (a.avrpoi < b.avrpoi)
    {
        return 1;
    }
    if (a.avrpoi > b.avrpoi)
    {
        return -1;
    }
    return 0;
}
int Cmpatk(const void *l, const void *r)
{
    Team a = *(Team *)l;
    Team b = *(Team *)r;
    if (a.avratk < b.avratk)
    {
        return 1;
    }
    if (a.avratk > b.avratk)
    {
        return -1;
    }
    return 0;
}