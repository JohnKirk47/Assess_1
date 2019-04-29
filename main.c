/******************************************************************************

Title: Assessment_1 - Cipher
Student Name: John Kirk
Student Number: c3282196
Due: 29/02/2019
Description: 1) takes regText and key shift converts to an ecryption 
             2) takes the encryptText and coverts to regText

*******************************************************************************/
#include <stdio.h>

int main()
{
	/*declare variables*/
	                        /**/ 
	/*char encryptText[200], lett;*/
	int x;                                     /*i is an iteration counter, key is the key shift*/
                            /**/ 
	printf("SELECT ONE OF THE FOLLOWING FROM THE MENU: \n");
	printf("*1 Rotation Cipher - Encrypt Text \n");
	printf("*2 Rotation Cipher - Decrypt Text \n");
	scanf("%d", &x);

	if (x == 1){
	   char regText[200], lett;
	   int i, key;
	   
	   printf("Enter a message to encrypt: ");         /*message presented to user*/
       scanf("%s", regText);                           /*recieves message to encrypt*/
	   printf("Enter key shift: ");                    /*message presented to the user*/
       scanf("%d", &key);                              /*recieves a key shift value*/
	
    	for(i = 0; regText[i] != '\0'; ++i){            /*for (iteration start; regText position; iteration counter)*/
		    lett = regText[i];
		
	    	if(lett >= 'a' && lett <= 'z'){             /*case for lower case letters*/
		    	lett = lett + key;                      /*takes the letter (from regText) + key shift = encryptText*/
			
		   	if(lett > 'z'){                         /**/
				lett = lett - 'z' + 'a' - 1;        /**/
			}
				regText[i] = lett;                      /**/
	    	}
	    
	    	else if(lett >= 'A' && lett <= 'Z'){        /*case for upper case letters*/
			    lett = lett + key;                      /*takes the letter (from regText) + key shift = encryptText*/
			
			if(lett > 'Z'){                         /*case if letter is greater than Z*/
				lett = lett - 'Z' + 'A' - 1;        /*calculates letter*/
			}
			
			regText[i] = lett;                      /**/
		}
	}
	
	printf("Encrypted message: %s\n", regText);       /*encryptedText displayed to the user*/
	/*printf("Decrypted message: %s \n", encryptText);*/
	
    }
    
    else if(x == 2){
        
        char encryptText[200], lett;                        /**/ 
	    int i, key;                                     /*i is an iteration counter, key is the key shift*/
	
	    printf("Enter a message to encrypt: ");         /*message presented to user*/
	    scanf("%s", encryptText);                                  /*recieves message to encrypt*/
    	printf("Enter key shift: ");                    /*message presented to the user*/
    	scanf("%d", &key);                              /*recieves a key shift value*/
	
	for(i = 0; encryptText[i] != '\0'; ++i){            /*for (iteration start; regText position; iteration counter)*/
		lett = encryptText[i];
		
		if(lett >= 'a' && lett <= 'z'){             /*case for lower case letters*/
			lett = lett - key;                      /*takes the letter (from regText) + key shift = encryptText*/
			
			if(lett > 'z'){                         /**/
				lett = lett + 'z' - 'a' + 1;        /**/
			}
			
			encryptText[i] = lett;                      /**/
		}
		else if(lett >= 'A' && lett <= 'Z'){        /*case for upper case letters*/
			lett = lett - key;                      /*takes the letter (from regText) + key shift = encryptText*/
			
			if(lett > 'Z'){                         /**/
				lett = lett + 'Z' - 'A' + 1;        /**/
			}
			
			encryptText[i] = lett;                      /**/
		}
	}
	
	printf("Decrypted message: %s\n", encryptText);       /*encryptedText displayed to the user*/
    }

	
	return 0;
}
