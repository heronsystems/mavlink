#pragma once
// MESSAGE MACE_MISSION_ITEM_INT PACKING

#define MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT 12506


typedef struct __mavlink_mace_mission_item_int_t {
 float param1; /*<  PARAM1, see MAV_CMD enum*/
 float param2; /*<  PARAM2, see MAV_CMD enum*/
 float param3; /*<  PARAM3, see MAV_CMD enum*/
 float param4; /*<  PARAM4, see MAV_CMD enum*/
 int32_t x; /*<  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7*/
 int32_t y; /*<  PARAM6 / y position: local: x position in meters * 1e4, global: longitude in degrees *10^7*/
 float z; /*<  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame.*/
 uint16_t seq; /*<  Waypoint ID (sequence number). Starts at zero. Increases monotonically for each waypoint, no gaps in the sequence (0,1,2,3,4).*/
 uint16_t command; /*<  The scheduled action for the waypoint.*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t frame; /*<  The coordinate system of the waypoint.*/
 uint8_t current; /*<  false:0, true:1*/
 uint8_t autocontinue; /*<  Autocontinue to next waypoint*/
 uint8_t mission_type; /*<  Mission type.*/
 uint8_t mission_creator; /*<  Creator ID*/
 uint8_t mission_id; /*<  Mission ID*/
} mavlink_mace_mission_item_int_t;

#define MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN 40
#define MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_MIN_LEN 37
#define MAVLINK_MSG_ID_12506_LEN 40
#define MAVLINK_MSG_ID_12506_MIN_LEN 37

#define MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_CRC 117
#define MAVLINK_MSG_ID_12506_CRC 117



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MACE_MISSION_ITEM_INT { \
    12506, \
    "MACE_MISSION_ITEM_INT", \
    17, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_mace_mission_item_int_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_mace_mission_item_int_t, target_component) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_mace_mission_item_int_t, seq) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_mace_mission_item_int_t, frame) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_mace_mission_item_int_t, command) }, \
         { "current", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_mace_mission_item_int_t, current) }, \
         { "autocontinue", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_mace_mission_item_int_t, autocontinue) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_mace_mission_item_int_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_mace_mission_item_int_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_mace_mission_item_int_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_mace_mission_item_int_t, param4) }, \
         { "x", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_mace_mission_item_int_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_mace_mission_item_int_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_mace_mission_item_int_t, z) }, \
         { "mission_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_mace_mission_item_int_t, mission_type) }, \
         { "mission_creator", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_mace_mission_item_int_t, mission_creator) }, \
         { "mission_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_mace_mission_item_int_t, mission_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MACE_MISSION_ITEM_INT { \
    "MACE_MISSION_ITEM_INT", \
    17, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_mace_mission_item_int_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_mace_mission_item_int_t, target_component) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_mace_mission_item_int_t, seq) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_mace_mission_item_int_t, frame) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_mace_mission_item_int_t, command) }, \
         { "current", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_mace_mission_item_int_t, current) }, \
         { "autocontinue", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_mace_mission_item_int_t, autocontinue) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_mace_mission_item_int_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_mace_mission_item_int_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_mace_mission_item_int_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_mace_mission_item_int_t, param4) }, \
         { "x", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_mace_mission_item_int_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_mace_mission_item_int_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_mace_mission_item_int_t, z) }, \
         { "mission_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_mace_mission_item_int_t, mission_type) }, \
         { "mission_creator", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_mace_mission_item_int_t, mission_creator) }, \
         { "mission_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_mace_mission_item_int_t, mission_id) }, \
         } \
}
#endif

