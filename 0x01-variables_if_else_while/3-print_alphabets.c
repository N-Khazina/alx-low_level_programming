#include <stdio.h>                                                  
                                                                    
/**                                                                 
 * main ->  prints the alphabet in lowercase, and then in uppercase
 * Return : always 0                                                
 */                                                                 
int main (void)                                                     
{                                                                   int ch;

for (ch=97;ch<=122;ch++)                                    
				        {                 
    putchar(ch);                                        
								   
								    for (ch=65; ch<=90; ch++) 
	    {
							                putchar(ch);
									        }            
putchar(10); /*this is an ASCII code for a new line*/                                      
					
return (0);                                                 
}