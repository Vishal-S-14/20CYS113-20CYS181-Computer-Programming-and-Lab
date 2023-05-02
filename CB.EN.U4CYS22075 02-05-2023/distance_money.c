#include<stdio.h>

int main(){
      double initial,final,odometer;//Declaring Variables
      int money,total_Amount;
      printf("Enter the initial distance: ");
      scanf("%lf",&initial);
      printf("Enter the final distance: ");
      scanf("%lf",&final);
      printf("Enter cost per km: ");
      scanf("%d",&money);
      odometer=final-initial;//Getting Odometer Values
      total_Amount=odometer*money;//Getting the Total Amount
      printf("The total amount for the distance is %d",total_Amount);//Total money for the Odometer
      return 0;
}
