#pragma once
// MESSAGE MACE_SET_VEHICLE_MODE PACKING

#define MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE 12401


typedef struct __mavlink_mace_set_vehicle_mode_t {
 uint8_t target_system; /*<  System which should execute the command*/
 char mode[20]; /*<  The string of the desired mode for the autonomous system.*/
} mavlink_mace_set_vehicle_mode_t;

#define MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN 21
#define MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_MIN_LEN 21
#define MAVLINK_MSG_ID_12401_LEN 21
#define MAVLINK_MSG_ID_12401_MIN_LEN 21

#define MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_CRC 67
#define MAVLINK_MSG_ID_12401_CRC 67

#define MAVLINK_MSG_MACE_SET_VEHICLE_MODE_FIELD_MODE_LEN 20

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MACE_SET_VEHICLE_MODE { \
    12401, \
    "MACE_SET_VEHICLE_MODE", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_mace_set_vehicle_mode_t, target_system) }, \
         { "mode", NULL, MAVLINK_TYPE_CHAR, 20, 1, offsetof(mavlink_mace_set_vehicle_mode_t, mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MACE_SET_VEHICLE_MODE { \
    "MACE_SET_VEHICLE_MODE", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_mace_set_vehicle_mode_t, target_system) }, \
         { "mode", NULL, MAVLINK_TYPE_CHAR, 20, 1, offsetof(mavlink_mace_set_vehicle_mode_t, mode) }, \
         } \
}
#endif

/**
 * @brief Pack a mace_set_vehicle_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System which should execute the command
 * @param mode  The string of the desired mode for the autonomous system.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mace_set_vehicle_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, const char *mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, mode, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN);
#else
    mavlink_mace_set_vehicle_mode_t packet;
    packet.target_system = target_system;
    mav_array_memcpy(packet.mode, mode, sizeof(char)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_MIN_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_CRC);
}

/**
 * @brief Pack a mace_set_vehicle_mode message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System which should execute the command
 * @param mode  The string of the desired mode for the autonomous system.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mace_set_vehicle_mode_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,const char *mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, mode, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN);
#else
    mavlink_mace_set_vehicle_mode_t packet;
    packet.target_system = target_system;
    mav_array_memcpy(packet.mode, mode, sizeof(char)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_MIN_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_CRC);
}

/**
 * @brief Encode a mace_set_vehicle_mode struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mace_set_vehicle_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mace_set_vehicle_mode_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mace_set_vehicle_mode_t* mace_set_vehicle_mode)
{
    return mavlink_msg_mace_set_vehicle_mode_pack(system_id, component_id, msg, mace_set_vehicle_mode->target_system, mace_set_vehicle_mode->mode);
}

/**
 * @brief Encode a mace_set_vehicle_mode struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mace_set_vehicle_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mace_set_vehicle_mode_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mace_set_vehicle_mode_t* mace_set_vehicle_mode)
{
    return mavlink_msg_mace_set_vehicle_mode_pack_chan(system_id, component_id, chan, msg, mace_set_vehicle_mode->target_system, mace_set_vehicle_mode->mode);
}

/**
 * @brief Send a mace_set_vehicle_mode message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System which should execute the command
 * @param mode  The string of the desired mode for the autonomous system.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mace_set_vehicle_mode_send(mavlink_channel_t chan, uint8_t target_system, const char *mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, mode, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE, buf, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_MIN_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_CRC);
#else
    mavlink_mace_set_vehicle_mode_t packet;
    packet.target_system = target_system;
    mav_array_memcpy(packet.mode, mode, sizeof(char)*20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE, (const char *)&packet, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_MIN_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_CRC);
#endif
}

/**
 * @brief Send a mace_set_vehicle_mode message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mace_set_vehicle_mode_send_struct(mavlink_channel_t chan, const mavlink_mace_set_vehicle_mode_t* mace_set_vehicle_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mace_set_vehicle_mode_send(chan, mace_set_vehicle_mode->target_system, mace_set_vehicle_mode->mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE, (const char *)mace_set_vehicle_mode, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_MIN_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_CRC);
#endif
}

#if MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mace_set_vehicle_mode_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, const char *mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, mode, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE, buf, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_MIN_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_CRC);
#else
    mavlink_mace_set_vehicle_mode_t *packet = (mavlink_mace_set_vehicle_mode_t *)msgbuf;
    packet->target_system = target_system;
    mav_array_memcpy(packet->mode, mode, sizeof(char)*20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE, (const char *)packet, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_MIN_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_CRC);
#endif
}
#endif

#endif

// MESSAGE MACE_SET_VEHICLE_MODE UNPACKING


/**
 * @brief Get field target_system from mace_set_vehicle_mode message
 *
 * @return  System which should execute the command
 */
static inline uint8_t mavlink_msg_mace_set_vehicle_mode_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field mode from mace_set_vehicle_mode message
 *
 * @return  The string of the desired mode for the autonomous system.
 */
static inline uint16_t mavlink_msg_mace_set_vehicle_mode_get_mode(const mavlink_message_t* msg, char *mode)
{
    return _MAV_RETURN_char_array(msg, mode, 20,  1);
}

/**
 * @brief Decode a mace_set_vehicle_mode message into a struct
 *
 * @param msg The message to decode
 * @param mace_set_vehicle_mode C-struct to decode the message contents into
 */
static inline void mavlink_msg_mace_set_vehicle_mode_decode(const mavlink_message_t* msg, mavlink_mace_set_vehicle_mode_t* mace_set_vehicle_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mace_set_vehicle_mode->target_system = mavlink_msg_mace_set_vehicle_mode_get_target_system(msg);
    mavlink_msg_mace_set_vehicle_mode_get_mode(msg, mace_set_vehicle_mode->mode);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN? msg->len : MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN;
        memset(mace_set_vehicle_mode, 0, MAVLINK_MSG_ID_MACE_SET_VEHICLE_MODE_LEN);
    memcpy(mace_set_vehicle_mode, _MAV_PAYLOAD(msg), len);
#endif
}
