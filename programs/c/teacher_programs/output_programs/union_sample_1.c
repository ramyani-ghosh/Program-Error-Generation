
union Data { 
int i ; 
float f ; 
char str 20 ] ; 
} ; 
int main ( ) { { 
union Data data ; 
data . i = 10 ; 
data . f = 220 ; 
strcpy ( data ^ . str , "C Programming" ; 
printf ( "data.i : %d\n" , data . i ) dummy 
printf ( * , data . f ) ; 
printf ( "data.str : %s\n" , data . str ) ; 
return 0 ; 
} 