/**
 * @brief Pack a mace_mission_item_int message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param seq  Waypoint ID (sequence number). Starts at zero. Increases monotonically for each waypoint, no gaps in the sequence (0,1,2,3,4).
 * @param frame  The coordinate system of the waypoint.
 * @param command  The scheduled action for the waypoint.
 * @param current  false:0, true:1
 * @param autocontinue  Autocontinue to next waypoint
 * @param param1  PARAM1, see MAV_CMD enum
 * @param param2  PARAM2, see MAV_CMD enum
 * @param param3  PARAM3, see MAV_CMD enum
 * @param param4  PARAM4, see MAV_CMD enum
 * @param x  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param y  PARAM6 / y position: local: x position in meters * 1e4, global: longitude in degrees *10^7
 * @param z  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame.
 * @param mission_type  Mission type.
 * @param mission_creator  Creator ID
 * @param mission_id  Mission ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mace_mission_item_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint16_t seq, uint8_t frame, uint16_t command, uint8_t current, uint8_t autocontinue, float param1, float param2, float param3, float param4, int32_t x, int32_t y, float z, uint8_t mission_type, uint8_t mission_creator, uint8_t mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_int32_t(buf, 16, x);
    _mav_put_int32_t(buf, 20, y);
    _mav_put_float(buf, 24, z);
    _mav_put_uint16_t(buf, 28, seq);
    _mav_put_uint16_t(buf, 30, command);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_uint8_t(buf, 34, frame);
    _mav_put_uint8_t(buf, 35, current);
    _mav_put_uint8_t(buf, 36, autocontinue);
    _mav_put_uint8_t(buf, 37, mission_type);
    _mav_put_uint8_t(buf, 38, mission_creator);
    _mav_put_uint8_t(buf, 39, mission_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN);
#else
    mavlink_mace_mission_item_int_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.seq = seq;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.frame = frame;
    packet.current = current;
    packet.autocontinue = autocontinue;
    packet.mission_type = mission_type;
    packet.mission_creator = mission_creator;
    packet.mission_id = mission_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_CRC);
}

/**
 * @brief Pack a mace_mission_item_int message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param seq  Waypoint ID (sequence number). Starts at zero. Increases monotonically for each waypoint, no gaps in the sequence (0,1,2,3,4).
 * @param frame  The coordinate system of the waypoint.
 * @param command  The scheduled action for the waypoint.
 * @param current  false:0, true:1
 * @param autocontinue  Autocontinue to next waypoint
 * @param param1  PARAM1, see MAV_CMD enum
 * @param param2  PARAM2, see MAV_CMD enum
 * @param param3  PARAM3, see MAV_CMD enum
 * @param param4  PARAM4, see MAV_CMD enum
 * @param x  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param y  PARAM6 / y position: local: x position in meters * 1e4, global: longitude in degrees *10^7
 * @param z  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame.
 * @param mission_type  Mission type.
 * @param mission_creator  Creator ID
 * @param mission_id  Mission ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mace_mission_item_int_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint16_t seq,uint8_t frame,uint16_t command,uint8_t current,uint8_t autocontinue,float param1,float param2,float param3,float param4,int32_t x,int32_t y,float z,uint8_t mission_type,uint8_t mission_creator,uint8_t mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_int32_t(buf, 16, x);
    _mav_put_int32_t(buf, 20, y);
    _mav_put_float(buf, 24, z);
    _mav_put_uint16_t(buf, 28, seq);
    _mav_put_uint16_t(buf, 30, command);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_uint8_t(buf, 34, frame);
    _mav_put_uint8_t(buf, 35, current);
    _mav_put_uint8_t(buf, 36, autocontinue);
    _mav_put_uint8_t(buf, 37, mission_type);
    _mav_put_uint8_t(buf, 38, mission_creator);
    _mav_put_uint8_t(buf, 39, mission_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN);
#else
    mavlink_mace_mission_item_int_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.seq = seq;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.frame = frame;
    packet.current = current;
    packet.autocontinue = autocontinue;
    packet.mission_type = mission_type;
    packet.mission_creator = mission_creator;
    packet.mission_id = mission_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_CRC);
}

/**
 * @brief Encode a mace_mission_item_int struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mace_mission_item_int C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mace_mission_item_int_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mace_mission_item_int_t* mace_mission_item_int)
{
    return mavlink_msg_mace_mission_item_int_pack(system_id, component_id, msg, mace_mission_item_int->target_system, mace_mission_item_int->target_component, mace_mission_item_int->seq, mace_mission_item_int->frame, mace_mission_item_int->command, mace_mission_item_int->current, mace_mission_item_int->autocontinue, mace_mission_item_int->param1, mace_mission_item_int->param2, mace_mission_item_int->param3, mace_mission_item_int->param4, mace_mission_item_int->x, mace_mission_item_int->y, mace_mission_item_int->z, mace_mission_item_int->mission_type, mace_mission_item_int->mission_creator, mace_mission_item_int->mission_id);
}

/**
 * @brief Encode a mace_mission_item_int struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mace_mission_item_int C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mace_mission_item_int_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mace_mission_item_int_t* mace_mission_item_int)
{
    return mavlink_msg_mace_mission_item_int_pack_chan(system_id, component_id, chan, msg, mace_mission_item_int->target_system, mace_mission_item_int->target_component, mace_mission_item_int->seq, mace_mission_item_int->frame, mace_mission_item_int->command, mace_mission_item_int->current, mace_mission_item_int->autocontinue, mace_mission_item_int->param1, mace_mission_item_int->param2, mace_mission_item_int->param3, mace_mission_item_int->param4, mace_mission_item_int->x, mace_mission_item_int->y, mace_mission_item_int->z, mace_mission_item_int->mission_type, mace_mission_item_int->mission_creator, mace_mission_item_int->mission_id);
}

/**
 * @brief Send a mace_mission_item_int message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param seq  Waypoint ID (sequence number). Starts at zero. Increases monotonically for each waypoint, no gaps in the sequence (0,1,2,3,4).
 * @param frame  The coordinate system of the waypoint.
 * @param command  The scheduled action for the waypoint.
 * @param current  false:0, true:1
 * @param autocontinue  Autocontinue to next waypoint
 * @param param1  PARAM1, see MAV_CMD enum
 * @param param2  PARAM2, see MAV_CMD enum
 * @param param3  PARAM3, see MAV_CMD enum
 * @param param4  PARAM4, see MAV_CMD enum
 * @param x  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param y  PARAM6 / y position: local: x position in meters * 1e4, global: longitude in degrees *10^7
 * @param z  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame.
 * @param mission_type  Mission type.
 * @param mission_creator  Creator ID
 * @param mission_id  Mission ID
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mace_mission_item_int_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint16_t seq, uint8_t frame, uint16_t command, uint8_t current, uint8_t autocontinue, float param1, float param2, float param3, float param4, int32_t x, int32_t y, float z, uint8_t mission_type, uint8_t mission_creator, uint8_t mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_int32_t(buf, 16, x);
    _mav_put_int32_t(buf, 20, y);
    _mav_put_float(buf, 24, z);
    _mav_put_uint16_t(buf, 28, seq);
    _mav_put_uint16_t(buf, 30, command);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_uint8_t(buf, 34, frame);
    _mav_put_uint8_t(buf, 35, current);
    _mav_put_uint8_t(buf, 36, autocontinue);
    _mav_put_uint8_t(buf, 37, mission_type);
    _mav_put_uint8_t(buf, 38, mission_creator);
    _mav_put_uint8_t(buf, 39, mission_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT, buf, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_CRC);
#else
    mavlink_mace_mission_item_int_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.seq = seq;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.frame = frame;
    packet.current = current;
    packet.autocontinue = autocontinue;
    packet.mission_type = mission_type;
    packet.mission_creator = mission_creator;
    packet.mission_id = mission_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT, (const char *)&packet, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_CRC);
#endif
}

/**
 * @brief Send a mace_mission_item_int message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mace_mission_item_int_send_struct(mavlink_channel_t chan, const mavlink_mace_mission_item_int_t* mace_mission_item_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mace_mission_item_int_send(chan, mace_mission_item_int->target_system, mace_mission_item_int->target_component, mace_mission_item_int->seq, mace_mission_item_int->frame, mace_mission_item_int->command, mace_mission_item_int->current, mace_mission_item_int->autocontinue, mace_mission_item_int->param1, mace_mission_item_int->param2, mace_mission_item_int->param3, mace_mission_item_int->param4, mace_mission_item_int->x, mace_mission_item_int->y, mace_mission_item_int->z, mace_mission_item_int->mission_type, mace_mission_item_int->mission_creator, mace_mission_item_int->mission_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT, (const char *)mace_mission_item_int, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_CRC);
#endif
}

#if MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mace_mission_item_int_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint16_t seq, uint8_t frame, uint16_t command, uint8_t current, uint8_t autocontinue, float param1, float param2, float param3, float param4, int32_t x, int32_t y, float z, uint8_t mission_type, uint8_t mission_creator, uint8_t mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_int32_t(buf, 16, x);
    _mav_put_int32_t(buf, 20, y);
    _mav_put_float(buf, 24, z);
    _mav_put_uint16_t(buf, 28, seq);
    _mav_put_uint16_t(buf, 30, command);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_uint8_t(buf, 34, frame);
    _mav_put_uint8_t(buf, 35, current);
    _mav_put_uint8_t(buf, 36, autocontinue);
    _mav_put_uint8_t(buf, 37, mission_type);
    _mav_put_uint8_t(buf, 38, mission_creator);
    _mav_put_uint8_t(buf, 39, mission_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT, buf, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_CRC);
#else
    mavlink_mace_mission_item_int_t *packet = (mavlink_mace_mission_item_int_t *)msgbuf;
    packet->param1 = param1;
    packet->param2 = param2;
    packet->param3 = param3;
    packet->param4 = param4;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->seq = seq;
    packet->command = command;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->frame = frame;
    packet->current = current;
    packet->autocontinue = autocontinue;
    packet->mission_type = mission_type;
    packet->mission_creator = mission_creator;
    packet->mission_id = mission_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT, (const char *)packet, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_CRC);
#endif
}
#endif

#endif

// MESSAGE MACE_MISSION_ITEM_INT UNPACKING


/**
 * @brief Get field target_system from mace_mission_item_int message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_mace_mission_item_int_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field target_component from mace_mission_item_int message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_mace_mission_item_int_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field seq from mace_mission_item_int message
 *
 * @return  Waypoint ID (sequence number). Starts at zero. Increases monotonically for each waypoint, no gaps in the sequence (0,1,2,3,4).
 */
