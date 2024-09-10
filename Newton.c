#include<stdio.h>
#include<conio.h>
#include<math.h>

double fun(double x){
    return (x*x-4);
}

double der(double x){
    return (2*x);
}

double newton(double x0,double tol){
    double x1;
    while (1)
    {
        x1=x0-(fun(x0)/der(x0));
        if(fabs(x1-x0)<tol){
            break;
        }
        x0=x1;
        
    }
    return x1;
    
}



int main(){
    double x0=3;
    double tol=0.00001;
    double root=newton(x0,tol);
    printf("the root is = %f",root);




}