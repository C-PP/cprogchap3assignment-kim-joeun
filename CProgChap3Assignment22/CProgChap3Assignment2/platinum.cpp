#include <stdio.h>
int main(void) 
{
	int age;    /* user age             */

	printf("나이: ");/*get input from the user  */
	scanf("%d", &age);     
;
	printf("%.2f초\n",3.156e7*age); /*1년은 약3.156e7초*/
	getchar();
	getchar();
	return 0;
}