
int main  <span style="color:red">(</span>  <span style="color:red">(</span> ) { 
int n  <span style="color:red">;</span> 
printf ( "Enter a positive integer: " ) ; 
scanf ( "%d" , & n ) ; 
printf ( "Factorial of %d = %ld" , n , multiplyNumbers ( n ) ) ; 
return 0 ; 
} 
long int multiplyNumbers ( int n ) { 
if ( n >= 1 ) { 
return n * multiplyNumbers ( n 1  <span style="color:red">~</span> ) ; 
} 
else { 
return 1 ; 
} 
} 