#include "arrayFuncs.h"
#include "moreArrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  int zeros[3]={0,0,0}; // initializes all elements to 0  
  int empty[] = {};
  int primes[] = {2,3,5,7,11,13,17,19,23,29};
  int meaning[] = {42};
  int mix1[10]={-42,12,-9,56,123,32767,48}; // last three will be zero
  int mix2[10]={-42,12,-9,56,123,32767,48,12,-43,-43};
  int descending[] = {5,4,3,2,1};

  ASSERT_EQUALS( "{3,3,3,3,3}", arrayToString(fiveThrees,5));
  ASSERT_EQUALS( "{0,0,0}", arrayToString(zeros,3));
  ASSERT_EQUALS( "{}", arrayToString(empty,0));
  ASSERT_EQUALS( "{2,3,5,7,11}", arrayToString(primes,5));
  ASSERT_EQUALS( "{2,3,5,7,11,13,17,19,23,29}", arrayToString(primes,10));
  ASSERT_EQUALS( "{42}", arrayToString(meaning,1));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,0,0,0}",arrayToString(mix1,10));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,12,-43,-43}",arrayToString(mix2,10));
  ASSERT_EQUALS( "{5,4,3,2,1}",arrayToString(descending,5));


  ASSERT_EQUALS(15, sum(fiveThrees,5));
  ASSERT_EQUALS(0, sum(zeros,3));
  ASSERT_EQUALS(28, sum(primes,5));
  ASSERT_EQUALS(129, sum(primes,10));
  ASSERT_EQUALS(42, sum(meaning,1));
  ASSERT_EQUALS(32955, sum(mix1,10));
  ASSERT_EQUALS(32881, sum(mix2,10));
  ASSERT_EQUALS(-39, sum(mix1,3));
  ASSERT_EQUALS(-39, sum(mix2,3));
  ASSERT_EQUALS(15, sum(descending,5));
  ASSERT_EQUALS(5, sum(descending,1));


  return 0;
}
