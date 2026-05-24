#include <stdio.h>

  int main()
  {
      const char *hypy[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
      int n, sum = 0;
      scanf("%d", &n);

      while (n > 0) { sum += n % 10; n /= 10; }

      char s[10];
      sprintf(s, "%d", sum);
      int i;
      for (i = 0; s[i]; i++)
          printf("%s%c", hypy[s[i] - '0'], s[i + 1] ? ' ' : '\n');

      return 0;
  }
