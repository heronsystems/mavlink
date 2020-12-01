#pragma once
// MESSAGE REQUEST_HOME_POSITION PACKING

#define MAVLINK_MSG_ID_REQUEST_HOME_POSITION 500


typedef struct __mavlink_request_home_position_t {
 uint8_t target_system; /*<  The system which the home position is being requested from.*/
} mavlink_request_home_position_t;

#define MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN 1
#define MAVLINK_MSG_ID_REQUEST_HOME_POSITION_MIN_LEN 1
#define MAVLINK_MSG_ID_500_LEN 1
#define MAVLINK_MSG_ID_500_MIN_LEN 1

#define MAVLINK_MSG_ID_REQUEST_HOME_POSITION_CRC 219
#define MAVLINK_MSG_ID_500_CRC 219



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_REQUEST_HOME_POSITION { \
    500, \
    "REQUEST_HOME_POSITION", \
    1, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_request_home_position_t, target_system) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_REQUEST_HOME_POSITION { \
    "REQUEST_HOME_POSITION", \
    1, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_request_home_position_t, target_system) }, \
         } \
}
#endif

/**
 * @brief Pack a request_home_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system which the home position is being requested from.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_home_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN];
    _mav_put_uint8_t(buf, 0, target_system);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN);
#else
    mavlink_request_home_position_t packet;
    packet.target_system = target_system;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_HOME_POSITION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_CRC);
}

/**
 * @brief Pack a request_home_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system which the home position is being requested from.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_home_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN];
    _mav_put_uint8_t(buf, 0, target_system);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN);
#else
    mavlink_request_home_position_t packet;
    packet.target_system = target_system;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_HOME_POSITION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_CRC);
}

/**
 * @brief Encode a request_home_position struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param request_home_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_home_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_request_home_position_t* request_home_position)
{
    return mavlink_msg_request_home_position_pack(system_id, component_id, msg, request_home_position->target_system);
}

/**
 * @brief Encode a request_home_position struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_home_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_home_position_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_request_home_position_t* request_home_position)
{
    return mavlink_msg_request_home_position_pack_chan(system_id, component_id, chan, msg, request_home_position->target_system);
}

/**
 * @brief Send a request_home_position message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system which the home position is being requested from.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_request_home_position_send(mavlink_channel_t chan, uint8_t target_system)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN];
    _mav_put_uint8_t(buf, 0, target_system);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_HOME_POSITION, buf, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_CRC);
#else
    mavlink_request_home_position_t packet;
    packet.target_system = target_system;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_HOME_POSITION, (const char *)&packet, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_CRC);
#endif
}

/**
 * @brief Send a request_home_position message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_request_home_position_send_struct(mavlink_channel_t chan, const mavlink_request_home_position_t* request_home_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_request_home_position_send(chan, request_home_position->target_system);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_HOME_POSITION, (const char *)request_home_position, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_CRC);
#endif
}

#if MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_request_home_position_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_HOME_POSITION, buf, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_CRC);
#else
    mavlink_request_home_position_t *packet = (mavlink_request_home_position_t *)msgbuf;
    packet->target_system = target_system;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_HOME_POSITION, (const char *)packet, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_MIN_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_CRC);
#endif
}
#endif

#endif

// MESSAGE REQUEST_HOME_POSITION UNPACKING


/**
 * @brief Get field target_system from request_home_position message
 *
 * @return  The system which the home position is being requested from.
 */
static inline uint8_t mavlink_msg_request_home_position_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a request_home_position message into a struct
 *
 * @param msg The message to decode
 * @param request_home_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_request_home_position_decode(const mavlink_message_t* msg, mavlink_request_home_position_t* request_home_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    request_home_position->target_system = mavlink_msg_request_home_position_get_target_system(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN? msg->len : MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN;
        memset(request_home_position, 0, MAVLINK_MSG_ID_REQUEST_HOME_POSITION_LEN);
    memcpy(request_home_position, _MAV_PAYLOAD(msg), len);
#endif
}
