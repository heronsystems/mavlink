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

TEST(HeronAI, AI_TEST_PARAMETERIZATION)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::HeronAI::msg::AI_TEST_PARAMETERIZATION packet_in{};
    packet_in.target_system = 41;
    packet_in.target_component = 108;
    packet_in.field_file = to_char_array("OPQRSTUVWXYZA");
    packet_in.file_one = to_char_array("CDEFGHIJKLMNO");
    packet_in.file_two = to_char_array("QRSTUVWXYZABC");
    packet_in.tc_file = to_char_array("EFGHIJKLMNOPQ");
    packet_in.origin_lat = 17.0;
    packet_in.origin_lng = 45.0;
    packet_in.origin_alt = 73.0;
    packet_in.test_id = 87;
    packet_in.blue_agent_type = 154;
    packet_in.red_agent_type = 221;

    mavlink::HeronAI::msg::AI_TEST_PARAMETERIZATION packet1{};
    mavlink::HeronAI::msg::AI_TEST_PARAMETERIZATION packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
    EXPECT_EQ(packet1.field_file, packet2.field_file);
    EXPECT_EQ(packet1.file_one, packet2.file_one);
    EXPECT_EQ(packet1.file_two, packet2.file_two);
    EXPECT_EQ(packet1.tc_file, packet2.tc_file);
    EXPECT_EQ(packet1.origin_lat, packet2.origin_lat);
    EXPECT_EQ(packet1.origin_lng, packet2.origin_lng);
    EXPECT_EQ(packet1.origin_alt, packet2.origin_alt);
    EXPECT_EQ(packet1.test_id, packet2.test_id);
    EXPECT_EQ(packet1.blue_agent_type, packet2.blue_agent_type);
    EXPECT_EQ(packet1.red_agent_type, packet2.red_agent_type);
}

#ifdef TEST_INTEROP
TEST(HeronAI_interop, AI_TEST_PARAMETERIZATION)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ai_test_parameterization_t packet_c {
         17.0, 45.0, 73.0, 41, 108, "OPQRSTUVWXYZA", "CDEFGHIJKLMNO", "QRSTUVWXYZABC", "EFGHIJKLMNOPQ", 87, 154, 221
    };

    mavlink::HeronAI::msg::AI_TEST_PARAMETERIZATION packet_in{};
    packet_in.target_system = 41;
    packet_in.target_component = 108;
    packet_in.field_file = to_char_array("OPQRSTUVWXYZA");
    packet_in.file_one = to_char_array("CDEFGHIJKLMNO");
    packet_in.file_two = to_char_array("QRSTUVWXYZABC");
    packet_in.tc_file = to_char_array("EFGHIJKLMNOPQ");
    packet_in.origin_lat = 17.0;
    packet_in.origin_lng = 45.0;
    packet_in.origin_alt = 73.0;
    packet_in.test_id = 87;
    packet_in.blue_agent_type = 154;
    packet_in.red_agent_type = 221;

    mavlink::HeronAI::msg::AI_TEST_PARAMETERIZATION packet2{};

    mavlink_msg_ai_test_parameterization_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
    EXPECT_EQ(packet_in.field_file, packet2.field_file);
    EXPECT_EQ(packet_in.file_one, packet2.file_one);
    EXPECT_EQ(packet_in.file_two, packet2.file_two);
    EXPECT_EQ(packet_in.tc_file, packet2.tc_file);
    EXPECT_EQ(packet_in.origin_lat, packet2.origin_lat);
    EXPECT_EQ(packet_in.origin_lng, packet2.origin_lng);
    EXPECT_EQ(packet_in.origin_alt, packet2.origin_alt);
    EXPECT_EQ(packet_in.test_id, packet2.test_id);
    EXPECT_EQ(packet_in.blue_agent_type, packet2.blue_agent_type);
    EXPECT_EQ(packet_in.red_agent_type, packet2.red_agent_type);

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
    packet_in.target_system = 5;
    packet_in.target_component = 72;
    packet_in.procedural_type = 139;

    mavlink::HeronAI::msg::AI_EXECUTE_PROCEDURAL packet1{};
    mavlink::HeronAI::msg::AI_EXECUTE_PROCEDURAL packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
    EXPECT_EQ(packet1.procedural_type, packet2.procedural_type);
}

