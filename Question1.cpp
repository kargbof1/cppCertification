 int main(void) {
     int i = 1, j = 2;
     if (i > j && j > i)
         i++; //1
     if (i > j || j > i)
         j++; //3
     if (i | j)
         i++; //1+1 = 2
      if (i & j)
         j++; //3 +1 = 4
     cout << i * j << endl; //4 * 2 = 8
     return 0;
 }
