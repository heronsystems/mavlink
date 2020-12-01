#pragma once
// MESSAGE EXECUTE_SPATIAL_ACTION_ACK PACKING

#define MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK 12402


typedef struct __mavlink_execute_spatial_action_ack_t {
 uint8_t result; /*<  See UXV_RESULT enum*/
} mavlink_execute_spatial_action_ack_t;

#define MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN 1
#define MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_MIN_LEN 1
#define MAVLINK_MSG_ID_12402_LEN 1
#define MAVLINK_MSG_ID_12402_MIN_LEN 1

#define MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_CRC 108
#define MAVLINK_MSG_ID_12402_CRC 108



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_EXECUTE_SPATIAL_ACTION_ACK { \
    12402, \
    "EXECUTE_SPATIAL_ACTION_ACK", \
    1, \
    {  { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_execute_spatial_action_ack_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_EXECUTE_SPATIAL_ACTION_ACK { \
    "EXECUTE_SPATIAL_ACTION_ACK", \
    1, \
    {  { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_execute_spatial_action_ack_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a execute_spatial_action_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param result  See UXV_RESULT enum
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_execute_spatial_action_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN];
    _mav_put_uint8_t(buf, 0, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN);
#else
    mavlink_execute_spatial_action_ack_t packet;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_CRC);
}

/**
 * @brief Pack a execute_spatial_action_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param result  See UXV_RESULT enum
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_execute_spatial_action_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN];
    _mav_put_uint8_t(buf, 0, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN);
#else
    mavlink_execute_spatial_action_ack_t packet;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_CRC);
}

/**
 * @brief Encode a execute_spatial_action_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param execute_spatial_action_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_execute_spatial_action_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_execute_spatial_action_ack_t* execute_spatial_action_ack)
{
    return mavlink_msg_execute_spatial_action_ack_pack(system_id, component_id, msg, execute_spatial_action_ack->result);
}

/**
 * @brief Encode a execute_spatial_action_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param execute_spatial_action_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_execute_spatial_action_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_execute_spatial_action_ack_t* execute_spatial_action_ack)
{
    return mavlink_msg_execute_spatial_action_ack_pack_chan(system_id, component_id, chan, msg, execute_spatial_action_ack->result);
}

/**
 * @brief Send a execute_spatial_action_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param result  See UXV_RESULT enum
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_execute_spatial_action_ack_send(mavlink_channel_t chan, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN];
    _mav_put_uint8_t(buf, 0, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK, buf, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_CRC);
#else
    mavlink_execute_spatial_action_ack_t packet;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK, (const char *)&packet, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_CRC);
#endif
}

/**
 * @brief Send a execute_spatial_action_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_execute_spatial_action_ack_send_struct(mavlink_channel_t chan, const mavlink_execute_spatial_action_ack_t* execute_spatial_action_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_execute_spatial_action_ack_send(chan, execute_spatial_action_ack->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK, (const char *)execute_spatial_action_ack, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_execute_spatial_action_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK, buf, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_CRC);
#else
    mavlink_execute_spatial_action_ack_t *packet = (mavlink_execute_spatial_action_ack_t *)msgbuf;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK, (const char *)packet, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE EXECUTE_SPATIAL_ACTION_ACK UNPACKING


/**
 * @brief Get field result from execute_spatial_action_ack message
 *
 * @return  See UXV_RESULT enum
 */
static inline uint8_t mavlink_msg_execute_spatial_action_ack_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a execute_spatial_action_ack message into a struct
 *
 * @param msg The message to decode
 * @param execute_spatial_action_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_execute_spatial_action_ack_decode(const mavlink_message_t* msg, mavlink_execute_spatial_action_ack_t* execute_spatial_action_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    execute_spatial_action_ack->result = mavlink_msg_execute_spatial_action_ack_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN? msg->len : MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN;
        memset(execute_spatial_action_ack, 0, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_ACK_LEN);
    memcpy(execute_spatial_action_ack, _MAV_PAYLOAD(msg), len);
#endif
}
