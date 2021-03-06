#pragma once
// MESSAGE NEW_ONBOARD_MISSION PACKING

#define MAVLINK_MSG_ID_NEW_ONBOARD_MISSION 12500


typedef struct __mavlink_new_onboard_mission_t {
 uint8_t mission_system; /*<  Mission System ID*/
 uint8_t mission_creator; /*<  Creator ID*/
 uint8_t mission_id; /*<  Mission ID*/
 uint8_t mission_type; /*<  Mission type, see MISSION_TYPE*/
 uint8_t mission_state; /*<  Mission type, see MISSION_STATE*/
} mavlink_new_onboard_mission_t;

#define MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN 5
#define MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_MIN_LEN 5
#define MAVLINK_MSG_ID_12500_LEN 5
#define MAVLINK_MSG_ID_12500_MIN_LEN 5

#define MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_CRC 132
#define MAVLINK_MSG_ID_12500_CRC 132



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_NEW_ONBOARD_MISSION { \
    12500, \
    "NEW_ONBOARD_MISSION", \
    5, \
    {  { "mission_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_new_onboard_mission_t, mission_system) }, \
         { "mission_creator", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_new_onboard_mission_t, mission_creator) }, \
         { "mission_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_new_onboard_mission_t, mission_id) }, \
         { "mission_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_new_onboard_mission_t, mission_type) }, \
         { "mission_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_new_onboard_mission_t, mission_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_NEW_ONBOARD_MISSION { \
    "NEW_ONBOARD_MISSION", \
    5, \
    {  { "mission_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_new_onboard_mission_t, mission_system) }, \
         { "mission_creator", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_new_onboard_mission_t, mission_creator) }, \
         { "mission_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_new_onboard_mission_t, mission_id) }, \
         { "mission_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_new_onboard_mission_t, mission_type) }, \
         { "mission_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_new_onboard_mission_t, mission_state) }, \
         } \
}
#endif

