#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void sentenceGenerator(const char *const art[], const char *const noun[],
                       const char *const verb[], const char *const prep[]) {
   int i;
   for ( i = 0; i < 8; i++ ) {
      printf( "%s %s %s %s %s %s\n",
              art [rand() % SIZE],
              noun [rand() % SIZE],
              verb [rand() % SIZE],
              prep [rand() % SIZE],
              art [rand() % SIZE],
              noun [rand() % SIZE]);
   }
}

int main() {
   const char *art [SIZE] = { "yes", "no", "maybe", "okay", "fail" };
   const char *noun[SIZE] = { "into", "outward", "sideways", "up", "down" };
   const char *verb [SIZE] = { "move","step", "fast", "crawl", "slow" };
   const char *prep [SIZE] = { "good", "bad", "often", "rare", "success" };
   
   srand(time(0)); // Seed the random number generator
   sentenceGenerator( art, noun, verb, prep );
   return 0;
}
