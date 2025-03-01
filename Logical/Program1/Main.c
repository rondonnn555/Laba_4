
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	target_speed = 500;
	state.ENABLE = 1;
}

void _CYCLIC ProgramCyclic(void)
{
	real_speed = -RFRD_Input;
	
	state_machine(&state);
}

void _EXIT ProgramExit(void)
{

}
