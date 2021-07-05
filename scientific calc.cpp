#include<stdio.h>
#include<math.h>

int fact(int a){
    if(a == 0) return 1;
    else return a*fact(a-1);
}

int main(){
    printf("Enter the operator:\n");
    printf("Note: s = square, r = square root, p = power, c = cube, R = cube root, i = inverse\n");
    printf("I = X^(1/Y), E = 10^X, F = Factorial, M = Modulus, t = tanX, C = cosX, S = sinX, L = logX (base 10), X= cosecX, x = secX\n");
    char o;
    scanf("%c", &o);
    if(o == '+' || o == '-' || o == '*' || o == '/' || o == 'I' || o == 'p'){
        printf("Enter the two operands: \n");
        double a;
        double b;
        scanf("%lf %lf", &a, &b);
        switch (o)
        {
        case '+':
            printf("%lf", a + b);
            break;
        
         case '-':
            printf("%lf", a - b);
            break;

         case '*':
            printf("%lf", a*b);
            break;
        
         case '/':
            printf("%lf", a/b);
            break;

         case 'I':
            printf("%lf", pow(a, 1/b));
            break;

         case 'p':
            printf("%lf", pow(a, b));
            break;
        case 'M':
            printf("%lf", ((int) a) %((int) b) );
            break;

        default:
            break;
        }
    }
    else{
        printf("Enter an operand:\n");
        double x;
        scanf("%lf", &x);
        switch (o)
        {
        case 's':
            printf("%lf", pow(x, 2));
            break;
        
        case 'r':
            printf("%lf", sqrt(x));
            break;

        case 'c':
            printf("%lf", pow(x, 3));
            break;

        case 'R':
            printf("%lf", pow(x, 1/3));
            break;

        case 'E':
            printf("%lf", pow(10,x));
            break;

        case 'i':
            printf("%lf", 1/x);
            break;

        case 't':
            printf("%lf", tan(x));
            break;
        
        case 'C':
            printf("%lf", cos(x));
            break;

        case 'S':
            printf("%lf", sin(x));
            break;

        case 'X':
            printf("%lf", 1/sin(x));
            break;

        case 'x':
            printf("%lf", 1/cos(x));
            break;
        
        case 'L':
            printf("%lf", log10(x));
            break;

        case 'F':
            if(x > 0){
                printf("%d", fact((int) x));
            }
            break;

        default:
            break;
        }
    }
    return 0;
}