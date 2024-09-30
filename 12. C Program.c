#include<stdio.h>
int main(){
    int i = 0;
    int j = 0;
    j = i++ + ++i;  //'++i' means pre-increament and 'i++' post-increament
    printf("%d %d",i,j); //'%d' is a format specifier(place holder) and take integer type value in mamory ,Output : 2 2

    return 0;
}