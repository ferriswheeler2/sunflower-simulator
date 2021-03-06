#include <stdio.h>
#include "spthr_all.h"

int
pthread_cond_signal(pthread_cond_t *cond)
{
	if (spthr_tas(&spthr_initdone))
	{
		spthr_init();
	}

	if (DEBUG)
	{
		print("pthread_cond_signal...\n");
	}

	if (!spthr_maptbl_isvalid((Maddr)cond))
	{
		return SPTHR_EINVAL;
	}

	/*							*/
	/*	Acccording to the spec, pthread_cond_signal	*/
	/*	unblocks one thread waiting on the cond var;	*/
	/*	wakeup wakes one of the sleepeers (oldest)	*/
	/*							*/
	spthr_wakeup(&cond->sleepq);

	return 0;
}
