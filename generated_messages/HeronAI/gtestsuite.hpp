/** @file
 *	@brief MAVLink comm testsuite protocol generated from HeronAI.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "HeronAI.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(HeronAI, MACE_HEARTBEAT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::HeronAI::msg::MACE_HEARTBEAT packet_in{};
    packet_in.protocol = 5;
    packet_in.type = 72;
    packet_in.autopilot = 139;
    packet_in.vehicle_mode = 206;
    packet_in.vehicle_armed = 17;
    packet_in.mission_state = 84;
    packet_in.mace_companion = 151;
    packet_in.mavlink_version = 2;
    packet_in.mavlinkID = 29;

    mavlink::HeronAI::msg::MACE_HEARTBEAT packet1{};
    mavlink::HeronAI::msg::MACE_HEARTBEAT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.protocol, packet2.protocol);
    EXPECT_EQ(packet1.type, packet2.type);
    EXPECT_EQ(packet1.autopilot, packet2.autopilot);
    EXPECT_EQ(packet1.vehicle_mode, packet2.vehicle_mode);
    EXPECT_EQ(packet1.vehicle_armed, packet2.vehicle_armed);
    EXPECT_EQ(packet1.mission_state, packet2.mission_state);
    EXPECT_EQ(packet1.mace_companion, packet2.mace_companion);
    EXPECT_EQ(packet1.mavlink_version, packet2.mavlink_version);
    EXPECT_EQ(packet1.mavlinkID, packet2.mavlinkID);
}

#ifdef TEST_INTEROP
TEST(HeronAI_interop, MACE_HEARTBEAT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_mace_heartbeat_t packet_c {
         5, 72, 139, 206, 17, 84, 151, 2, 29
    };

    mavlink::HeronAI::msg::MACE_HEARTBEAT packet_in{};
    packet_in.protocol = 5;
    packet_in.type = 72;
    packet_in.autopilot = 139;
    packet_in.vehicle_mode = 206;
    packet_in.vehicle_armed = 17;
    packet_in.mission_state = 84;
    packet_in.mace_companion = 151;
    packet_in.mavlink_version = 2;
    packet_in.mavlinkID = 29;

    mavlink::HeronAI::msg::MACE_HEARTBEAT packet2{};

    mavlink_msg_mace_heartbeat_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.protocol, packet2.protocol);
    EXPECT_EQ(packet_in.type, packet2.type);
    EXPECT_EQ(packet_in.autopilot, packet2.autopilot);
    EXPECT_EQ(packet_in.vehicle_mode, packet2.vehicle_mode);
    EXPECT_EQ(packet_in.vehicle_armed, packet2.vehicle_armed);
    EXPECT_EQ(packet_in.mission_state, packet2.mission_state);
    EXPECT_EQ(packet_in.mace_companion, packet2.mace_companion);
    EXPECT_EQ(packet_in.mavlink_version, packet2.mavlink_version);
    EXPECT_EQ(packet_in.mavlinkID, packet2.mavlinkID);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(HeronAI, VEHICLE_SYNC)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::HeronAI::msg::VEHICLE_SYNC packet_in{};
    packet_in.target_system = 5;

    mavlink::HeronAI::msg::VEHICLE_SYNC packet1{};
    mavlink::HeronAI::msg::VEHICLE_SYNC packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
}

#ifdef TEST_INTEROP
TEST(HeronAI_interop, VEHICLE_SYNC)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_vehicle_sync_t packet_c {
         5
    };

    mavlink::HeronAI::msg::VEHICLE_SYNC packet_in{};
    packet_in.target_system = 5;

    mavlink::HeronAI::msg::VEHICLE_SYNC packet2{};

    mavlink_msg_vehicle_sync_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(HeronAI, GUIDED_TARGET_STATS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::HeronAI::msg::GUIDED_TARGET_STATS packet_in{};
    packet_in.x = 17.0;
    packet_in.y = 45.0;
    packet_in.z = 73.0;
    packet_in.distance = 101.0;
    packet_in.coordinate_frame = 53;
    packet_in.state = 120;

    mavlink::HeronAI::msg::GUIDED_TARGET_STATS packet1{};
    mavlink::HeronAI::msg::GUIDED_TARGET_STATS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.x, packet2.x);
    EXPECT_EQ(packet1.y, packet2.y);
    EXPECT_EQ(packet1.z, packet2.z);
    EXPECT_EQ(packet1.distance, packet2.distance);
    EXPECT_EQ(packet1.coordinate_frame, packet2.coordinate_frame);
    EXPECT_EQ(packet1.state, packet2.state);
}

#ifdef TEST_INTEROP
TEST(HeronAI_interop, GUIDED_TARGET_STATS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_guided_target_stats_t packet_c {
         17.0, 45.0, 73.0, 101.0, 53, 120
    };

    mavlink::HeronAI::msg::GUIDED_TARGET_STATS packet_in{};
    packet_in.x = 17.0;
    packet_in.y = 45.0;
    packet_in.z = 73.0;
    packet_in.distance = 101.0;
    packet_in.coordinate_frame = 53;
    packet_in.state = 120;

    mavlink::HeronAI::msg::GUIDED_TARGET_STATS packet2{};

    mavlink_msg_guided_target_stats_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.x, packet2.x);
    EXPECT_EQ(packet_in.y, packet2.y);
    EXPECT_EQ(packet_in.z, packet2.z);
    EXPECT_EQ(packet_in.distance, packet2.distance);
    EXPECT_EQ(packet_in.coordinate_frame, packet2.coordinate_frame);
    EXPECT_EQ(packet_in.state, packet2.state);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(HeronAI, AI_EXECUTE_PROCEDURAL)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::HeronAI::msg::AI_EXECUTE_PROCEDURAL packet_in{};
    packet_in.procedural_type = 5;

    mavlink::HeronAI::msg::AI_EXECUTE_PROCEDURAL packet1{};
    mavlink::HeronAI::msg::AI_EXECUTE_PROCEDURAL packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.procedural_type, packet2.procedural_type);
}

#ifdef TEST_INTEROP
TEST(HeronAI_interop, AI_EXECUTE_PROCEDURAL)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ai_execute_procedural_t packet_c {
         5
    };

    mavlink::HeronAI::msg::AI_EXECUTE_PROCEDURAL packet_in{};
    packet_in.procedural_type = 5;

    mavlink::HeronAI::msg::AI_EXECUTE_PROCEDURAL packet2{};

    mavlink_msg_ai_execute_procedural_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.procedural_type, packet2.procedural_type);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(HeronAI, WRITE_EVENT_TO_LOG)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::HeronAI::msg::WRITE_EVENT_TO_LOG packet_in{};
    packet_in.event_type = 5;
    packet_in.text = to_char_array("BCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX");

    mavlink::HeronAI::msg::WRITE_EVENT_TO_LOG packet1{};
    mavlink::HeronAI::msg::WRITE_EVENT_TO_LOG packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.event_type, packet2.event_type);
    EXPECT_EQ(packet1.text, packet2.text);
}

#ifdef TEST_INTEROP
TEST(HeronAI_interop, WRITE_EVENT_TO_LOG)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_write_event_to_log_t packet_c {
         5, "BCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX"
    };

    mavlink::HeronAI::msg::WRITE_EVENT_TO_LOG packet_in{};
    packet_in.event_type = 5;
    packet_in.text = to_char_array("BCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX");

    mavlink::HeronAI::msg::WRITE_EVENT_TO_LOG packet2{};

    mavlink_msg_write_event_to_log_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.event_type, packet2.event_type);
    EXPECT_EQ(packet_in.text, packet2.text);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(HeronAI, SET_SURFACE_DEFLECTION_NORMALIZED)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::HeronAI::msg::SET_SURFACE_DEFLECTION_NORMALIZED packet_in{};
    packet_in.time_boot_ms = 963497464;
    packet_in.target_system = 65;
    packet_in.target_component = 132;
    packet_in.surface_mask = 199;
    packet_in.elevator_deflection = 45.0;
    packet_in.aileron_deflection = 73.0;
    packet_in.rudder_deflection = 101.0;
    packet_in.throttle_deflection = 129.0;

    mavlink::HeronAI::msg::SET_SURFACE_DEFLECTION_NORMALIZED packet1{};
    mavlink::HeronAI::msg::SET_SURFACE_DEFLECTION_NORMALIZED packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.time_boot_ms, packet2.time_boot_ms);
    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
    EXPECT_EQ(packet1.surface_mask, packet2.surface_mask);
    EXPECT_EQ(packet1.elevator_deflection, packet2.elevator_deflection);
    EXPECT_EQ(packet1.aileron_deflection, packet2.aileron_deflection);
    EXPECT_EQ(packet1.rudder_deflection, packet2.rudder_deflection);
    EXPECT_EQ(packet1.throttle_deflection, packet2.throttle_deflection);
}

#ifdef TEST_INTEROP
TEST(HeronAI_interop, SET_SURFACE_DEFLECTION_NORMALIZED)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_set_surface_deflection_normalized_t packet_c {
         963497464, 45.0, 73.0, 101.0, 129.0, 65, 132, 199
    };

    mavlink::HeronAI::msg::SET_SURFACE_DEFLECTION_NORMALIZED packet_in{};
    packet_in.time_boot_ms = 963497464;
    packet_in.target_system = 65;
    packet_in.target_component = 132;
    packet_in.surface_mask = 199;
    packet_in.elevator_deflection = 45.0;
    packet_in.aileron_deflection = 73.0;
    packet_in.rudder_deflection = 101.0;
    packet_in.throttle_deflection = 129.0;

    mavlink::HeronAI::msg::SET_SURFACE_DEFLECTION_NORMALIZED packet2{};

    mavlink_msg_set_surface_deflection_normalized_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.time_boot_ms, packet2.time_boot_ms);
    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
    EXPECT_EQ(packet_in.surface_mask, packet2.surface_mask);
    EXPECT_EQ(packet_in.elevator_deflection, packet2.elevator_deflection);
    EXPECT_EQ(packet_in.aileron_deflection, packet2.aileron_deflection);
    EXPECT_EQ(packet_in.rudder_deflection, packet2.rudder_deflection);
    EXPECT_EQ(packet_in.throttle_deflection, packet2.throttle_deflection);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
