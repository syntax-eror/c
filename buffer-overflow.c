#include <stdio.h>
void User_Input ()
{
  char day [8];
  printf("Enter day:\n");
  scanf("%s", day);
  printf("It is %s", day);
}

int main ()
    
{
  User_Input();
  return 0;
}