static inline uint16_t mavlink_msg_mace_mission_item_int_get_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field frame from mace_mission_item_int message
 *
 * @return  The coordinate system of the waypoint.
 */
static inline uint8_t mavlink_msg_mace_mission_item_int_get_frame(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field command from mace_mission_item_int message
 *
 * @return  The scheduled action for the waypoint.
 */
static inline uint16_t mavlink_msg_mace_mission_item_int_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Get field current from mace_mission_item_int message
 *
 * @return  false:0, true:1
 */
static inline uint8_t mavlink_msg_mace_mission_item_int_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field autocontinue from mace_mission_item_int message
 *
 * @return  Autocontinue to next waypoint
 */
static inline uint8_t mavlink_msg_mace_mission_item_int_get_autocontinue(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field param1 from mace_mission_item_int message
 *
 * @return  PARAM1, see MAV_CMD enum
 */
static inline float mavlink_msg_mace_mission_item_int_get_param1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param2 from mace_mission_item_int message
 *
 * @return  PARAM2, see MAV_CMD enum
 */
static inline float mavlink_msg_mace_mission_item_int_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field param3 from mace_mission_item_int message
 *
 * @return  PARAM3, see MAV_CMD enum
 */
static inline float mavlink_msg_mace_mission_item_int_get_param3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field param4 from mace_mission_item_int message
 *
 * @return  PARAM4, see MAV_CMD enum
 */
static inline float mavlink_msg_mace_mission_item_int_get_param4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field x from mace_mission_item_int message
 *
 * @return  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 */
static inline int32_t mavlink_msg_mace_mission_item_int_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field y from mace_mission_item_int message
 *
 * @return  PARAM6 / y position: local: x position in meters * 1e4, global: longitude in degrees *10^7
 */
static inline int32_t mavlink_msg_mace_mission_item_int_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field z from mace_mission_item_int message
 *
 * @return  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame.
 */
static inline float mavlink_msg_mace_mission_item_int_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field mission_type from mace_mission_item_int message
 *
 * @return  Mission type.
 */
static inline uint8_t mavlink_msg_mace_mission_item_int_get_mission_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Get field mission_creator from mace_mission_item_int message
 *
 * @return  Creator ID
 */
static inline uint8_t mavlink_msg_mace_mission_item_int_get_mission_creator(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  38);
}

/**
 * @brief Get field mission_id from mace_mission_item_int message
 *
 * @return  Mission ID
 */
static inline uint8_t mavlink_msg_mace_mission_item_int_get_mission_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  39);
}

