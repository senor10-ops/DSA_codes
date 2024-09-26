#include<stdio.h>

enum day{
    sunday,
    monday,

};

int main(){
enum day istoday;
istoday = sunday;
printf("%d", istoday);
return 0;

}