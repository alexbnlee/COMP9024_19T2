// recount+.c: recursively count from 0 to argv[1], where argv[1] is +ive
#include <stdlib.h>
#include <stdio.h>

void printn(int, int); // a recursive function

int main(int argc, char *argv[]) {
   int endcount = 0;

   if ((argc != 2) || (sscanf(argv[1], "%d", &endcount) != 1)) {
      fprintf(stderr, "Usage: %s number\n", argv[0]);
      return(EXIT_FAILURE);
   }
   else {
      printn(0, endcount); // print from 0 to endcount recursively
      return EXIT_SUCCESS;
   }
}

void printn(int number, int limit) {
   if (number == limit) {     // base case
      printf("%d\n", number);
   }
   else if (number < limit) { // inductive case
      printf("%d,", number);
      printn(++number, limit);
   }
   // if (number > limit) do nothing
   return;
}
