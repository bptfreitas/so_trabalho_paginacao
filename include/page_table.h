#ifndef __PAGE_TABLE_H__

#define __PAGE_TABLE_H__

#include <page_entry.h>


enum page_table_err{

    MEM_SZ_GT_VM_SZ,
    VM_SIZE_NOT_POWER2,
    MEM_SIZE_NOT_POWER2
    
};

typedef struct {


    page_entry_t *table;


} page_table_t;

int init_page_table( int vm_sz, int mem_sz, page_table_t* table);


#endif