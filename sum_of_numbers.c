int get_sum(int a , int b) {
    int high, low;
  if(a < b)
    {
    low = a;
    high = b;
  }
  else if(b < a)
    {
    low = b;
    high = a;
  }
  else
    return a;
  
  int sum = 0;
    for(int i = low; i <= high; i++)
      {
        sum += i;
    }
  
  return sum;
}
