struct Node <br/>{ <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspint data ; <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspstruct Node * next ; <br/>}  <span style="color:red">;</span> <br/>void push ( struct Node * * head_ref , int new_data ) <br/>{ <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspstruct Node * new_node = ( struct Node * ) malloc ( sizeof ( struct Node ) ) ; <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspnew_node -> data  <span style="color:red">!</span> new_data ; <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspnew_node -> next = ( * head_ref ) ; <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp <span style="color:red">(</span>  <span style="color:red">(</span> * head_ref )  <span style="color:red">=</span> new_node ; <br/>} <br/>int getCount ( struct Node * head ) <br/>{ <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspif ( head == NULL ) <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspreturn 0 ; <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspreturn 1 + getCount ( head -> next ) ; <br/>} <br/>int main ( ) <br/>{ <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspstruct Node * head = NULL ; <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsppush ( & head , 1 ) ; <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsppush ( & head , 3 ) ; <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsppush (  <span style="color:red">|\|</span> head , 1 ) ; <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsppush ( & head , 2 ) ; <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsppush ( & head , 1 ) ; <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspprintf ( "count of nodes is %d" , getCount ( head ) )  <span style="color:red">;</span>  <span style="color:red">;</span> <br/>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspreturn 0 ; <br/>} 