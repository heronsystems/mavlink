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
#define MAVLINK_THIS_XML_IDX 4

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{12500, 132, 5, 5, 0, 0, 0}, {12501, 219, 1, 1, 1, 0, 0}, {12502, 21, 2, 2, 1, 0, 0}, {12503, 232, 4, 7, 3, 2, 3}, {12504, 57, 3, 6, 3, 0, 1}, {12505, 13, 4, 7, 3, 2, 3}, {12506, 117, 37, 40, 3, 32, 33}, {12507, 71, 19, 19, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_MACE_MISSION

// ENUM DEFINITIONS


/** @brief Type of mission items being requested/sent in mission protocol. */
#ifndef HAVE_ENUM_MAV_MISSION_STATE
#define HAVE_ENUM_MAV_MISSION_STATE
typedef enum MAV_MISSION_STATE
{
   MAV_MISSION_CURRENT=0, /* Items are mission commands for main auto mission and are received via the autopilot and aircraft module. | */
   MAV_MISSION_ONBOARD=1, /* Items are mission ready and have been acknowledged by the aircraft module for processing. | */
   MAV_MISSION_PROPOSED=2, /* Items are mission ready but have been generated by a module not related to the aircraft and need to be pushed towards the appropriate aircraft module. | */
   MAV_MISSION_RECEIVED=3, /* Items have been distributed and received by the appropriate MACE instance connected to the associated module. They however have yet to be marked as current or onboard. Often this state is reflected via communication between external link modules. | */
   MAV_MISSION_OUTDATED=4, /* Items were once relevant to the system have been since replaced with newer current missions. | */
   MAV_MISSION_STATE_ENUM_END=5, /*  | */
} MAV_MISSION_STATE;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_new_onboard_mission.h"
#include "./mavlink_msg_request_home_position.h"
#include "./mavlink_msg_home_position_ack.h"
#include "./mavlink_msg_mace_mission_count.h"
#include "./mavlink_msg_mace_mission_ack.h"
#include "./mavlink_msg_mace_mission_request_int.h"
#include "./mavlink_msg_mace_mission_item_int.h"
#include "./mavlink_msg_guided_target_stats.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 4

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_NEW_ONBOARD_MISSION, MAVLINK_MESSAGE_INFO_REQUEST_HOME_POSITION, MAVLINK_MESSAGE_INFO_HOME_POSITION_ACK, MAVLINK_MESSAGE_INFO_MACE_MISSION_COUNT, MAVLINK_MESSAGE_INFO_MACE_MISSION_ACK, MAVLINK_MESSAGE_INFO_MACE_MISSION_REQUEST_INT, MAVLINK_MESSAGE_INFO_MACE_MISSION_ITEM_INT, MAVLINK_MESSAGE_INFO_GUIDED_TARGET_STATS}
# define MAVLINK_MESSAGE_NAMES {{ "GUIDED_TARGET_STATS", 12507 }, { "HOME_POSITION_ACK", 12502 }, { "MACE_MISSION_ACK", 12504 }, { "MACE_MISSION_COUNT", 12503 }, { "MACE_MISSION_ITEM_INT", 12506 }, { "MACE_MISSION_REQUEST_INT", 12505 }, { "NEW_ONBOARD_MISSION", 12500 }, { "REQUEST_HOME_POSITION", 12501 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_MACE_MISSION_H
