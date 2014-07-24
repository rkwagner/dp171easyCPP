/**
 * Main driver for 8x8 bitmap.
 * Takes an argument string and returns a bitmap pattern.
 */

#include <stdio.h>

int main(int argc, char * argv[]){
  int var, i;
  for(i=1;i<argc;i++){
    sscanf(argv[i],"%x", &var);
    do{
      printf("%c", var & 0x80 ? 'x':' ');
    }while(var <<= 1);
    printf("\n");
  }
  return 0;
}
