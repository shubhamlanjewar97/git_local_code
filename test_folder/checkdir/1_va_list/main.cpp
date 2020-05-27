/* va_start example */
#include <stdio.h>      /* printf */
#include <stdarg.h>     /* va_list, va_start, va_arg, va_end */

/*void PrintFloats (int n, ...)
{
  int i;
  double val;
  printf ("Printing floats:");
  va_list vl;
  va_start(vl,n);
  for (i=0;i<n;i++)
  {
    val=va_arg(vl,double);
    printf (" [%.2f]",val);
  }
  va_end(vl);
  printf ("\n");
}
int main ()
{
  PrintFloats (3,3.14159,2.71828,1.41421);
  return 0;
}
*/

void new_print(const char* ap_text,...)
{
	char out_str[100] = {"\0"};
	va_list l_valist;
	va_start(l_valist, ap_text);
	vsnprintf(out_str,99,ap_text,l_valist);
	va_end(l_valist);
	printf("%s\n", out_str);
}


int main()
{
	new_print("Int is=%d \nFloat is=%f \nName is=%s",3,5.3,"shubham");
}


