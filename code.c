#include <stdio.h>
// Your C code here
int main(void)
{
	//this is simple for loop
	  int size = 7;
      printf("\n********************************\n");         // Draw the top of the box
      printf("*        Hello CSCI3215        *\n");
      printf("*                              *\n");

      for(int count = 1 ; count <= size ; ++count)
      {
      	printf("* Hello World, We are Team G!! *\n");
      	printf("*   We have finished task %d!   *\n",count);
      	printf("*                              *\n");
	  }

      printf("********************************\n");       // Draw the bottom of the box
      return 0;
        
    return 0;
}
