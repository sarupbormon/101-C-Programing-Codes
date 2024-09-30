#include<stdio.h>
int main(){
     
     double marksInPhysics,marksInMath,marksInC,marksInEng,avarage;
     marksInPhysics = 65.00;
     marksInMath = 83.50;
     marksInC =85.75;
     marksInEng = 67.50;
     avarage = (marksInPhysics + marksInMath + marksInC + marksInEng)/4;
     printf("The Avarage mark on 4 Subjects :%.2lf\n",avarage);


    return 0;
}