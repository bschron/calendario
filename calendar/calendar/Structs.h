//
//  Structs.h
//  calendar
//
//  Created by Bruno Chroniaris on 11/5/14.
//  Copyright (c) 2014 UNIUM automação. All rights reserved.
//

#ifndef calendar_Structs_h
#define calendar_Structs_h

#include "Headers.h"

typedef struct calendar Calendar;
typedef struct event Event;


struct calendar
{
    Event *events;
};

struct event
{
    Event *next;
    Event *previous;
    
    char title[max];
    char desc[description];
    int day;
    int month;
    int year;
};

#endif
