// Given an integer as input, can you round it to the next 
// (meaning, "greater than or equal") multiple of 5?

int round_to_next5(int n) {

    while(n % 5 != 0)
      {
        n++;
    }
  
  return n;

}
