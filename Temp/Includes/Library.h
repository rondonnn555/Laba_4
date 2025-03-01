/* Automation Studio generated header file */
/* Do not edit ! */
/* Library  */

#ifndef _LIBRARY_
#define _LIBRARY_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define CMD_SWITCHED_ON 7U
 #define CMD_ENABLED 15U
 #define CMD_SHUTDOWN 6U
 #define STATE_READY 33U
 #define STATE_DISABLED 64U
 #define STATE_SWITCHED_ON 35U
#else
 _GLOBAL_CONST unsigned char CMD_SWITCHED_ON;
 _GLOBAL_CONST unsigned char CMD_ENABLED;
 _GLOBAL_CONST unsigned char CMD_SHUTDOWN;
 _GLOBAL_CONST unsigned char STATE_READY;
 _GLOBAL_CONST unsigned char STATE_DISABLED;
 _GLOBAL_CONST unsigned char STATE_SWITCHED_ON;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct state_machine
{
	/* VAR_INPUT (analog) */
	unsigned short STATE;
	/* VAR_OUTPUT (analog) */
	unsigned short COM;
	/* VAR_INPUT (digital) */
	plcbit ENABLE;
} state_machine_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void state_machine(struct state_machine* inst);


#ifdef __cplusplus
};
#endif
#endif /* _LIBRARY_ */