#ifdef TEST_INTEROP
TEST(HeronAI_interop, AI_EXECUTE_PROCEDURAL)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ai_execute_procedural_t packet_c {
         5, 72, 139
    };

    mavlink::HeronAI::msg::AI_EXECUTE_PROCEDURAL packet_in{};
    packet_in.target_system = 5;
    packet_in.target_component = 72;
    packet_in.procedural_type = 139;

    mavlink::HeronAI::msg::AI_EXECUTE_PROCEDURAL packet2{};

    mavlink_msg_ai_execute_procedural_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
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
    packet_in.target_system = 5;
    packet_in.target_component = 72;
    packet_in.event_type = 139;
    packet_in.text = to_char_array("DEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ");

    mavlink::HeronAI::msg::WRITE_EVENT_TO_LOG packet1{};
    mavlink::HeronAI::msg::WRITE_EVENT_TO_LOG packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
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
         5, 72, 139, "DEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"
    };

    mavlink::HeronAI::msg::WRITE_EVENT_TO_LOG packet_in{};
    packet_in.target_system = 5;
    packet_in.target_component = 72;
    packet_in.event_type = 139;
    packet_in.text = to_char_array("DEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ");

    mavlink::HeronAI::msg::WRITE_EVENT_TO_LOG packet2{};

    mavlink_msg_write_event_to_log_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
    EXPECT_EQ(packet_in.event_type, packet2.event_type);
    EXPECT_EQ(packet_in.text, packet2.text);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(HeronAI, EXECUTE_SURFACE_DEFLECTION_OVERRIDE)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::HeronAI::msg::EXECUTE_SURFACE_DEFLECTION_OVERRIDE packet_in{};
    packet_in.event_type = 17.0;
    packet_in.deflection_elevator = 45.0;
    packet_in.deflection_aileron = 73.0;
    packet_in.deflection_rudder = 101.0;
    packet_in.deflection_throttle = 129.0;

    mavlink::HeronAI::msg::EXECUTE_SURFACE_DEFLECTION_OVERRIDE packet1{};
    mavlink::HeronAI::msg::EXECUTE_SURFACE_DEFLECTION_OVERRIDE packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.event_type, packet2.event_type);
    EXPECT_EQ(packet1.deflection_elevator, packet2.deflection_elevator);
    EXPECT_EQ(packet1.deflection_aileron, packet2.deflection_aileron);
    EXPECT_EQ(packet1.deflection_rudder, packet2.deflection_rudder);
    EXPECT_EQ(packet1.deflection_throttle, packet2.deflection_throttle);
}

#ifdef TEST_INTEROP
TEST(HeronAI_interop, EXECUTE_SURFACE_DEFLECTION_OVERRIDE)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_execute_surface_deflection_override_t packet_c {
         17.0, 45.0, 73.0, 101.0, 129.0
    };

    mavlink::HeronAI::msg::EXECUTE_SURFACE_DEFLECTION_OVERRIDE packet_in{};
    packet_in.event_type = 17.0;
    packet_in.deflection_elevator = 45.0;
    packet_in.deflection_aileron = 73.0;
    packet_in.deflection_rudder = 101.0;
    packet_in.deflection_throttle = 129.0;

    mavlink::HeronAI::msg::EXECUTE_SURFACE_DEFLECTION_OVERRIDE packet2{};

    mavlink_msg_execute_surface_deflection_override_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.event_type, packet2.event_type);
    EXPECT_EQ(packet_in.deflection_elevator, packet2.deflection_elevator);
    EXPECT_EQ(packet_in.deflection_aileron, packet2.deflection_aileron);
    EXPECT_EQ(packet_in.deflection_rudder, packet2.deflection_rudder);
    EXPECT_EQ(packet_in.deflection_throttle, packet2.deflection_throttle);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
