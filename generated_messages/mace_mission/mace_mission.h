/** @file
 *  @brief MAVLink comm protocol generated from mace_mission.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_MACE_MISSION_H
#define MAVLINK_MACE_MISSION_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_MACE_MISSION.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{500, 219, 1, 1, 1, 0, 0}, {501, 21, 2, 2, 1, 0, 0}, {502, 12, 18, 18, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_MACE_MISSION

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
#include "./mavlink_msg_request_home_position.h"
#include "./mavlink_msg_home_position_ack.h"
#include "./mavlink_msg_guided_target_stats.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_REQUEST_HOME_POSITION, MAVLINK_MESSAGE_INFO_HOME_POSITION_ACK, MAVLINK_MESSAGE_INFO_GUIDED_TARGET_STATS}
# define MAVLINK_MESSAGE_NAMES {{ "GUIDED_TARGET_STATS", 502 }, { "HOME_POSITION_ACK", 501 }, { "REQUEST_HOME_POSITION", 500 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_MACE_MISSION_H
