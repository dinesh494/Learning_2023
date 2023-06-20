/* Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.*/

#include <stdio.h>

struct box {
  int length;
  int breadth;
  int height;
};

void volume(struct box *ptr) {
  int vol = ptr->length * ptr->breadth * ptr->height;
  printf("Volume of the box = %d\n", vol);
}

void surface_area(struct box *ptr) {
  int l = ptr->length;
  int b = ptr->breadth;
  int h = ptr->height;
  int sa = 2 * (l * b + l * h + b * h);
  printf("Surface area of the box = %d\n", sa);
}

int main() {
  struct box box1 = {10, 20, 30};
  struct box *ptr = &box1;

  // Accessing members of the structure using (*) asterisk or indirection operator and (.) dot operator.
  volume(ptr);
  surface_area(ptr);

  // Accessing members of the structure using ( -> ) Arrow operator using pointer as well as dot representation.
  printf("Volume of the box = %d\n", ptr->length * ptr->breadth * ptr->height);
  printf("Surface area of the box = %d\n", 2 * ((ptr->length) * (ptr->breadth) + (ptr->length) * (ptr->height) + (ptr->breadth) * (ptr->height)));

  return 0;
}
