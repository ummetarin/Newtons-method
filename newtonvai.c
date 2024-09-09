#include<stdio.h>
#include<math.h>

double fun(double x){
    return x*x +log(x)-2;
}

double der(double x){
    return 2*x+((1/x)*log10(2.718281828));
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

double x0=1.5;
double tol=0.00001;
double root=newton(x0,tol);
printf("root = %lf",root);



}