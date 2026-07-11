void rowWeights(const int weights[], int count, int teams[])
{
  for(int i = 0; i < count; i++)
    {
    if(i % 2 == 0)
        teams[0] += weights[i];
    else
      teams[1] += weights[i];
  }
  
}
