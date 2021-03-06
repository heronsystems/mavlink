#pragma once
// MESSAGE MACE_MISSION_COUNT PACKING

#define MAVLINK_MSG_ID_MACE_MISSION_COUNT 12503


typedef struct __mavlink_mace_mission_count_t {
 uint16_t count; /*<  Number of mission items in the sequence*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t mission_type; /*<  Mission type.*/
 uint8_t mission_creator; /*<  Creator ID*/
 uint8_t mission_id; /*<  Mission ID*/
} mavlink_mace_mission_count_t;

#define MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN 7
#define MAVLINK_MSG_ID_MACE_MISSION_COUNT_MIN_LEN 4
#define MAVLINK_MSG_ID_12503_LEN 7
#define MAVLINK_MSG_ID_12503_MIN_LEN 4

#define MAVLINK_MSG_ID_MACE_MISSION_COUNT_CRC 232
#define MAVLINK_MSG_ID_12503_CRC 232



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MACE_MISSION_COUNT { \
    12503, \
    "MACE_MISSION_COUNT", \
    6, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_mace_mission_count_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_mace_mission_count_t, target_component) }, \
         { "count", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_mace_mission_count_t, count) }, \
         { "mission_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mace_mission_count_t, mission_type) }, \
         { "mission_creator", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_mace_mission_count_t, mission_creator) }, \
         { "mission_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_mace_mission_count_t, mission_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MACE_MISSION_COUNT { \
    "MACE_MISSION_COUNT", \
    6, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_mace_mission_count_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_mace_mission_count_t, target_component) }, \
         { "count", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_mace_mission_count_t, count) }, \
         { "mission_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mace_mission_count_t, mission_type) }, \
         { "mission_creator", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_mace_mission_count_t, mission_creator) }, \
         { "mission_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_mace_mission_count_t, mission_id) }, \
         } \
}
#endif

