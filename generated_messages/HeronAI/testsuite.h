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
static void mavlink_test_mace_boundary(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_mace_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_mace_mission(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_uAvionix(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_icarous(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_HeronAI(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_mace_boundary(system_id, component_id, last_msg);
    mavlink_test_mace_common(system_id, component_id, last_msg);
    mavlink_test_mace_mission(system_id, component_id, last_msg);
    mavlink_test_ardupilotmega(system_id, component_id, last_msg);
    mavlink_test_uAvionix(system_id, component_id, last_msg);
    mavlink_test_icarous(system_id, component_id, last_msg);
    mavlink_test_HeronAI(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"
#include "../mace_boundary/testsuite.h"
#include "../mace_common/testsuite.h"
#include "../mace_mission/testsuite.h"
#include "../ardupilotmega/testsuite.h"
#include "../uAvionix/testsuite.h"
#include "../icarous/testsuite.h"


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

static void mavlink_test_ai_test_parameterization(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ai_test_parameterization_t packet_in = {
        17.0,45.0,73.0,41,108,"OPQRSTUVWXYZA","CDEFGHIJKLMNO","QRSTUVWXYZABC","EFGHIJKLMNOPQ"
    };
    mavlink_ai_test_parameterization_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.origin_lat = packet_in.origin_lat;
        packet1.origin_lng = packet_in.origin_lng;
        packet1.origin_alt = packet_in.origin_alt;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        
        mav_array_memcpy(packet1.field_file, packet_in.field_file, sizeof(char)*14);
        mav_array_memcpy(packet1.file_one, packet_in.file_one, sizeof(char)*14);
        mav_array_memcpy(packet1.file_two, packet_in.file_two, sizeof(char)*14);
        mav_array_memcpy(packet1.tc_file, packet_in.tc_file, sizeof(char)*14);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_test_parameterization_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ai_test_parameterization_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_test_parameterization_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.field_file , packet1.file_one , packet1.file_two , packet1.tc_file , packet1.origin_lat , packet1.origin_lng , packet1.origin_alt );
    mavlink_msg_ai_test_parameterization_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_test_parameterization_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.field_file , packet1.file_one , packet1.file_two , packet1.tc_file , packet1.origin_lat , packet1.origin_lng , packet1.origin_alt );
    mavlink_msg_ai_test_parameterization_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ai_test_parameterization_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_test_parameterization_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.field_file , packet1.file_one , packet1.file_two , packet1.tc_file , packet1.origin_lat , packet1.origin_lng , packet1.origin_alt );
    mavlink_msg_ai_test_parameterization_decode(last_msg, &packet2);
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
        5,72,139
    };
    mavlink_ai_execute_procedural_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
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
    mavlink_msg_ai_execute_procedural_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.procedural_type );
    mavlink_msg_ai_execute_procedural_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ai_execute_procedural_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.procedural_type );
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
    mavlink_msg_ai_execute_procedural_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.procedural_type );
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
        5,72,139,"DEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"
    };
    mavlink_write_event_to_log_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
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
    mavlink_msg_write_event_to_log_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.event_type , packet1.text );
    mavlink_msg_write_event_to_log_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_write_event_to_log_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.event_type , packet1.text );
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
    mavlink_msg_write_event_to_log_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.event_type , packet1.text );
    mavlink_msg_write_event_to_log_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_execute_surface_deflection_override(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_execute_surface_deflection_override_t packet_in = {
        17.0,45.0,73.0,101.0,129.0
    };
    mavlink_execute_surface_deflection_override_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.event_type = packet_in.event_type;
        packet1.deflection_elevator = packet_in.deflection_elevator;
        packet1.deflection_aileron = packet_in.deflection_aileron;
        packet1.deflection_rudder = packet_in.deflection_rudder;
        packet1.deflection_throttle = packet_in.deflection_throttle;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_execute_surface_deflection_override_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_execute_surface_deflection_override_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_execute_surface_deflection_override_pack(system_id, component_id, &msg , packet1.event_type , packet1.deflection_elevator , packet1.deflection_aileron , packet1.deflection_rudder , packet1.deflection_throttle );
    mavlink_msg_execute_surface_deflection_override_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_execute_surface_deflection_override_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.event_type , packet1.deflection_elevator , packet1.deflection_aileron , packet1.deflection_rudder , packet1.deflection_throttle );
    mavlink_msg_execute_surface_deflection_override_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_execute_surface_deflection_override_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_execute_surface_deflection_override_send(MAVLINK_COMM_1 , packet1.event_type , packet1.deflection_elevator , packet1.deflection_aileron , packet1.deflection_rudder , packet1.deflection_throttle );
    mavlink_msg_execute_surface_deflection_override_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_HeronAI(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_vehicle_sync(system_id, component_id, last_msg);
    mavlink_test_ai_test_parameterization(system_id, component_id, last_msg);
    mavlink_test_ai_execute_procedural(system_id, component_id, last_msg);
    mavlink_test_write_event_to_log(system_id, component_id, last_msg);
    mavlink_test_execute_surface_deflection_override(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // HERONAI_TESTSUITE_H
