#include <stdio.h>
#include <stdlib.h>

int main()
{ int hotdog, hamburger, french_fries, milk_shake, coffee, beef_smokie;
  int item_no, item_quantity, item_price, subtotal, price;

  hotdog = 90;
  hamburger = 300;
  french_fries = 150;
  milk_shake = 150;
  coffee = 70;
  beef_smokie = 40;

  printf("Welcome to Zetech C Snack Shop\n");
  printf("\tToday's Menu\n");
  printf("1. Hot Dog - KES%d\n", hotdog);
  printf("2. Hamburger - KES%d\n", hamburger);
  printf("3. French Fries - KES%d\n", french_fries);
  printf("4. Milk Shake - KES%d\n", milk_shake);
  printf("5. Coffee - KES%d\n", coffee);
  printf("6. Beef Smokie - KES%d\n", beef_smokie);

  printf("Enter Item No: ");
  scanf("%d", &item_no);
  printf("Enter quantity: ");
  scanf("%d", &item_quantity);


  switch(item_price){
  case 1:price = 90;
  break;

  case 2: price = 300;
  break;

  case 3: price = 150;
  break;

  case 4: price = 150;
  break;

  case 5: price = 70;
  break;

  case 6: price = 40;
  break;
  }

  subtotal = price*item_quantity;













    return 0;
}
