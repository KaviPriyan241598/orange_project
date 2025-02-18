#include<stdio.h>
enum week{sun,mon,tue,wed,thu,fri,sat};
enum month{jan,feb,mar,apr,may,jun,aug,sep,oct,nov,dec};
void main()
{
    enum week name;
    name=tue;
    printf("%d",name);
    enum month names;
    names=feb;
    printf("\n%d",names);
}
