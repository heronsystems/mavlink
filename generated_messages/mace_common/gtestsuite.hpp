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


TEST(mace_common, MACE_HEARTBEAT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_common::msg::MACE_HEARTBEAT packet_in{};
    packet_in.vehicle_id = 5;
    packet_in.type = 72;
    packet_in.autopilot = 139;
    packet_in.flight_mode = 206;
    packet_in.armed = 17;
    packet_in.inMotion = 84;
    packet_in.vehicle_hsm = 151;
    packet_in.mavlink_version = 3;

    mavlink::mace_common::msg::MACE_HEARTBEAT packet1{};
    mavlink::mace_common::msg::MACE_HEARTBEAT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.vehicle_id, packet2.vehicle_id);
    EXPECT_EQ(packet1.type, packet2.type);
    EXPECT_EQ(packet1.autopilot, packet2.autopilot);
    EXPECT_EQ(packet1.flight_mode, packet2.flight_mode);
    EXPECT_EQ(packet1.armed, packet2.armed);
    EXPECT_EQ(packet1.inMotion, packet2.inMotion);
    EXPECT_EQ(packet1.vehicle_hsm, packet2.vehicle_hsm);
    EXPECT_EQ(packet1.mavlink_version, packet2.mavlink_version);
}

#ifdef TEST_INTEROP
TEST(mace_common_interop, MACE_HEARTBEAT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_mace_heartbeat_t packet_c {
         5, 72, 139, 206, 17, 84, 151, 3
    };

    mavlink::mace_common::msg::MACE_HEARTBEAT packet_in{};
    packet_in.vehicle_id = 5;
    packet_in.type = 72;
    packet_in.autopilot = 139;
    packet_in.flight_mode = 206;
    packet_in.armed = 17;
    packet_in.inMotion = 84;
    packet_in.vehicle_hsm = 151;
    packet_in.mavlink_version = 3;

    mavlink::mace_common::msg::MACE_HEARTBEAT packet2{};

    mavlink_msg_mace_heartbeat_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.vehicle_id, packet2.vehicle_id);
    EXPECT_EQ(packet_in.type, packet2.type);
    EXPECT_EQ(packet_in.autopilot, packet2.autopilot);
    EXPECT_EQ(packet_in.flight_mode, packet2.flight_mode);
    EXPECT_EQ(packet_in.armed, packet2.armed);
    EXPECT_EQ(packet_in.inMotion, packet2.inMotion);
    EXPECT_EQ(packet_in.vehicle_hsm, packet2.vehicle_hsm);
    EXPECT_EQ(packet_in.mavlink_version, packet2.mavlink_version);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(mace_common, MACE_SET_VEHICLE_MODE)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_common::msg::MACE_SET_VEHICLE_MODE packet_in{};
    packet_in.target_system = 5;
    packet_in.mode = to_char_array("BCDEFGHIJKLMNOPQRST");

    mavlink::mace_common::msg::MACE_SET_VEHICLE_MODE packet1{};
    mavlink::mace_common::msg::MACE_SET_VEHICLE_MODE packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.mode, packet2.mode);
}

#ifdef TEST_INTEROP
TEST(mace_common_interop, MACE_SET_VEHICLE_MODE)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_mace_set_vehicle_mode_t packet_c {
         5, "BCDEFGHIJKLMNOPQRST"
    };

    mavlink::mace_common::msg::MACE_SET_VEHICLE_MODE packet_in{};
    packet_in.target_system = 5;
    packet_in.mode = to_char_array("BCDEFGHIJKLMNOPQRST");

    mavlink::mace_common::msg::MACE_SET_VEHICLE_MODE packet2{};

    mavlink_msg_mace_set_vehicle_mode_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.mode, packet2.mode);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
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

