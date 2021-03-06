/** @file
 *	@brief MAVLink comm protocol generated from mace_common.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <array>
#include <cstdint>
#include <sstream>

#ifndef MAVLINK_STX
#define MAVLINK_STX 253
#endif

#include "../message.hpp"

namespace mavlink {
namespace mace_common {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (trought @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 5> MESSAGE_ENTRIES {{ {12400, 6, 8, 8, 0, 0, 0}, {12401, 67, 21, 21, 1, 0, 0}, {12402, 79, 9, 9, 3, 6, 7}, {12403, 48, 36, 36, 3, 32, 33}, {12404, 108, 1, 1, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 3;


// ENUM DEFINITIONS




} // namespace mace_common
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_mace_heartbeat.hpp"
#include "./mavlink_msg_mace_set_vehicle_mode.hpp"
#include "./mavlink_msg_command_short.hpp"
#include "./mavlink_msg_execute_spatial_action.hpp"
#include "./mavlink_msg_execute_spatial_action_ack.hpp"

// base include

