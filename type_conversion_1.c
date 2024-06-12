/*
In C, the type of the value assigned during an assignment operation is called “source type”,
the value assigned is called “source value” and the type of the object to which the assignment is
made is called “target type”. During an assignment operation, the source type and the target type
can be different types. For example, the source type can be double while the target type can be int.
When assigning different types to each other, the value of the source type is converted to the
target type and then the assignment is performed.


For example
int = double
such as an assignment. In this case, the double type is first converted to int
and then the assignment is performed. This is called “automatic type conversion
(implicit type conversion)". This means that an assignment from one type to another
type means that there is an automatic conversion from that type to that type. 
In C, there is automatic conversion between numeric types. However, there may be 
loss of information during these conversions. In this case, the programmer needs 
to estimate what kind of loss will occur.


The following rules are followed in assigning different species to each other:
1) If the value of the source type is within the bounds of the target type, no 
information is lost. Let's for example want to assign a long long int value to the int type: 
If the value in long long int is within the bounds of the int type, no information is lost.

2) When assigning from a large integer type to a small integer type, if the target type is an 
unsigned integer type, the most significant bytes of the source type are lost and the least significant 
bytes are assigned. However, if the target type is a signed integer type, it is up to the authors of the 
compiler to decide how the information is lost (implementation dependent).

#include <stdio.h>
int main(void)
{
int a = 0x12345678;
unsigned short b;
b = a;
printf("%x\n", b); //5678
return 0;

} 
In such cases, if the numbers are in the decimal system, it may seem as if  
a random value is  obtained in the assignment process.  In fact, high bytes
are discarded and  low significant bytes are assigned.

#include <stdio.h>
int main(void)
{
int a = 56732683; //0x0361AC0B 
unsigned short b;

b = a;
printf("%u\n", b); //  0xAC0B = 44043 
return 0;
}
*/
