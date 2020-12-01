/** @file
 *	@brief MAVLink comm testsuite protocol generated from mace_common.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "mace_common.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(mace_common, COMMAND_SHORT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_common::msg::COMMAND_SHORT packet_in{};
    packet_in.command = 17443;
    packet_in.target_system = 151;
    packet_in.target_component = 218;
    packet_in.confirmation = 29;
    packet_in.param1 = 17.0;

    mavlink::mace_common::msg::COMMAND_SHORT packet1{};
    mavlink::mace_common::msg::COMMAND_SHORT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.command, packet2.command);
    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
    EXPECT_EQ(packet1.confirmation, packet2.confirmation);
    EXPECT_EQ(packet1.param1, packet2.param1);
}

#ifdef TEST_INTEROP
TEST(mace_common_interop, COMMAND_SHORT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_command_short_t packet_c {
         17.0, 17443, 151, 218, 29
    };

    mavlink::mace_common::msg::COMMAND_SHORT packet_in{};
    packet_in.command = 17443;
    packet_in.target_system = 151;
    packet_in.target_component = 218;
    packet_in.confirmation = 29;
    packet_in.param1 = 17.0;

    mavlink::mace_common::msg::COMMAND_SHORT packet2{};

    mavlink_msg_command_short_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.command, packet2.command);
    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
    EXPECT_EQ(packet_in.confirmation, packet2.confirmation);
    EXPECT_EQ(packet_in.param1, packet2.param1);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
