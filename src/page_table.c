#include <page_table.h>
#include <stdio.h>


page_table_t* init_page_table( int vm_sz, int mem_sz){

    if ( mem_sz >= vm_sz ){

        fprintf( stderr, "Error initializing page table: virtual memory size lower than memory size");

        return -MEM_SZ_GT_VM_SZ;
    }

    for (int sz = vm_sz; sz > 0 ; sz >>= 2 ){

    }



    return 0;
}
