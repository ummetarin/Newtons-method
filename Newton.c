#include<stdio.h>
#include<math.h>  // For pow(), fabs()

// Define the function f(x) = x^(2/3) - 4
double fun(double x) {
    return sqrt(x)-7;
}

// Define the derivative of the function f'(x) = (2/3) * x^(-1/3)
double der(double x) {
    return (1/(2*sqrt(x)));
}

// Implementing the Newton-Raphson method
double newton(double x0, double tol) {
    double x1;
    while (1) {
        x1 = x0 - (fun(x0) / der(x0));  // Update the next approximation
        if (fabs(x1 - x0) < tol) {      // Check if the difference is within tolerance
            break;                      // If yes, stop the iteration
        }
        x0 = x1;                        // Update x0 to the new approximation
    }
    return x1;                          // Return the root approximation
}

int main() {
    double x0 = 50;                      // Initial guess
    double tol = 0.00001;                // Tolerance level
    double root = newton(x0, tol);       // Call the Newton-Raphson function

    printf("The root is = %f\n", root);  // Print the result

    return 0;
}