/**
 * @brief Decode a mace_mission_item_int message into a struct
 *
 * @param msg The message to decode
 * @param mace_mission_item_int C-struct to decode the message contents into
 */
static inline void mavlink_msg_mace_mission_item_int_decode(const mavlink_message_t* msg, mavlink_mace_mission_item_int_t* mace_mission_item_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mace_mission_item_int->param1 = mavlink_msg_mace_mission_item_int_get_param1(msg);
    mace_mission_item_int->param2 = mavlink_msg_mace_mission_item_int_get_param2(msg);
    mace_mission_item_int->param3 = mavlink_msg_mace_mission_item_int_get_param3(msg);
    mace_mission_item_int->param4 = mavlink_msg_mace_mission_item_int_get_param4(msg);
    mace_mission_item_int->x = mavlink_msg_mace_mission_item_int_get_x(msg);
    mace_mission_item_int->y = mavlink_msg_mace_mission_item_int_get_y(msg);
    mace_mission_item_int->z = mavlink_msg_mace_mission_item_int_get_z(msg);
    mace_mission_item_int->seq = mavlink_msg_mace_mission_item_int_get_seq(msg);
    mace_mission_item_int->command = mavlink_msg_mace_mission_item_int_get_command(msg);
    mace_mission_item_int->target_system = mavlink_msg_mace_mission_item_int_get_target_system(msg);
    mace_mission_item_int->target_component = mavlink_msg_mace_mission_item_int_get_target_component(msg);
    mace_mission_item_int->frame = mavlink_msg_mace_mission_item_int_get_frame(msg);
    mace_mission_item_int->current = mavlink_msg_mace_mission_item_int_get_current(msg);
    mace_mission_item_int->autocontinue = mavlink_msg_mace_mission_item_int_get_autocontinue(msg);
    mace_mission_item_int->mission_type = mavlink_msg_mace_mission_item_int_get_mission_type(msg);
    mace_mission_item_int->mission_creator = mavlink_msg_mace_mission_item_int_get_mission_creator(msg);
    mace_mission_item_int->mission_id = mavlink_msg_mace_mission_item_int_get_mission_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN? msg->len : MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN;
        memset(mace_mission_item_int, 0, MAVLINK_MSG_ID_MACE_MISSION_ITEM_INT_LEN);
    memcpy(mace_mission_item_int, _MAV_PAYLOAD(msg), len);
#endif
}
