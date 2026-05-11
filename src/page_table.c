#include <page_table.h>
#include <stdio.h>


int init_page_table( int vm_sz, int mem_sz, page_table_t* table){

    if ( mem_sz >= vm_sz ){

        fprintf( stderr, "Error initializing page table: virtual memory size lower than memory size");

        return -MEM_SZ_GT_VM_SZ;
    }

    // Checking virtual Memory size for power of 2
    int c = 0;
    for (int sz = vm_sz; sz > 0 ; sz >>= 2 ){
        if ( sz & 0x1 ){
            c++;
            if (c >= 2){
                fprintf(stderr, "Error: Virtual Memory size is not a power of 2");
                return -VM_SIZE_NOT_POWER2;
            }
        }
    }

    // Checking installed memory size for power of 2
    c = 0;
    for (int sz = mem_sz; sz > 0 ; sz >>= 2 ){
        if ( sz & 0x1 ){
            c++;
            if (c >= 2){
                fprintf(stderr, "Error: Virtual Memory size is not a power of 2");
                return -MEM_SIZE_NOT_POWER2;
            }
        }
    }    



    return 0;
}