TEST(mace_common, EXECUTE_SPATIAL_ACTION)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_common::msg::EXECUTE_SPATIAL_ACTION packet_in{};
    packet_in.target_system = 101;
    packet_in.target_component = 168;
    packet_in.action = 18691;
    packet_in.frame = 235;
    packet_in.dimension = 46;
    packet_in.mask = 18795;
    packet_in.param1 = 17.0;
    packet_in.param2 = 45.0;
    packet_in.param3 = 73.0;
    packet_in.param4 = 101.0;
    packet_in.param5 = 129.0;
    packet_in.param6 = 157.0;
    packet_in.param7 = 185.0;

    mavlink::mace_common::msg::EXECUTE_SPATIAL_ACTION packet1{};
    mavlink::mace_common::msg::EXECUTE_SPATIAL_ACTION packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
    EXPECT_EQ(packet1.action, packet2.action);
    EXPECT_EQ(packet1.frame, packet2.frame);
    EXPECT_EQ(packet1.dimension, packet2.dimension);
    EXPECT_EQ(packet1.mask, packet2.mask);
    EXPECT_EQ(packet1.param1, packet2.param1);
    EXPECT_EQ(packet1.param2, packet2.param2);
    EXPECT_EQ(packet1.param3, packet2.param3);
    EXPECT_EQ(packet1.param4, packet2.param4);
    EXPECT_EQ(packet1.param5, packet2.param5);
    EXPECT_EQ(packet1.param6, packet2.param6);
    EXPECT_EQ(packet1.param7, packet2.param7);
}

#ifdef TEST_INTEROP
TEST(mace_common_interop, EXECUTE_SPATIAL_ACTION)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_execute_spatial_action_t packet_c {
         17.0, 45.0, 73.0, 101.0, 129.0, 157.0, 185.0, 18691, 18795, 101, 168, 235, 46
    };

    mavlink::mace_common::msg::EXECUTE_SPATIAL_ACTION packet_in{};
    packet_in.target_system = 101;
    packet_in.target_component = 168;
    packet_in.action = 18691;
    packet_in.frame = 235;
    packet_in.dimension = 46;
    packet_in.mask = 18795;
    packet_in.param1 = 17.0;
    packet_in.param2 = 45.0;
    packet_in.param3 = 73.0;
    packet_in.param4 = 101.0;
    packet_in.param5 = 129.0;
    packet_in.param6 = 157.0;
    packet_in.param7 = 185.0;

    mavlink::mace_common::msg::EXECUTE_SPATIAL_ACTION packet2{};

    mavlink_msg_execute_spatial_action_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
    EXPECT_EQ(packet_in.action, packet2.action);
    EXPECT_EQ(packet_in.frame, packet2.frame);
    EXPECT_EQ(packet_in.dimension, packet2.dimension);
    EXPECT_EQ(packet_in.mask, packet2.mask);
    EXPECT_EQ(packet_in.param1, packet2.param1);
    EXPECT_EQ(packet_in.param2, packet2.param2);
    EXPECT_EQ(packet_in.param3, packet2.param3);
    EXPECT_EQ(packet_in.param4, packet2.param4);
    EXPECT_EQ(packet_in.param5, packet2.param5);
    EXPECT_EQ(packet_in.param6, packet2.param6);
    EXPECT_EQ(packet_in.param7, packet2.param7);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(mace_common, EXECUTE_SPATIAL_ACTION_ACK)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_common::msg::EXECUTE_SPATIAL_ACTION_ACK packet_in{};
    packet_in.result = 5;

    mavlink::mace_common::msg::EXECUTE_SPATIAL_ACTION_ACK packet1{};
    mavlink::mace_common::msg::EXECUTE_SPATIAL_ACTION_ACK packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.result, packet2.result);
}

#ifdef TEST_INTEROP
TEST(mace_common_interop, EXECUTE_SPATIAL_ACTION_ACK)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_execute_spatial_action_ack_t packet_c {
         5
    };

    mavlink::mace_common::msg::EXECUTE_SPATIAL_ACTION_ACK packet_in{};
    packet_in.result = 5;

    mavlink::mace_common::msg::EXECUTE_SPATIAL_ACTION_ACK packet2{};

    mavlink_msg_execute_spatial_action_ack_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.result, packet2.result);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
