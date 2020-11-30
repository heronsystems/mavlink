#pragma once
// MESSAGE GUIDED_TARGET_STATS PACKING

#define MAVLINK_MSG_ID_GUIDED_TARGET_STATS 399


typedef struct __mavlink_guided_target_stats_t {
 float x; /*<  X position of this position in the defined coordinate frame.*/
 float y; /*<  Y position of this position in the defined coordinate frame.*/
 float z; /*<  Z position of this position in the defined coordinate frame.*/
 float distance; /*<  Relative distance away the system is from the target location.*/
 uint8_t coordinate_frame; /*<  Coordinate frame of the position vector. This field is as related to the MAV_FRAME definition.*/
 uint8_t state; /*<  Current state of the controller in pursuit of the guided state.*/
} mavlink_guided_target_stats_t;

#define MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN 18
#define MAVLINK_MSG_ID_GUIDED_TARGET_STATS_MIN_LEN 18
#define MAVLINK_MSG_ID_399_LEN 18
#define MAVLINK_MSG_ID_399_MIN_LEN 18

#define MAVLINK_MSG_ID_GUIDED_TARGET_STATS_CRC 12
#define MAVLINK_MSG_ID_399_CRC 12



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GUIDED_TARGET_STATS { \
    399, \
    "GUIDED_TARGET_STATS", \
    6, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_guided_target_stats_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_guided_target_stats_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_guided_target_stats_t, z) }, \
         { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_guided_target_stats_t, distance) }, \
         { "coordinate_frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_guided_target_stats_t, coordinate_frame) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_guided_target_stats_t, state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GUIDED_TARGET_STATS { \
    "GUIDED_TARGET_STATS", \
    6, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_guided_target_stats_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_guided_target_stats_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_guided_target_stats_t, z) }, \
         { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_guided_target_stats_t, distance) }, \
         { "coordinate_frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_guided_target_stats_t, coordinate_frame) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_guided_target_stats_t, state) }, \
         } \
}
#endif

/**
 * @brief Pack a guided_target_stats message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x  X position of this position in the defined coordinate frame.
 * @param y  Y position of this position in the defined coordinate frame.
 * @param z  Z position of this position in the defined coordinate frame.
 * @param distance  Relative distance away the system is from the target location.
 * @param coordinate_frame  Coordinate frame of the position vector. This field is as related to the MAV_FRAME definition.
 * @param state  Current state of the controller in pursuit of the guided state.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_guided_target_stats_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x, float y, float z, float distance, uint8_t coordinate_frame, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, distance);
    _mav_put_uint8_t(buf, 16, coordinate_frame);
    _mav_put_uint8_t(buf, 17, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN);
#else
    mavlink_guided_target_stats_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.distance = distance;
    packet.coordinate_frame = coordinate_frame;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GUIDED_TARGET_STATS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_MIN_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_CRC);
}

/**
 * @brief Pack a guided_target_stats message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x  X position of this position in the defined coordinate frame.
 * @param y  Y position of this position in the defined coordinate frame.
 * @param z  Z position of this position in the defined coordinate frame.
 * @param distance  Relative distance away the system is from the target location.
 * @param coordinate_frame  Coordinate frame of the position vector. This field is as related to the MAV_FRAME definition.
 * @param state  Current state of the controller in pursuit of the guided state.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_guided_target_stats_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x,float y,float z,float distance,uint8_t coordinate_frame,uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, distance);
    _mav_put_uint8_t(buf, 16, coordinate_frame);
    _mav_put_uint8_t(buf, 17, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN);
#else
    mavlink_guided_target_stats_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.distance = distance;
    packet.coordinate_frame = coordinate_frame;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GUIDED_TARGET_STATS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_MIN_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_CRC);
}

/**
 * @brief Encode a guided_target_stats struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param guided_target_stats C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_guided_target_stats_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_guided_target_stats_t* guided_target_stats)
{
    return mavlink_msg_guided_target_stats_pack(system_id, component_id, msg, guided_target_stats->x, guided_target_stats->y, guided_target_stats->z, guided_target_stats->distance, guided_target_stats->coordinate_frame, guided_target_stats->state);
}

/**
 * @brief Encode a guided_target_stats struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param guided_target_stats C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_guided_target_stats_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_guided_target_stats_t* guided_target_stats)
{
    return mavlink_msg_guided_target_stats_pack_chan(system_id, component_id, chan, msg, guided_target_stats->x, guided_target_stats->y, guided_target_stats->z, guided_target_stats->distance, guided_target_stats->coordinate_frame, guided_target_stats->state);
}

/**
 * @brief Send a guided_target_stats message
 * @param chan MAVLink channel to send the message
 *
 * @param x  X position of this position in the defined coordinate frame.
 * @param y  Y position of this position in the defined coordinate frame.
 * @param z  Z position of this position in the defined coordinate frame.
 * @param distance  Relative distance away the system is from the target location.
 * @param coordinate_frame  Coordinate frame of the position vector. This field is as related to the MAV_FRAME definition.
 * @param state  Current state of the controller in pursuit of the guided state.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_guided_target_stats_send(mavlink_channel_t chan, float x, float y, float z, float distance, uint8_t coordinate_frame, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, distance);
    _mav_put_uint8_t(buf, 16, coordinate_frame);
    _mav_put_uint8_t(buf, 17, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GUIDED_TARGET_STATS, buf, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_MIN_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_CRC);
#else
    mavlink_guided_target_stats_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.distance = distance;
    packet.coordinate_frame = coordinate_frame;
    packet.state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GUIDED_TARGET_STATS, (const char *)&packet, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_MIN_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_CRC);
#endif
}

/**
 * @brief Send a guided_target_stats message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_guided_target_stats_send_struct(mavlink_channel_t chan, const mavlink_guided_target_stats_t* guided_target_stats)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_guided_target_stats_send(chan, guided_target_stats->x, guided_target_stats->y, guided_target_stats->z, guided_target_stats->distance, guided_target_stats->coordinate_frame, guided_target_stats->state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GUIDED_TARGET_STATS, (const char *)guided_target_stats, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_MIN_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_CRC);
#endif
}

#if MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_guided_target_stats_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float z, float distance, uint8_t coordinate_frame, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, distance);
    _mav_put_uint8_t(buf, 16, coordinate_frame);
    _mav_put_uint8_t(buf, 17, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GUIDED_TARGET_STATS, buf, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_MIN_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_CRC);
#else
    mavlink_guided_target_stats_t *packet = (mavlink_guided_target_stats_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->distance = distance;
    packet->coordinate_frame = coordinate_frame;
    packet->state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GUIDED_TARGET_STATS, (const char *)packet, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_MIN_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_CRC);
#endif
}
#endif

#endif

// MESSAGE GUIDED_TARGET_STATS UNPACKING


/**
 * @brief Get field x from guided_target_stats message
 *
 * @return  X position of this position in the defined coordinate frame.
 */
