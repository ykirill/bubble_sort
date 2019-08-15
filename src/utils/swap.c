//
// Created by bootcamp on 2019-08-15.
//

void swap(int *first_pointer, int *second_pointer){
    int temp = *first_pointer;
    *first_pointer = *second_pointer;
    *second_pointer = temp;
}
