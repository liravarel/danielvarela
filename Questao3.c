p = i; (correta) 
q = &j; (ilegal. o correto seria q=&j)
p = &*&i; (correta) 
i = (*&)j; (ilegal)
i = *&j; (ilegal. um ponteiro não pode ser atribuido como valor para uma variável)
i = *&*&j; (correta)
q = *p; (ilegais, pois o *p é i=*p)
i = (*p)++ + *q; (correta)
