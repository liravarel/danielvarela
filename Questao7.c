p = mat + 1;	
p = mat++;	
p = ++mat;	
x = (*mat)++; 	

//Resultado: apenas p=mat+1; e x=(*mat)++; estão corretas, porque não pode incrementar
valor do tipo int ao ponteiro.
