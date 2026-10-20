#define COUNTS_SIZE 128

//  assign char counts to the provided pre-allocated array
//  pre-existing values in array aren't guaranteed to be 0
//  from test string: "aaa", counts['a'] should be == to 3

void count(const char *string, unsigned counts[COUNTS_SIZE]) {
  // zero the array
  memset(counts, 0, COUNTS_SIZE * sizeof(unsigned));

// set all chars to lower case first
   while (*string != '\0')
    {
        unsigned char c = (unsigned char)tolower((unsigned char)*string);
        if (c >= 'a' && c <= 'z')
            counts[c]++;
        string++;
    }
  
    while(*string != '\0')
      {
    
      switch(*string)
        {
          case 'a':
            counts['a']++;
            break;
          case 'b':
            counts['b']++;
            break;
          case 'c':
            counts['c']++;
            break;
          case 'd':
            counts['d']++;
            break;
          case 'e':
            counts['e']++;
            break;
          case 'f':
            counts['f']++;
            break;
          case 'g':
            counts['g']++;
            break;
          case 'h':
            counts['h']++;
            break;
          case 'i':
            counts['i']++;
            break;
          case 'j':
            counts['j']++;
            break;
          case 'k':
            counts['k']++;
            break;
          case 'l':
            counts['l']++;
            break;
          case 'm':
            counts['m']++;
            break;
          case 'n':
            counts['n']++;
            break;
          case 'o':
            counts['o']++;
            break;
          case 'p':
            counts['p']++;
            break;
          case 'q':
            counts['q']++;
            break;
          case 'r':
            counts['r']++;
            break;
          case 's':
            counts['s']++;
            break;
          case 't':
            counts['t']++;
            break;
          case 'u':
            counts['u']++;
            break;
          case 'v':
            counts['v']++;
            break;
          case 'w':
            counts['w']++;
            break;
          case 'x':
            counts['x']++;
            break;
          case 'y':
            counts['y']++;
            break;
          case 'z':
            counts['z']++;
            break;
      } 
      
      string++;
      }
  
      // after a bit of research, the switch statement can be replaced by the below
       // if (*string >= 'a' && *string <= '')
         // {
           // counts[(unsigned char)*string]++;   
          //}
}