/**
 * @brief Pack a new_onboard_mission message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_system  Mission System ID
 * @param mission_creator  Creator ID
 * @param mission_id  Mission ID
 * @param mission_type  Mission type, see MISSION_TYPE
 * @param mission_state  Mission type, see MISSION_STATE
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_new_onboard_mission_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t mission_system, uint8_t mission_creator, uint8_t mission_id, uint8_t mission_type, uint8_t mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN];
    _mav_put_uint8_t(buf, 0, mission_system);
    _mav_put_uint8_t(buf, 1, mission_creator);
    _mav_put_uint8_t(buf, 2, mission_id);
    _mav_put_uint8_t(buf, 3, mission_type);
    _mav_put_uint8_t(buf, 4, mission_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN);
#else
    mavlink_new_onboard_mission_t packet;
    packet.mission_system = mission_system;
    packet.mission_creator = mission_creator;
    packet.mission_id = mission_id;
    packet.mission_type = mission_type;
    packet.mission_state = mission_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NEW_ONBOARD_MISSION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_MIN_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_CRC);
}

/**
 * @brief Pack a new_onboard_mission message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_system  Mission System ID
 * @param mission_creator  Creator ID
 * @param mission_id  Mission ID
 * @param mission_type  Mission type, see MISSION_TYPE
 * @param mission_state  Mission type, see MISSION_STATE
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_new_onboard_mission_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t mission_system,uint8_t mission_creator,uint8_t mission_id,uint8_t mission_type,uint8_t mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN];
    _mav_put_uint8_t(buf, 0, mission_system);
    _mav_put_uint8_t(buf, 1, mission_creator);
    _mav_put_uint8_t(buf, 2, mission_id);
    _mav_put_uint8_t(buf, 3, mission_type);
    _mav_put_uint8_t(buf, 4, mission_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN);
#else
    mavlink_new_onboard_mission_t packet;
    packet.mission_system = mission_system;
    packet.mission_creator = mission_creator;
    packet.mission_id = mission_id;
    packet.mission_type = mission_type;
    packet.mission_state = mission_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NEW_ONBOARD_MISSION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_MIN_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_CRC);
}

/**
 * @brief Encode a new_onboard_mission struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param new_onboard_mission C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_new_onboard_mission_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_new_onboard_mission_t* new_onboard_mission)
{
    return mavlink_msg_new_onboard_mission_pack(system_id, component_id, msg, new_onboard_mission->mission_system, new_onboard_mission->mission_creator, new_onboard_mission->mission_id, new_onboard_mission->mission_type, new_onboard_mission->mission_state);
}

/**
 * @brief Encode a new_onboard_mission struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param new_onboard_mission C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_new_onboard_mission_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_new_onboard_mission_t* new_onboard_mission)
{
    return mavlink_msg_new_onboard_mission_pack_chan(system_id, component_id, chan, msg, new_onboard_mission->mission_system, new_onboard_mission->mission_creator, new_onboard_mission->mission_id, new_onboard_mission->mission_type, new_onboard_mission->mission_state);
}

/**
 * @brief Send a new_onboard_mission message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_system  Mission System ID
 * @param mission_creator  Creator ID
 * @param mission_id  Mission ID
 * @param mission_type  Mission type, see MISSION_TYPE
 * @param mission_state  Mission type, see MISSION_STATE
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_new_onboard_mission_send(mavlink_channel_t chan, uint8_t mission_system, uint8_t mission_creator, uint8_t mission_id, uint8_t mission_type, uint8_t mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN];
    _mav_put_uint8_t(buf, 0, mission_system);
    _mav_put_uint8_t(buf, 1, mission_creator);
    _mav_put_uint8_t(buf, 2, mission_id);
    _mav_put_uint8_t(buf, 3, mission_type);
    _mav_put_uint8_t(buf, 4, mission_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION, buf, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_MIN_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_CRC);
#else
    mavlink_new_onboard_mission_t packet;
    packet.mission_system = mission_system;
    packet.mission_creator = mission_creator;
    packet.mission_id = mission_id;
    packet.mission_type = mission_type;
    packet.mission_state = mission_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION, (const char *)&packet, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_MIN_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_CRC);
#endif
}

/**
 * @brief Send a new_onboard_mission message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_new_onboard_mission_send_struct(mavlink_channel_t chan, const mavlink_new_onboard_mission_t* new_onboard_mission)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_new_onboard_mission_send(chan, new_onboard_mission->mission_system, new_onboard_mission->mission_creator, new_onboard_mission->mission_id, new_onboard_mission->mission_type, new_onboard_mission->mission_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION, (const char *)new_onboard_mission, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_MIN_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_CRC);
#endif
}

#if MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_new_onboard_mission_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t mission_system, uint8_t mission_creator, uint8_t mission_id, uint8_t mission_type, uint8_t mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, mission_system);
    _mav_put_uint8_t(buf, 1, mission_creator);
    _mav_put_uint8_t(buf, 2, mission_id);
    _mav_put_uint8_t(buf, 3, mission_type);
    _mav_put_uint8_t(buf, 4, mission_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION, buf, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_MIN_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_CRC);
#else
    mavlink_new_onboard_mission_t *packet = (mavlink_new_onboard_mission_t *)msgbuf;
    packet->mission_system = mission_system;
    packet->mission_creator = mission_creator;
    packet->mission_id = mission_id;
    packet->mission_type = mission_type;
    packet->mission_state = mission_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION, (const char *)packet, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_MIN_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_CRC);
#endif
}
#endif

#endif

// MESSAGE NEW_ONBOARD_MISSION UNPACKING


/**
 * @brief Get field mission_system from new_onboard_mission message
 *
 * @return  Mission System ID
 */
static inline uint8_t mavlink_msg_new_onboard_mission_get_mission_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field mission_creator from new_onboard_mission message
 *
 * @return  Creator ID
 */
static inline uint8_t mavlink_msg_new_onboard_mission_get_mission_creator(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field mission_id from new_onboard_mission message
 *
 * @return  Mission ID
 */
static inline uint8_t mavlink_msg_new_onboard_mission_get_mission_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field mission_type from new_onboard_mission message
 *
 * @return  Mission type, see MISSION_TYPE
 */
static inline uint8_t mavlink_msg_new_onboard_mission_get_mission_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field mission_state from new_onboard_mission message
 *
 * @return  Mission type, see MISSION_STATE
 */
static inline uint8_t mavlink_msg_new_onboard_mission_get_mission_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a new_onboard_mission message into a struct
 *
 * @param msg The message to decode
 * @param new_onboard_mission C-struct to decode the message contents into
 */
static inline void mavlink_msg_new_onboard_mission_decode(const mavlink_message_t* msg, mavlink_new_onboard_mission_t* new_onboard_mission)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    new_onboard_mission->mission_system = mavlink_msg_new_onboard_mission_get_mission_system(msg);
    new_onboard_mission->mission_creator = mavlink_msg_new_onboard_mission_get_mission_creator(msg);
    new_onboard_mission->mission_id = mavlink_msg_new_onboard_mission_get_mission_id(msg);
    new_onboard_mission->mission_type = mavlink_msg_new_onboard_mission_get_mission_type(msg);
    new_onboard_mission->mission_state = mavlink_msg_new_onboard_mission_get_mission_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN? msg->len : MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN;
        memset(new_onboard_mission, 0, MAVLINK_MSG_ID_NEW_ONBOARD_MISSION_LEN);
    memcpy(new_onboard_mission, _MAV_PAYLOAD(msg), len);
#endif
}
