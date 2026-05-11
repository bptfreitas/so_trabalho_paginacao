#include <page_table.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    page_table_t *page_table = (page_table_t*)malloc( sizeof( page_table_t) );

    int ret;

    ret = init_page_table( 4, 8, page_table );

    if (ret != MEM_SZ_GT_VM_SZ ){
        fprintf( stderr, "test error ");
    }


}