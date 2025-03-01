
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

int current = 0;
UDINT time = 0;

void _INIT ProgramInit(void)
{

}

void _CYCLIC ProgramCyclic(void)
{
	if (enabled == 1) {
		if (time >= (lamp_speed ? 20 : 30)) {
			lamps[current] = 0;
			current = (current + 1) % 4;
			lamps[current] = 1;
		
			time = 0;
		}
	}
	++time;
}

void _EXIT ProgramExit(void)
{

}