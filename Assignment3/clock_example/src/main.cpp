//
//  main.cpp
//  Lab4
//
//  Created by Alireza on 2/14/20.
//  Copyright Â© 2020 Alireza. All rights reserved.
//

#include "main.h"
#include "cycletime.h"
#include "timer.h"
#include <unistd.h>

extern "C"
{
	// get_cyclecount wrapper for SO
	unsigned int getCycleCount(void)
	{
		return get_cyclecount();
	}

	// init_counters wrapper for SO 
	void initCounters(int32_t do_reset, int32_t enable_divider)
	{
		init_counters(do_reset, enable_divider);
	}
}

