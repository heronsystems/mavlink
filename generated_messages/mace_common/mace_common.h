/** @file
 *  @brief MAVLink comm protocol generated from mace_common.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_MACE_COMMON_H
#define MAVLINK_MACE_COMMON_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_MACE_COMMON.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 3

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{12400, 6, 8, 8, 0, 0, 0}, {12401, 67, 21, 21, 1, 0, 0}, {12402, 79, 9, 9, 3, 6, 7}, {12403, 48, 36, 36, 3, 32, 33}, {12404, 108, 1, 1, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_MACE_COMMON

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_mace_heartbeat.h"
#include "./mavlink_msg_mace_set_vehicle_mode.h"
#include "./mavlink_msg_command_short.h"
#include "./mavlink_msg_execute_spatial_action.h"
#include "./mavlink_msg_execute_spatial_action_ack.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 3

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_MACE_HEARTBEAT, MAVLINK_MESSAGE_INFO_MACE_SET_VEHICLE_MODE, MAVLINK_MESSAGE_INFO_COMMAND_SHORT, MAVLINK_MESSAGE_INFO_EXECUTE_SPATIAL_ACTION, MAVLINK_MESSAGE_INFO_EXECUTE_SPATIAL_ACTION_ACK}
# define MAVLINK_MESSAGE_NAMES {{ "COMMAND_SHORT", 12402 }, { "EXECUTE_SPATIAL_ACTION", 12403 }, { "EXECUTE_SPATIAL_ACTION_ACK", 12404 }, { "MACE_HEARTBEAT", 12400 }, { "MACE_SET_VEHICLE_MODE", 12401 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_MACE_COMMON_H
