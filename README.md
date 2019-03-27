# PLP3
Exploring C++ Data Types

1. What are the naming requirements for variables in your language?
  *1 to 31 character range.
  
  *All variable names must begin with a letter of the alphabet or an underscore( _ ).  
  
  *After the first initial letter, variable names can also contain letters and numbers.  No spaces or special characters are allowed.
  
  *Uppercase characters are distinct from lowercase characters.  Using all uppercase letters is used to identify constant variables. 
  
  *You cannot use a C++ keyword (reserved word) as a variable name.
  
1. What about naming conventions? Are they enforced by the compiler/interpreter, or are they
just standards in the community?
  
  *They are specific standards in the community, not enforced by compiler.

2. Is your language statically or dynamically typed?
  
  *Statically typed
  
3. Strongly typed or weakly typed?

  *Strongly typed
  
4. If you put this line (or something similar) in a program and try to print x, what does it do? If it
doesn't compile, why? Is there something you can do to make it compile?
x = "5" + 6

  *This would not complie because you would be adding a string and an int, To make it compile, you can just convert the integer and append it to the string.
  
5. Describe the limitations (or lack thereof) of your programming language as they relate to the
coding portion of the assignment (adding ints and floats, storing different types in lists, etc).
Are there other restrictions or pitfalls that the documentation mentions that you need to be
aware of?
 
 *Printing contents of lists and arrays required loops, and had to import a lot of things to make the code work. Functions outside main
 
6. How do type conversions work in your language? Are the conversions narrowing or widening,
and do they work by default or do they have to be declared by the programmer?
  
  *If they are compatible they work by default, if not they have to be declared. The converstations are widening. Type casting is how type conversations work.