/**
 * @brief Pack a mace_mission_count message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param count  Number of mission items in the sequence
 * @param mission_type  Mission type.
 * @param mission_creator  Creator ID
 * @param mission_id  Mission ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mace_mission_count_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint16_t count, uint8_t mission_type, uint8_t mission_creator, uint8_t mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN];
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);
    _mav_put_uint8_t(buf, 4, mission_type);
    _mav_put_uint8_t(buf, 5, mission_creator);
    _mav_put_uint8_t(buf, 6, mission_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN);
#else
    mavlink_mace_mission_count_t packet;
    packet.count = count;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.mission_type = mission_type;
    packet.mission_creator = mission_creator;
    packet.mission_id = mission_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MACE_MISSION_COUNT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MACE_MISSION_COUNT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_CRC);
}

/**
 * @brief Pack a mace_mission_count message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param count  Number of mission items in the sequence
 * @param mission_type  Mission type.
 * @param mission_creator  Creator ID
 * @param mission_id  Mission ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mace_mission_count_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint16_t count,uint8_t mission_type,uint8_t mission_creator,uint8_t mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN];
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);
    _mav_put_uint8_t(buf, 4, mission_type);
    _mav_put_uint8_t(buf, 5, mission_creator);
    _mav_put_uint8_t(buf, 6, mission_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN);
#else
    mavlink_mace_mission_count_t packet;
    packet.count = count;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.mission_type = mission_type;
    packet.mission_creator = mission_creator;
    packet.mission_id = mission_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MACE_MISSION_COUNT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MACE_MISSION_COUNT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_CRC);
}

/**
 * @brief Encode a mace_mission_count struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mace_mission_count C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mace_mission_count_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mace_mission_count_t* mace_mission_count)
{
    return mavlink_msg_mace_mission_count_pack(system_id, component_id, msg, mace_mission_count->target_system, mace_mission_count->target_component, mace_mission_count->count, mace_mission_count->mission_type, mace_mission_count->mission_creator, mace_mission_count->mission_id);
}

/**
 * @brief Encode a mace_mission_count struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mace_mission_count C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mace_mission_count_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mace_mission_count_t* mace_mission_count)
{
    return mavlink_msg_mace_mission_count_pack_chan(system_id, component_id, chan, msg, mace_mission_count->target_system, mace_mission_count->target_component, mace_mission_count->count, mace_mission_count->mission_type, mace_mission_count->mission_creator, mace_mission_count->mission_id);
}

/**
 * @brief Send a mace_mission_count message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param count  Number of mission items in the sequence
 * @param mission_type  Mission type.
 * @param mission_creator  Creator ID
 * @param mission_id  Mission ID
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mace_mission_count_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint16_t count, uint8_t mission_type, uint8_t mission_creator, uint8_t mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN];
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);
    _mav_put_uint8_t(buf, 4, mission_type);
    _mav_put_uint8_t(buf, 5, mission_creator);
    _mav_put_uint8_t(buf, 6, mission_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_MISSION_COUNT, buf, MAVLINK_MSG_ID_MACE_MISSION_COUNT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_CRC);
#else
    mavlink_mace_mission_count_t packet;
    packet.count = count;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.mission_type = mission_type;
    packet.mission_creator = mission_creator;
    packet.mission_id = mission_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_MISSION_COUNT, (const char *)&packet, MAVLINK_MSG_ID_MACE_MISSION_COUNT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_CRC);
#endif
}

/**
 * @brief Send a mace_mission_count message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mace_mission_count_send_struct(mavlink_channel_t chan, const mavlink_mace_mission_count_t* mace_mission_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mace_mission_count_send(chan, mace_mission_count->target_system, mace_mission_count->target_component, mace_mission_count->count, mace_mission_count->mission_type, mace_mission_count->mission_creator, mace_mission_count->mission_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_MISSION_COUNT, (const char *)mace_mission_count, MAVLINK_MSG_ID_MACE_MISSION_COUNT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_CRC);
#endif
}

#if MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mace_mission_count_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint16_t count, uint8_t mission_type, uint8_t mission_creator, uint8_t mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);
    _mav_put_uint8_t(buf, 4, mission_type);
    _mav_put_uint8_t(buf, 5, mission_creator);
    _mav_put_uint8_t(buf, 6, mission_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_MISSION_COUNT, buf, MAVLINK_MSG_ID_MACE_MISSION_COUNT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_CRC);
#else
    mavlink_mace_mission_count_t *packet = (mavlink_mace_mission_count_t *)msgbuf;
    packet->count = count;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->mission_type = mission_type;
    packet->mission_creator = mission_creator;
    packet->mission_id = mission_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_MISSION_COUNT, (const char *)packet, MAVLINK_MSG_ID_MACE_MISSION_COUNT_MIN_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN, MAVLINK_MSG_ID_MACE_MISSION_COUNT_CRC);
#endif
}
#endif

#endif

// MESSAGE MACE_MISSION_COUNT UNPACKING


/**
 * @brief Get field target_system from mace_mission_count message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_mace_mission_count_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field target_component from mace_mission_count message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_mace_mission_count_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field count from mace_mission_count message
 *
 * @return  Number of mission items in the sequence
 */
static inline uint16_t mavlink_msg_mace_mission_count_get_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field mission_type from mace_mission_count message
 *
 * @return  Mission type.
 */
static inline uint8_t mavlink_msg_mace_mission_count_get_mission_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field mission_creator from mace_mission_count message
 *
 * @return  Creator ID
 */
static inline uint8_t mavlink_msg_mace_mission_count_get_mission_creator(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field mission_id from mace_mission_count message
 *
 * @return  Mission ID
 */
static inline uint8_t mavlink_msg_mace_mission_count_get_mission_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a mace_mission_count message into a struct
 *
 * @param msg The message to decode
 * @param mace_mission_count C-struct to decode the message contents into
 */
static inline void mavlink_msg_mace_mission_count_decode(const mavlink_message_t* msg, mavlink_mace_mission_count_t* mace_mission_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mace_mission_count->count = mavlink_msg_mace_mission_count_get_count(msg);
    mace_mission_count->target_system = mavlink_msg_mace_mission_count_get_target_system(msg);
    mace_mission_count->target_component = mavlink_msg_mace_mission_count_get_target_component(msg);
    mace_mission_count->mission_type = mavlink_msg_mace_mission_count_get_mission_type(msg);
    mace_mission_count->mission_creator = mavlink_msg_mace_mission_count_get_mission_creator(msg);
    mace_mission_count->mission_id = mavlink_msg_mace_mission_count_get_mission_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN? msg->len : MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN;
        memset(mace_mission_count, 0, MAVLINK_MSG_ID_MACE_MISSION_COUNT_LEN);
    memcpy(mace_mission_count, _MAV_PAYLOAD(msg), len);
#endif
}
