#include <stdio.h>
#include <string.h>

int countGoodEnteries(char *str)
{
  int count = 0;
  int legnth = strlen(str);
  for(int i = 0; i < legnth; i++)
    {
      char current = str[i];
      char prev = (i > 0) ? str[i - 1]: '\0';
      char next = (i < legnth - 1) ? str[i + 1]: '\0';

      if(current == prev + 1 && current == next - 1)
      {
        count++;
      }
    }
  return count;


}

int main(){
int result = countGoodEnteries("abc");
printf("There is/are %d Good Cell/s",result);
printf("This interpeter is shit! XD");
  return 0;
}