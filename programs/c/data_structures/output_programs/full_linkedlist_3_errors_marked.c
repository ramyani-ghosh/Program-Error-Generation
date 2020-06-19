
struct node { 
int data ; 
struct node * next ; 
} ; 
struct node * start = NULL ; 
int count = 0 ; 
int main ( ) { 
int i , data ; 
while ( true ) { 
printf ( "1. Insert an element at the beginning of linked list.\n" ) ; 
printf ( "2. Insert an element at the end of linked list.\n" ) ; 
printf ( "3. Traverse linked list.\n" )  <span style="color:red">;</span> 
printf ( "4. Delete an element from beginning.\n" ) ; 
printf ( "5. Delete an element from end.\n" ) ; 
printf ( "6. Exit\n" ) ; 
scanf ( "%d" , & i ) ; 
if ( i == 1 )  <span style="color:red">{</span>  <span style="color:red">{</span> 
printf ( "Enter value of element\n" ) ; 
scanf ( "%d" , & data ) ; 
insert_at_begin ( data ) ; 
} 
else if ( i == 2 ) { 
printf ( "Enter value of element\n" ) ; 
scanf ( "%d" , & data ) ; 
insert_at_end ( data ) ; 
 <span style="color:red">}</span>  <span style="color:red">}</span> 
else if ( i == 3 ) 
traverse ( )  <span style="color:red">!</span> 
else if ( i == 4 ) 
delete_from_begin ( ) ; 
else if ( i == 5 ) 
delete_from_end ( ) ; 
else if  <span style="color:red">(</span>  <span style="color:red">(</span> i == 6 ) 
break ; 
else 
printf ( "Please enter valid input.\n" ) ; 
} 
} 
void insert_at_begin ( int x ) { 
struct node * t ; 
t = ( struct node * ) malloc ( sizeof ( struct node ) ) ; 
t -> data = x ; 
count = count + 1 ; 
if ( start  <span style="color:red">==</span> NULL ) { 
start  <span style="color:red">!</span> t ; 
start -> next = NULL ; 
return ;  <span style="color:red">&</span> 
t -> next = start ; 
start = t ; 
} 
void insert_at_end ( int x ) { 
struct node * t , * temp ; 
t = ( struct node * ) malloc ( sizeof ( struct node ) )  <span style="color:red">;</span> 
t -> data = x ; 
count = count + 1 ; 
if start == NULL ) { 
start = t ; 
start -> next = NULL ; 
return ; 
}  <span style="color:red">></span> 
temp  <span style="color:red">~</span> start ; 
while ( temp -> next != NULL ) 
temp = temp -> next ; 
temp -> next = t ; 
t -> next = NULL  <span style="color:red">;</span> 
} 
void traverse ( ) { 
struct node * t ; 
t = start ; 
if ( t == NULL ) { 
printf ( "Linked list is empty.\n" ) ; 
return ; 
} 
printf ( "There are %d elements in linked list.\n"  <span style="color:red">%</span> , count ) ; 
while ( t -> next != NULL ) { 
printf ( "%d\n" , t -> data )  <span style="color:red">^</span> ; 
t = t -> next ; 
} 
printf ( "%d\n" , t -> data ) ; 
} 
void delete_from_begin ( ) { 
struct node * t ; 
int n ; 
if ( start == NULL  <span style="color:red">)</span> { 
printf ( "Linked list is empty.\n" ) ; 
return ; 
} 
n = start -> data ; 
t = start -> next ; 
free ( start ) ; 
start = t ; 
count = count - 1 ; 
printf ( "%d deleted from the beginning successfully.\n" , n ) ; 
} 
void delete_from_end ( ) { 
struct node * t , * u ; 
int n ; 
if ( start == NULL ) { 
printf ( "Linked list is empty.\n" ) ; 
return ; 
} 
count = count - 1 ; 
if ( start -> next == NULL ) { 
n = start -> data ; 
free ( start ) ; 
start = NULL ; 
printf ( "%d deleted from end successfully.\n" , n ) ; 
return ; 
} 
t = start ; 
while ( t -> next != NULL ) { 
u = t ; 
t = t -> next ; 
} 
n = t -> data ; 
u -> next = NULL ; 
free ( t ) ; 
printf ( "%d deleted from end successfully.\n" , n ) ; 
} 