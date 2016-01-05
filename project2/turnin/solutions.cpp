/*Author: Lauren Heinrichs
File: Project 2
Date: 2/27/15
*/

#include "reclists.hpp"
#include "solutions.hpp"

list append( list p, list q )
{
  if( is_null( p ) ) return q;
  return cons( car(p), append( cdr(p), q ));
}

list reverse( list p )
{
  if( is_null(p) || atom(p) ) return p;
  return append( reverse( cdr(p) ), cons(car(p), null() )) ;
}


//takes a non-atomic list and returns true if the list is a list(potentially empty) of atoms. 
//bombs out if p is an atom
int is_lat(list p)
{
  if(is_null(p))
    return true;
  if( !atom(car(p)))
    return false;
  return is_lat(cdr(p));
}


//p is an atom and q is a non-atomic list. member returns true if p appears anywhere in q.
//if p is not an atom or q is not a non-atomic list, the function returns false
int member(list p, list q)
{
  if(is_null(q) || is_null(p))
    return false;
  if(atom(car(q)))
    {
      if(eq(p,car(q)))
	return true;
      else
	return member(p, cdr(q));
    }
    return member(p, cdr(q)) || member(p, car(q));
}


//returns the last element of a non-atomic, non-empty list without using reverse
list last(list p)
{
  if(is_null(cdr(p)))
    return p;
  return last(cdr(p));
}


//takes two lists of atoms of the same length and returns a list that consists of lists of two atoms each, which are the corresponding atoms paired up
list list_pair(list p, list q)
{
  if(is_null(p) && is_null(q))
    return null();
  return cons( cons(car(p), cons(car(q),null())), list_pair(cdr(p),cdr(q)));
}


//takes an argument a list whose elements are lists of atoms and returns a list which contains the first element from each of the lists
list firsts(list p)
{
  if(is_null(p))
    return null();
  return cons(car(car(p)), firsts(cdr(p)));
}

//takes a non-atomic list and returns a list which is the original list with the parenthesis removed..except the outer parenthesis 
list flat(list p) 
{
  if(is_null(p))
    return null();
  if(atom(p))
    return cons( p, null());
  return append(flat(car(p)),flat(cdr(p)));
}


//takes two non-atomic recursive lists and returns true if p and q contain at least one atom in common
int two_the_same(list p, list q) 
{
  if(is_null(p) && is_null(q))
    return true;
  if(atom(p))
     return member(p,q);
  return two_the_same(car(p),q) || two_the_same(cdr(p),q); 

}

//takes two arbitrary recursive lists and determines if they are identical, that is the parentheses are all in the same place and the atoms agree
//as to place and name. 
int equal(list p, list q)
{
  if(is_null(p) && is_null(q))
    return true;
  if(atom(p) && atom(q))
    return eq(p,q);
  if(equal(car(p),car(q)))
    return equal(cdr(p),cdr(q));
}


//takes a recursive list and writes its mirror image. it is the extension of reverse that reverses the list and each sub-list, recurisvely unto the nth generation
list total_reverse(list p)
{
  if(is_null(p))
    return p;
  if(atom(p))
    return p;
  return append(total_reverse(cdr(p)), cons(total_reverse(car(p)), null()));
}


//takes a non-atomic list and returns a list that consists of only the parentheses in the orginal
list shape(list p)
{
  if(is_null(p))
    return null();
  if(atom(car(p)))
    return shape(cdr(p));
  if(atom(cdr(p)))
    return shape(car(p));
  return cons(shape(car(p)),shape(cdr(p)));

}


//p and q are lists of atoms with no atom appearing twice in p and no atom appearing twice in q. p and q represent sets. this forms the intersection.
list intersection(list p, list q)
{
  if(is_null(p) || is_null(q))
    return null();
  if(member(car(p),q))
    return cons(car(p),intersection(cdr(p),q));
  return intersection(cdr(p),q);
}

//forms the set which is their union--if p and q share an atom, the atom appears only once in the union
list list_union(list p, list q)
{
  if(is_null(p))
    return q;
  if(!member(car(p),q))
    return cons(car(p), list_union(cdr(p), q));
  return list_union(cdr(p),q);
}


//extra credit
//p is a list of atoms. this returns a list whose elements are lists of atoms, each of which is a different permutation of the original list p. all the permutations of p should
//appear once and only once in what the function returns
list permute(list p)
{
  if(is_null(p))
    return p;

  return cons(p, cons(cons(car(p),reverse(cdr(p))),null()));


}

