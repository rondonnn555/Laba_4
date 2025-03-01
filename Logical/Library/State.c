
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "Library.h"
#ifdef __cplusplus
	};
#endif

UINT get_cmd(UINT cur_state) {
	switch (cur_state) {
		case STATE_DISABLED:
			return CMD_SHUTDOWN;
		case STATE_READY:
			return CMD_ENABLED;
		case STATE_SWITCHED_ON:
			return CMD_SWITCHED_ON;
	}
}

void state_machine(struct state_machine* inst) {
	if (!inst->ENABLE) {
		inst->COM = CMD_SHUTDOWN;
	} else {
		UINT new_cmd = get_cmd(inst->STATE & 0x6f);
		inst->COM = new_cmd;
	}
}