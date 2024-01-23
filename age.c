#include <stdio.h>

int main() {
  int myAge = 25;
  int votingAge = 18;

  if (myAge >= votingAge) {
    printf("You are elligible for voting!");
  } else {
    printf("You are underage.");
  }
  
  return 0;
}