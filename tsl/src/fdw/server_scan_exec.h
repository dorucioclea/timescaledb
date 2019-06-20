/*
 * This file and its contents are licensed under the Timescale License.
 * Please see the included NOTICE for copyright information and
 * LICENSE-TIMESCALE for a copy of the license.
 */
#ifndef TIMESCALEDB_TSL_FDW_SERVER_SCAN_EXEC_H
#define TIMESCALEDB_TSL_FDW_SERVER_SCAN_EXEC_H

#include <postgres.h>
#include <nodes/plannodes.h>

extern Node *server_scan_state_create(CustomScan *cscan);

#endif /* TIMESCALEDB_TSL_FDW_SERVER_SCAN_EXEC_H */
