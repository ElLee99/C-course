/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
union val { 
    int int_num; 
    float fl_num; 
    char str[20]; 
    }; 
    
    int main() { 
    union val test; 
    test.int_num = 123; 
    printf("%d\n", test.int_num); 
    test.fl_num = 98.76; 
    printf("%f\n", test.fl_num); 
    strcpy(test.str, "hello"); 
    printf("%s\n", test.str); 
    printf("%d\n", test.int_num); 
    printf("%f\n", test.fl_num); 
    printf("%s\n", test.str); 
    return 0; 
    
    } 


#include <stdio.h>
#include <string.h>

typedef struct {
  char make[20];
  int model_year;
  int id_type; /* 0 for id_num, 1 for VIN */
  union {
	int id_num;
	char VIN[20]; 
  } id;
} vehicle;

int main() {  
  vehicle car1;
  strcpy(car1.make, "Ford");
  car1.model_year = 2017;
  car1.id_type = 1;
  strcpy(car1.id.VIN, "abcde56789xyz");
  
  printf("Make: %s\n", car1.make);
  printf("Model Year: %d\n", car1.model_year);
  if (car1.id_type == 0)
	printf("ID: %d\n", car1.id.id_num);
  else
	printf("VIN: %s\n", car1.id.VIN);

  return 0;
  
  
#include <stdio.h>


int main (){
    
union val{
    int int_num;
    float fl_num;
    char str[20];
};

union val info;
union val *ptr = NULL;
ptr = &info;

//Las dos lineas siguientes son lo mismo
ptr-> int_num = 10;
(*ptr).int_num = 10;

printf("info.int_num is %d", info.int_num);

return 0;
}


#include <stdio.h>

union id{
        int id_num;
        char name[20];
    };

void set_id(union id *item){
    item -> id_num = 42;
}

void show_id(union id item){
    printf("ID is %d", item.id_num);
}

int main(){

    

    union id carl;
    union id *ptr = NULL;
    ptr = &carl;
    set_id(ptr);
    show_id(carl);

}


  
