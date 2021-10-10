#include <stdio.h>
#include <string.h>
int main()
{	
	  char email[100];
	   int length ;
	   char c;
	   int At = -1, Dot = -1;	  
    printf("Enter a email: ");
    scanf("%s", email);
   length = strlen(email);  
   if (email[0] == '@' ||email[0] == '.'){
     printf("Invalid . Try Again!");
   }
 else if (email[0]>= 'a' && email[0] <= 'z'	|| email[0] >= 'A' && email[0] <= 'Z') {
     
	for (int i = 0;i < length; i++) {

		// If the character is '@'
		if (email[i] == '@') {

			At = i;
		}
		else if (email[i] == '.') {
		Dot = i;
		}
	}if (At == -1 || Dot == -1 || Dot >= (length - 1))
		{
		    printf("Invalid . Try Again!");
		}
	 else if (At > Dot)
		{
		    printf("Invalid . Try Again!");
		}
		else {
		    printf("Valid");
		}
 }
 else if (email[0]>= '0' && email[0] <= '9'){
     printf("Invalid . Try Again!");
 }
	else {
	    printf("Valid");
	}
}
