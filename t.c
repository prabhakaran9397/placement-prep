/*#include <stdio.h>
  int f1() { printf ("Geeks"); return 1;}
  int f2() { printf ("forGeeks"); return 1;}
  int main() 
  { 
  int p = f1() + f2();  
  return 0; 
  }*/

/*#include <stdio.h>
  int x = 20;
  int f1() { x = x+10; return x;}
  int f2() { x = x-5;  return x;}
  int main()
  {
  int p = f1() + f2();
  printf ("p = %d", p);
  return 0;
  }*/

#include <stdio.h>
int main()
{
	/*int i;
	  i = 2;
	  int p = i++*i++;
	  i = 2;
	  int q = i++*++i;
	  i = 2;
	  int r = ++i*i++;
	  i = 2;
	  int s = ++i*++i;
	  printf("%d\n%d\n%d\n%d\n", p, q, r, s);*/
	int i=1, u; 
	u = ++i + ++i + ++i + ++i;
	printf("%d\n", u);
}

