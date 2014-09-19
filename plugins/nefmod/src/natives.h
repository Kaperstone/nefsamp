/*======================================================================*\
|| #################################################################### ||
|| # Project New Evolution Freeroam - NEFMOD Core          			  # ||
|| # ---------------------------------------------------------------- # ||
|| # Copyright (c)2011-2014 New Evolution Freeroam  				  # ||
|| # Created by Mellnik                                               # ||
|| # ---------------------------------------------------------------- # ||
|| # http://www.nefserver.net	    	                      		  # ||
|| #################################################################### ||
\*======================================================================*/

#pragma once

#ifndef _NATIVES_H_
#define _NATIVES_H_

#include "main.h"

namespace Native
{
	cell AMX_NATIVE_CALL AddTeleport(AMX *amx, cell *params);
	cell AMX_NATIVE_CALL ProcessTeleportRequest(AMX *amx, cell *params);
	cell AMX_NATIVE_CALL ResolveHostname(AMX *amx, cell *params);
	cell AMX_NATIVE_CALL UnixtimeToDate(AMX *amx, cell *params);
};

#endif /* _NATIVES_H_ */