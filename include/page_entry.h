#ifndef __PAGE_ENTRY_H__

#define __PAGE_ENTRY_H__


typedef struct {

    int modified;
    int referenced;

    int frame;

} page_entry_t;

#endif
