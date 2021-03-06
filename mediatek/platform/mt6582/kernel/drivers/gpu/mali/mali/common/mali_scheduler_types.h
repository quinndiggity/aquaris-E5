/*
 * (c) ARM Limited 2008-2011, 2013
 */



#ifndef __MALI_SCHEDULER_TYPES_H__
#define __MALI_SCHEDULER_TYPES_H__

#include "mali_osk.h"

#define MALI_SCHEDULER_JOB_ID_SPAN 65535

/**
 * Bitmask used for defered scheduling of subsystems.
 */
typedef u32 mali_scheduler_mask;

#define MALI_SCHEDULER_MASK_GP (1<<0)
#define MALI_SCHEDULER_MASK_PP (1<<1)

#define MALI_SCHEDULER_MASK_EMPTY 0
#define MALI_SCHEDULER_MASK_ALL (MALI_SCHEDULER_MASK_GP | MALI_SCHEDULER_MASK_PP)

typedef enum {
	MALI_SCHEDULER_HINT_GP_BOUND = 0
#define MALI_SCHEDULER_HINT_MAX        1
} mali_scheduler_hint;

#endif /* __MALI_SCHEDULER_TYPES_H__ */




