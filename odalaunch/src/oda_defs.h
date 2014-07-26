// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// $Id$
//
// Copyright (C) 2006-2012 by The Odamex Team.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//	The launchers default settings
//
//-----------------------------------------------------------------------------

#ifndef __ODA_DEFS_H__
#define __ODA_DEFS_H__

// User interface
// --------------

// Get a list of servers when the program is first loaded
#define ODA_UIGETLISTONSTART 1

// Show servers that cannot be contacted because of a firewall or bad connection
#define ODA_UISHOWBLOCKEDSERVERS 0

// Integer ranges for ping quality, these are displayed as icons in the settings
// dialog
#define ODA_UIPINGQUALITYGOOD 150
#define ODA_UIPINGQUALITYPLAYABLE 300
#define ODA_UIPINGQUALITYLAGGY 350


// Querying system
// ---------------

// Master server timeout
#define ODA_QRYMASTERTIMEOUT 500

// Game server timeout
#define ODA_QRYSERVERTIMEOUT 1000

// Number of retries to query the game server
#define ODA_QRYGSRETRYCOUNT 2

// Broadcast across all networks for servers
#define ODA_QRYUSEBROADCAST 0

// Thread multiplier value (this value * number of cores) for querying
#define ODA_THRMULVAL 8

// Default number of threads for single processor/core systems
#define ODA_THRDEFVAL 10 

// TODO: Maximum number of threads
//#define ODA_THRMAXVAL ...

// Network subsystem
// -----------------

#endif // __ODA_DEFS_H__
