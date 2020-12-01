/** @file
 *	@brief MAVLink comm protocol generated from mace_mission.xml
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
namespace mace_mission {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (trought @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 3> MESSAGE_ENTRIES {{ {500, 219, 1, 1, 1, 0, 0}, {501, 21, 2, 2, 1, 0, 0}, {502, 12, 18, 18, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 3;


// ENUM DEFINITIONS




} // namespace mace_mission
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_request_home_position.hpp"
#include "./mavlink_msg_home_position_ack.hpp"
#include "./mavlink_msg_guided_target_stats.hpp"

// base include

