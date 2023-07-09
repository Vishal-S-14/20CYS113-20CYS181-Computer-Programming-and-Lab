#include<stdio.h>
#define PI 3.14
#include<math.h>

enum type{
    circle=1,
    rectangle
};
union dimension{
        enum type type;
        struct shape {
            float radius,area;
            float length, width;
        }s;
    }d;

int main(){
    union dimension d;
    scanf("%d",&d.type);
    
    switch (d.type){
        case 1: 
            scanf("%f",&d.s.radius);
            d.s.area = PI * pow(d.s.radius,2);
            printf("Area of the circle: %.4f units\n", d.s.area);
            break;
        case 2:
            scanf("%f%f", &d.s.length, &d.s.width);
            d.s.area = d.s.length * d.s.width;
            printf("Area of the rectangle: %.4f units\n", d.s.area);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    
return 0;
}