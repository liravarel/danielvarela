int main(){ 

	 float x3[3] = {3,6,9,25};
         int x2[3] = {3,6,9,25}; 	
         char x1[3] = {"3233"}; 	
         double x4[3] = {3,6,9,25}; 	
         int i; 	 
         for(i=0;i<3;i++){ 	
         printf(" tipo float -- x + %d = %p \n",i+1 ,(x3+i)); 
	}
         for(i=0;i<3;i++){ 	
         printf(" tipo int -- x + %d = %p \n",i+1 ,(x2+i)); 	
        } 
         for(i=0;i<3;i++){ 	
         printf(" tipo char -- x + %d = %p \n",i+1 ,(x1+i)); 	
        } 	
         for(i=0;i<3;i++){ 	
         printf(" tipo double -- x + %d = %p \n",i+1 ,(x3+i)); 	
        } 	
       }
