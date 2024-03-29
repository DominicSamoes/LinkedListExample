#pragma once
//Author: Dominic Samo
//Institution: University of Eswatini
//Majors: B.SC. Computer Science & Physics

typedef  char* DataType;

struct node 
{ DataType data;
  node* next;
};

typedef  node*  List;
           
void Init  (List&);
bool IsEmpty (List );
void  Insert (DataType, List&);
void  Delete (DataType, List&); 
void  ShowData (List);
