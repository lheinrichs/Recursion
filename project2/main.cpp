#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"
//#include "parser.cpp"
#include "lex.hpp"
using namespace std;

int main()
{
  list p, q;

  /*cout << "Enter two lists for append: ";
  p = read_list();
  q = read_list();
  write_list( append(p, q) );

  cout << "Enter a list for reverse: ";
  p = read_list();
  write_list( reverse(p) );
  */
  // Move the following pre-processor line down as you write a solution for each of
  // the functions.  

  //#ifdef __A_NON_DEFINED_NAME     

  // last
  /*  
  cout << "Enter a list for last: ";
  p = read_list();
  write_list( p );
  write_list( last( p ) );
  
  
  // member
  cout << "Enter two list for member (an atom followed by a list):\n";
  p = read_list();
  q = read_list();
  if( member(p, q) ) cout << "Is a member\n";
  else cout << "Is not a member\n";
  
  // is_lat
  cout << "Enter a list for is_lat: ";
  p = read_list();
  write_list( p );
  if( is_lat(p) ) cout << "is_lat:: The above list is a flat list.\n";
  else cout << "is_lat:: The above list is not a flat list\n";
  
   // list-pair
  cout << "Enter two lists for list-pair: ";
  p = read_list();
  q = read_list();
  write_list( list_pair(p, q) );
 
  // firsts
  cout << "Enter a list for firsts: ";
  p = read_list();
  write_list( firsts(p) );
  
      
  // flat
  cout << "Enter a list for flat: ";
  p = read_list();
  write_list( flat( p ) );
    
  //  Intersection
  cout << "Enter two lists for intersection: ";
  p = read_list();
  q = read_list();
  write_list( intersection(p, q) );
  
  //  List-Union
  cout << "Enter two lists for list_union: ";
  p = read_list();
  q = read_list();
  write_list( list_union(p, q) );
      
  // two_the_same
  cout << "Enter two lists for two_the_same: ";
  p = read_list();
  q = read_list();
  int answer = two_the_same(p,q);
  cout << "answer: " << answer << endl;
  //  write_list( two_the_same(p, q) );
  

  // equal
  cout << "Enter two lists for equal: ";
  p = read_list();
  q = read_list();
  if( equal(p, q) )
    cout << "yay they are equal" << endl;
  else
    cout << "not equal" << endl;
  */
  
  // total_reverse
  cout << "Enter a list for total reverse: ";
  p = read_list();
  write_list( total_reverse(p) );
  
  /* 
  // shape
  cout << "Enter a list for shape: ";
  write_list( shape( read_list() ) );

  /*
  // permute 
  cout << "Enter a list for permute: ";
  write_list( permute( read_list() ) );
  */
  //#endif
  return 0;

}

