#include <stdio.h>
int main() {
 int n, i;
 float avg, sum = 0, total = 0;
int arr[100];
printf("Enter number of elements");
scanf("%d", &n);
 printf("Enter %d elements:\n", n);
 for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
 total += arr[i];  
 }
avg = total / n;
for (i = 0; i < n; i++) {
if (arr[i] > avg) {
 sum += arr[i];  
  }
    }
 printf("Average of array = %.3f\n", avg);
 printf("Sum of elements  = %.2f\n", sum);
 return 0;
}