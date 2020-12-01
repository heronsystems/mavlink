/** @file
 *    @brief MAVLink comm protocol testsuite generated from HeronAI.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef HERONAI_TESTSUITE_H
#define HERONAI_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_uAvionix(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_icarous(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_HeronAI(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_ardupilotmega(system_id, component_id, last_msg);
    mavlink_test_uAvionix(system_id, component_id, last_msg);
    mavlink_test_icarous(system_id, component_id, last_msg);
    mavlink_test_HeronAI(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"
#include "../ardupilotmega/testsuite.h"
#include "../uAvionix/testsuite.h"
#include "../icarous/testsuite.h"


static void mavlink_test_mace_heartbeat(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MACE_HEARTBEAT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_mace_heartbeat_t packet_in = {
        5,72,139,206,17,84,151,2,29
    };
    mavlink_mace_heartbeat_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.protocol = packet_in.protocol;
        packet1.type = packet_in.type;
        packet1.autopilot = packet_in.autopilot;
        packet1.vehicle_mode = packet_in.vehicle_mode;
        packet1.vehicle_armed = packet_in.vehicle_armed;
        packet1.mission_state = packet_in.mission_state;
        packet1.mace_companion = packet_in.mace_companion;
        packet1.mavlink_version = packet_in.mavlink_version;
        packet1.mavlinkID = packet_in.mavlinkID;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mace_heartbeat_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_mace_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mace_heartbeat_pack(system_id, component_id, &msg , packet1.protocol , packet1.type , packet1.autopilot , packet1.vehicle_mode , packet1.vehicle_armed , packet1.mission_state , packet1.mace_companion , packet1.mavlinkID );
    mavlink_msg_mace_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mace_heartbeat_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.protocol , packet1.type , packet1.autopilot , packet1.vehicle_mode , packet1.vehicle_armed , packet1.mission_state , packet1.mace_companion , packet1.mavlinkID );
    mavlink_msg_mace_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_mace_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mace_heartbeat_send(MAVLINK_COMM_1 , packet1.protocol , packet1.type , packet1.autopilot , packet1.vehicle_mode , packet1.vehicle_armed , packet1.mission_state , packet1.mace_companion , packet1.mavlinkID );
    mavlink_msg_mace_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_vehicle_sync(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_VEHICLE_SYNC >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_vehicle_sync_t packet_in = {
        5
    };
    mavlink_vehicle_sync_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_VEHICLE_SYNC_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_VEHICLE_SYNC_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vehicle_sync_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_vehicle_sync_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vehicle_sync_pack(system_id, component_id, &msg , packet1.target_system );
    mavlink_msg_vehicle_sync_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vehicle_sync_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system );
    mavlink_msg_vehicle_sync_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_vehicle_sync_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_vehicle_sync_send(MAVLINK_COMM_1 , packet1.target_system );
    mavlink_msg_vehicle_sync_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_guided_target_stats(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GUIDED_TARGET_STATS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_guided_target_stats_t packet_in = {
        17.0,45.0,73.0,101.0,53,120
    };
    mavlink_guided_target_stats_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        packet1.distance = packet_in.distance;
        packet1.coordinate_frame = packet_in.coordinate_frame;
        packet1.state = packet_in.state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GUIDED_TARGET_STATS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GUIDED_TARGET_STATS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_guided_target_stats_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_guided_target_stats_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_guided_target_stats_pack(system_id, component_id, &msg , packet1.x , packet1.y , packet1.z , packet1.distance , packet1.coordinate_frame , packet1.state );
    mavlink_msg_guided_target_stats_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_guided_target_stats_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.x , packet1.y , packet1.z , packet1.distance , packet1.coordinate_frame , packet1.state );
    mavlink_msg_guided_target_stats_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_guided_target_stats_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_guided_target_stats_send(MAVLINK_COMM_1 , packet1.x , packet1.y , packet1.z , packet1.distance , packet1.coordinate_frame , packet1.state );
    mavlink_msg_guided_target_stats_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ai_execute_procedural(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ai_execute_procedural_t packet_in = {
        5
    };
    mavlink_ai_execute_procedural_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.procedural_type = packet_in.procedural_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_execute_procedural_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ai_execute_procedural_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_execute_procedural_pack(system_id, component_id, &msg , packet1.procedural_type );
    mavlink_msg_ai_execute_procedural_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_execute_procedural_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.procedural_type );
    mavlink_msg_ai_execute_procedural_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ai_execute_procedural_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_execute_procedural_send(MAVLINK_COMM_1 , packet1.procedural_type );
    mavlink_msg_ai_execute_procedural_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_write_event_to_log(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_write_event_to_log_t packet_in = {
        5,"BCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX"
    };
    mavlink_write_event_to_log_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.event_type = packet_in.event_type;
        
        mav_array_memcpy(packet1.text, packet_in.text, sizeof(char)*50);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_write_event_to_log_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_write_event_to_log_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_write_event_to_log_pack(system_id, component_id, &msg , packet1.event_type , packet1.text );
    mavlink_msg_write_event_to_log_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_write_event_to_log_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.event_type , packet1.text );
    mavlink_msg_write_event_to_log_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_write_event_to_log_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_write_event_to_log_send(MAVLINK_COMM_1 , packet1.event_type , packet1.text );
    mavlink_msg_write_event_to_log_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_HeronAI(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_mace_heartbeat(system_id, component_id, last_msg);
    mavlink_test_vehicle_sync(system_id, component_id, last_msg);
    mavlink_test_guided_target_stats(system_id, component_id, last_msg);
    mavlink_test_ai_execute_procedural(system_id, component_id, last_msg);
    mavlink_test_write_event_to_log(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // HERONAI_TESTSUITE_H
