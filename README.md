# C-Templates-Stl
Vectors, Maps, Lists in C++



//  Components of STL
//  1- Containers
//  2- Algorithms
//  3- Iterators
//  
//  Container: Stores Data like Vector (Implemented Classes)
//  Algorithms: Set of procedures that are used to mainuplate data
//  Iterators: They are Objects that points towward an element (just like pointers)
//  ---------- connects algorithms with containers

Types of Containers:

i- Sequence Containers
  They Store the Data in a Linear Fashion  (0->9->6->6)
  example: Vector,List,Dequeue

  Vectos:-
   a- Random access is fast
   b- Insertion and Deletion in middle is slow but fast at the end 
  
  List:-
  a- Random Access is slow
  b- Insertion in middle is fast 
ii- Associate Containers
  They provide direct access like fast searching, fast deletion (stores in the form of Tree)
  example: Set,MultiSet,Map,Multimap
  In Associate Containers except random access every operation is fast
  
iii- Derived Containers
  They are used for real world modeling 
  example: Stack,Queue,Priority Queue
  Since they deal in real world objects so their time vary everytime