static inline float mavlink_msg_guided_target_stats_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from guided_target_stats message
 *
 * @return  Y position of this position in the defined coordinate frame.
 */
static inline float mavlink_msg_guided_target_stats_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from guided_target_stats message
 *
 * @return  Z position of this position in the defined coordinate frame.
 */
static inline float mavlink_msg_guided_target_stats_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field distance from guided_target_stats message
 *
 * @return  Relative distance away the system is from the target location.
 */
static inline float mavlink_msg_guided_target_stats_get_distance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field coordinate_frame from guided_target_stats message
 *
 * @return  Coordinate frame of the position vector. This field is as related to the MAV_FRAME definition.
 */
static inline uint8_t mavlink_msg_guided_target_stats_get_coordinate_frame(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field state from guided_target_stats message
 *
 * @return  Current state of the controller in pursuit of the guided state.
 */
static inline uint8_t mavlink_msg_guided_target_stats_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Decode a guided_target_stats message into a struct
 *
 * @param msg The message to decode
 * @param guided_target_stats C-struct to decode the message contents into
 */
static inline void mavlink_msg_guided_target_stats_decode(const mavlink_message_t* msg, mavlink_guided_target_stats_t* guided_target_stats)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    guided_target_stats->x = mavlink_msg_guided_target_stats_get_x(msg);
    guided_target_stats->y = mavlink_msg_guided_target_stats_get_y(msg);
    guided_target_stats->z = mavlink_msg_guided_target_stats_get_z(msg);
    guided_target_stats->distance = mavlink_msg_guided_target_stats_get_distance(msg);
    guided_target_stats->coordinate_frame = mavlink_msg_guided_target_stats_get_coordinate_frame(msg);
    guided_target_stats->state = mavlink_msg_guided_target_stats_get_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN? msg->len : MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN;
        memset(guided_target_stats, 0, MAVLINK_MSG_ID_GUIDED_TARGET_STATS_LEN);
    memcpy(guided_target_stats, _MAV_PAYLOAD(msg), len);
#endif
}
