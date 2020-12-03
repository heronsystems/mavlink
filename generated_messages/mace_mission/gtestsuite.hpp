/** @file
 *	@brief MAVLink comm testsuite protocol generated from mace_mission.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "mace_mission.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(mace_mission, NEW_ONBOARD_MISSION)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_mission::msg::NEW_ONBOARD_MISSION packet_in{};
    packet_in.mission_system = 5;
    packet_in.mission_creator = 72;
    packet_in.mission_id = 139;
    packet_in.mission_type = 206;
    packet_in.mission_state = 17;

    mavlink::mace_mission::msg::NEW_ONBOARD_MISSION packet1{};
    mavlink::mace_mission::msg::NEW_ONBOARD_MISSION packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.mission_system, packet2.mission_system);
    EXPECT_EQ(packet1.mission_creator, packet2.mission_creator);
    EXPECT_EQ(packet1.mission_id, packet2.mission_id);
    EXPECT_EQ(packet1.mission_type, packet2.mission_type);
    EXPECT_EQ(packet1.mission_state, packet2.mission_state);
}

#ifdef TEST_INTEROP
TEST(mace_mission_interop, NEW_ONBOARD_MISSION)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_new_onboard_mission_t packet_c {
         5, 72, 139, 206, 17
    };

    mavlink::mace_mission::msg::NEW_ONBOARD_MISSION packet_in{};
    packet_in.mission_system = 5;
    packet_in.mission_creator = 72;
    packet_in.mission_id = 139;
    packet_in.mission_type = 206;
    packet_in.mission_state = 17;

    mavlink::mace_mission::msg::NEW_ONBOARD_MISSION packet2{};

    mavlink_msg_new_onboard_mission_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.mission_system, packet2.mission_system);
    EXPECT_EQ(packet_in.mission_creator, packet2.mission_creator);
    EXPECT_EQ(packet_in.mission_id, packet2.mission_id);
    EXPECT_EQ(packet_in.mission_type, packet2.mission_type);
    EXPECT_EQ(packet_in.mission_state, packet2.mission_state);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(mace_mission, REQUEST_HOME_POSITION)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_mission::msg::REQUEST_HOME_POSITION packet_in{};
    packet_in.target_system = 5;

    mavlink::mace_mission::msg::REQUEST_HOME_POSITION packet1{};
    mavlink::mace_mission::msg::REQUEST_HOME_POSITION packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
}

#ifdef TEST_INTEROP
TEST(mace_mission_interop, REQUEST_HOME_POSITION)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_request_home_position_t packet_c {
         5
    };

    mavlink::mace_mission::msg::REQUEST_HOME_POSITION packet_in{};
    packet_in.target_system = 5;

    mavlink::mace_mission::msg::REQUEST_HOME_POSITION packet2{};

    mavlink_msg_request_home_position_encode(1, 1, &msg, &packet_c);

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

TEST(mace_mission, HOME_POSITION_ACK)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_mission::msg::HOME_POSITION_ACK packet_in{};
    packet_in.target_system = 5;
    packet_in.ack = 72;

    mavlink::mace_mission::msg::HOME_POSITION_ACK packet1{};
    mavlink::mace_mission::msg::HOME_POSITION_ACK packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.ack, packet2.ack);
}

#ifdef TEST_INTEROP
TEST(mace_mission_interop, HOME_POSITION_ACK)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_home_position_ack_t packet_c {
         5, 72
    };

    mavlink::mace_mission::msg::HOME_POSITION_ACK packet_in{};
    packet_in.target_system = 5;
    packet_in.ack = 72;

    mavlink::mace_mission::msg::HOME_POSITION_ACK packet2{};

    mavlink_msg_home_position_ack_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.ack, packet2.ack);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(mace_mission, MACE_MISSION_COUNT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_mission::msg::MACE_MISSION_COUNT packet_in{};
    packet_in.target_system = 139;
    packet_in.target_component = 206;
    packet_in.count = 17235;
    packet_in.mission_type = 17;
    packet_in.mission_creator = 84;
    packet_in.mission_id = 151;

    mavlink::mace_mission::msg::MACE_MISSION_COUNT packet1{};
    mavlink::mace_mission::msg::MACE_MISSION_COUNT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
    EXPECT_EQ(packet1.count, packet2.count);
    EXPECT_EQ(packet1.mission_type, packet2.mission_type);
    EXPECT_EQ(packet1.mission_creator, packet2.mission_creator);
    EXPECT_EQ(packet1.mission_id, packet2.mission_id);
}

#ifdef TEST_INTEROP
TEST(mace_mission_interop, MACE_MISSION_COUNT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_mace_mission_count_t packet_c {
         17235, 139, 206, 17, 84, 151
    };

    mavlink::mace_mission::msg::MACE_MISSION_COUNT packet_in{};
    packet_in.target_system = 139;
    packet_in.target_component = 206;
    packet_in.count = 17235;
    packet_in.mission_type = 17;
    packet_in.mission_creator = 84;
    packet_in.mission_id = 151;

    mavlink::mace_mission::msg::MACE_MISSION_COUNT packet2{};

    mavlink_msg_mace_mission_count_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
    EXPECT_EQ(packet_in.count, packet2.count);
    EXPECT_EQ(packet_in.mission_type, packet2.mission_type);
    EXPECT_EQ(packet_in.mission_creator, packet2.mission_creator);
    EXPECT_EQ(packet_in.mission_id, packet2.mission_id);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(mace_mission, MACE_MISSION_ACK)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_mission::msg::MACE_MISSION_ACK packet_in{};
    packet_in.target_system = 5;
    packet_in.target_component = 72;
    packet_in.type = 139;
    packet_in.mission_type = 206;
    packet_in.mission_creator = 17;
    packet_in.mission_id = 84;

    mavlink::mace_mission::msg::MACE_MISSION_ACK packet1{};
    mavlink::mace_mission::msg::MACE_MISSION_ACK packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
    EXPECT_EQ(packet1.type, packet2.type);
    EXPECT_EQ(packet1.mission_type, packet2.mission_type);
    EXPECT_EQ(packet1.mission_creator, packet2.mission_creator);
    EXPECT_EQ(packet1.mission_id, packet2.mission_id);
}

#ifdef TEST_INTEROP
TEST(mace_mission_interop, MACE_MISSION_ACK)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_mace_mission_ack_t packet_c {
         5, 72, 139, 206, 17, 84
    };

    mavlink::mace_mission::msg::MACE_MISSION_ACK packet_in{};
    packet_in.target_system = 5;
    packet_in.target_component = 72;
    packet_in.type = 139;
    packet_in.mission_type = 206;
    packet_in.mission_creator = 17;
    packet_in.mission_id = 84;

    mavlink::mace_mission::msg::MACE_MISSION_ACK packet2{};

    mavlink_msg_mace_mission_ack_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
    EXPECT_EQ(packet_in.type, packet2.type);
    EXPECT_EQ(packet_in.mission_type, packet2.mission_type);
    EXPECT_EQ(packet_in.mission_creator, packet2.mission_creator);
    EXPECT_EQ(packet_in.mission_id, packet2.mission_id);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(mace_mission, MACE_MISSION_REQUEST_INT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_mission::msg::MACE_MISSION_REQUEST_INT packet_in{};
    packet_in.target_system = 139;
    packet_in.target_component = 206;
    packet_in.seq = 17235;
    packet_in.mission_type = 17;
    packet_in.mission_creator = 84;
    packet_in.mission_id = 151;

    mavlink::mace_mission::msg::MACE_MISSION_REQUEST_INT packet1{};
    mavlink::mace_mission::msg::MACE_MISSION_REQUEST_INT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
    EXPECT_EQ(packet1.seq, packet2.seq);
    EXPECT_EQ(packet1.mission_type, packet2.mission_type);
    EXPECT_EQ(packet1.mission_creator, packet2.mission_creator);
    EXPECT_EQ(packet1.mission_id, packet2.mission_id);
}

#ifdef TEST_INTEROP
TEST(mace_mission_interop, MACE_MISSION_REQUEST_INT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_mace_mission_request_int_t packet_c {
         17235, 139, 206, 17, 84, 151
    };

    mavlink::mace_mission::msg::MACE_MISSION_REQUEST_INT packet_in{};
    packet_in.target_system = 139;
    packet_in.target_component = 206;
    packet_in.seq = 17235;
    packet_in.mission_type = 17;
    packet_in.mission_creator = 84;
    packet_in.mission_id = 151;

    mavlink::mace_mission::msg::MACE_MISSION_REQUEST_INT packet2{};

    mavlink_msg_mace_mission_request_int_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
    EXPECT_EQ(packet_in.seq, packet2.seq);
    EXPECT_EQ(packet_in.mission_type, packet2.mission_type);
    EXPECT_EQ(packet_in.mission_creator, packet2.mission_creator);
    EXPECT_EQ(packet_in.mission_id, packet2.mission_id);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(mace_mission, MACE_MISSION_ITEM_INT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_mission::msg::MACE_MISSION_ITEM_INT packet_in{};
    packet_in.target_system = 101;
    packet_in.target_component = 168;
    packet_in.seq = 18691;
    packet_in.frame = 235;
    packet_in.command = 18795;
    packet_in.current = 46;
    packet_in.autocontinue = 113;
    packet_in.param1 = 17.0;
    packet_in.param2 = 45.0;
    packet_in.param3 = 73.0;
    packet_in.param4 = 101.0;
    packet_in.x = 963498296;
    packet_in.y = 963498504;
    packet_in.z = 185.0;
    packet_in.mission_type = 180;
    packet_in.mission_creator = 247;
    packet_in.mission_id = 58;

    mavlink::mace_mission::msg::MACE_MISSION_ITEM_INT packet1{};
    mavlink::mace_mission::msg::MACE_MISSION_ITEM_INT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.target_system, packet2.target_system);
    EXPECT_EQ(packet1.target_component, packet2.target_component);
    EXPECT_EQ(packet1.seq, packet2.seq);
    EXPECT_EQ(packet1.frame, packet2.frame);
    EXPECT_EQ(packet1.command, packet2.command);
    EXPECT_EQ(packet1.current, packet2.current);
    EXPECT_EQ(packet1.autocontinue, packet2.autocontinue);
    EXPECT_EQ(packet1.param1, packet2.param1);
    EXPECT_EQ(packet1.param2, packet2.param2);
    EXPECT_EQ(packet1.param3, packet2.param3);
    EXPECT_EQ(packet1.param4, packet2.param4);
    EXPECT_EQ(packet1.x, packet2.x);
    EXPECT_EQ(packet1.y, packet2.y);
    EXPECT_EQ(packet1.z, packet2.z);
    EXPECT_EQ(packet1.mission_type, packet2.mission_type);
    EXPECT_EQ(packet1.mission_creator, packet2.mission_creator);
    EXPECT_EQ(packet1.mission_id, packet2.mission_id);
}

#ifdef TEST_INTEROP
TEST(mace_mission_interop, MACE_MISSION_ITEM_INT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_mace_mission_item_int_t packet_c {
         17.0, 45.0, 73.0, 101.0, 963498296, 963498504, 185.0, 18691, 18795, 101, 168, 235, 46, 113, 180, 247, 58
    };

    mavlink::mace_mission::msg::MACE_MISSION_ITEM_INT packet_in{};
    packet_in.target_system = 101;
    packet_in.target_component = 168;
    packet_in.seq = 18691;
    packet_in.frame = 235;
    packet_in.command = 18795;
    packet_in.current = 46;
    packet_in.autocontinue = 113;
    packet_in.param1 = 17.0;
    packet_in.param2 = 45.0;
    packet_in.param3 = 73.0;
    packet_in.param4 = 101.0;
    packet_in.x = 963498296;
    packet_in.y = 963498504;
    packet_in.z = 185.0;
    packet_in.mission_type = 180;
    packet_in.mission_creator = 247;
    packet_in.mission_id = 58;

    mavlink::mace_mission::msg::MACE_MISSION_ITEM_INT packet2{};

    mavlink_msg_mace_mission_item_int_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.target_system, packet2.target_system);
    EXPECT_EQ(packet_in.target_component, packet2.target_component);
    EXPECT_EQ(packet_in.seq, packet2.seq);
    EXPECT_EQ(packet_in.frame, packet2.frame);
    EXPECT_EQ(packet_in.command, packet2.command);
    EXPECT_EQ(packet_in.current, packet2.current);
    EXPECT_EQ(packet_in.autocontinue, packet2.autocontinue);
    EXPECT_EQ(packet_in.param1, packet2.param1);
    EXPECT_EQ(packet_in.param2, packet2.param2);
    EXPECT_EQ(packet_in.param3, packet2.param3);
    EXPECT_EQ(packet_in.param4, packet2.param4);
    EXPECT_EQ(packet_in.x, packet2.x);
    EXPECT_EQ(packet_in.y, packet2.y);
    EXPECT_EQ(packet_in.z, packet2.z);
    EXPECT_EQ(packet_in.mission_type, packet2.mission_type);
    EXPECT_EQ(packet_in.mission_creator, packet2.mission_creator);
    EXPECT_EQ(packet_in.mission_id, packet2.mission_id);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(mace_mission, GUIDED_TARGET_STATS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::mace_mission::msg::GUIDED_TARGET_STATS packet_in{};
    packet_in.x = 17.0;
    packet_in.y = 45.0;
    packet_in.z = 73.0;
    packet_in.distance = 101.0;
    packet_in.coordinate_frame = 53;
    packet_in.state = 120;

    mavlink::mace_mission::msg::GUIDED_TARGET_STATS packet1{};
    mavlink::mace_mission::msg::GUIDED_TARGET_STATS packet2{};

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
TEST(mace_mission_interop, GUIDED_TARGET_STATS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_guided_target_stats_t packet_c {
         17.0, 45.0, 73.0, 101.0, 53, 120
    };

    mavlink::mace_mission::msg::GUIDED_TARGET_STATS packet_in{};
    packet_in.x = 17.0;
    packet_in.y = 45.0;
    packet_in.z = 73.0;
    packet_in.distance = 101.0;
    packet_in.coordinate_frame = 53;
    packet_in.state = 120;

    mavlink::mace_mission::msg::GUIDED_TARGET_STATS packet2{};

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
