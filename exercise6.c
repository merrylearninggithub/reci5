#include <stdio.h>

int main() {
   int numbers[] = {1, 4, 5, 6, 2, 8, 0};
   int num_count = sizeof(numbers) / sizeof(numbers[0]);

   int max = numbers[0];
   int min = numbers[0];
   int sum = 0;
   float avg;

   int i;
   for ( i = 0; i < num_count; i++) {
      if (numbers[i] > max) {
         max = numbers[i];
      }
      if (numbers[i] < min) {
         min = numbers[i];
      }
      sum += numbers[i];
   }

   avg = (float)sum / num_count;

   printf("Max: %d\n", max);
   printf("Min: %d\n", min);
   printf("Avg: %.2f\n", avg);

   return 0;
}
