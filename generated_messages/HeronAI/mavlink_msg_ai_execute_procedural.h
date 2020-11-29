#pragma once
// MESSAGE AI_EXECUTE_PROCEDURAL PACKING

#define MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL 400


typedef struct __mavlink_ai_execute_procedural_t {
 uint8_t procedural_type; /*<  The type of event to be performed.*/
} mavlink_ai_execute_procedural_t;

#define MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN 1
#define MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_MIN_LEN 1
#define MAVLINK_MSG_ID_400_LEN 1
#define MAVLINK_MSG_ID_400_MIN_LEN 1

#define MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_CRC 112
#define MAVLINK_MSG_ID_400_CRC 112



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AI_EXECUTE_PROCEDURAL { \
    400, \
    "AI_EXECUTE_PROCEDURAL", \
    1, \
    {  { "procedural_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ai_execute_procedural_t, procedural_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AI_EXECUTE_PROCEDURAL { \
    "AI_EXECUTE_PROCEDURAL", \
    1, \
    {  { "procedural_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ai_execute_procedural_t, procedural_type) }, \
         } \
}
#endif

/**
 * @brief Pack a ai_execute_procedural message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param procedural_type  The type of event to be performed.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ai_execute_procedural_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t procedural_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN];
    _mav_put_uint8_t(buf, 0, procedural_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN);
#else
    mavlink_ai_execute_procedural_t packet;
    packet.procedural_type = procedural_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_MIN_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_CRC);
}

/**
 * @brief Pack a ai_execute_procedural message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param procedural_type  The type of event to be performed.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ai_execute_procedural_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t procedural_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN];
    _mav_put_uint8_t(buf, 0, procedural_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN);
#else
    mavlink_ai_execute_procedural_t packet;
    packet.procedural_type = procedural_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_MIN_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_CRC);
}

/**
 * @brief Encode a ai_execute_procedural struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ai_execute_procedural C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ai_execute_procedural_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ai_execute_procedural_t* ai_execute_procedural)
{
    return mavlink_msg_ai_execute_procedural_pack(system_id, component_id, msg, ai_execute_procedural->procedural_type);
}

/**
 * @brief Encode a ai_execute_procedural struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ai_execute_procedural C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ai_execute_procedural_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ai_execute_procedural_t* ai_execute_procedural)
{
    return mavlink_msg_ai_execute_procedural_pack_chan(system_id, component_id, chan, msg, ai_execute_procedural->procedural_type);
}

/**
 * @brief Send a ai_execute_procedural message
 * @param chan MAVLink channel to send the message
 *
 * @param procedural_type  The type of event to be performed.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ai_execute_procedural_send(mavlink_channel_t chan, uint8_t procedural_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN];
    _mav_put_uint8_t(buf, 0, procedural_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL, buf, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_MIN_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_CRC);
#else
    mavlink_ai_execute_procedural_t packet;
    packet.procedural_type = procedural_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL, (const char *)&packet, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_MIN_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_CRC);
#endif
}

/**
 * @brief Send a ai_execute_procedural message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ai_execute_procedural_send_struct(mavlink_channel_t chan, const mavlink_ai_execute_procedural_t* ai_execute_procedural)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ai_execute_procedural_send(chan, ai_execute_procedural->procedural_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL, (const char *)ai_execute_procedural, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_MIN_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_CRC);
#endif
}

#if MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ai_execute_procedural_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t procedural_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, procedural_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL, buf, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_MIN_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_CRC);
#else
    mavlink_ai_execute_procedural_t *packet = (mavlink_ai_execute_procedural_t *)msgbuf;
    packet->procedural_type = procedural_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL, (const char *)packet, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_MIN_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_CRC);
#endif
}
#endif

#endif

// MESSAGE AI_EXECUTE_PROCEDURAL UNPACKING


/**
 * @brief Get field procedural_type from ai_execute_procedural message
 *
 * @return  The type of event to be performed.
 */
static inline uint8_t mavlink_msg_ai_execute_procedural_get_procedural_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a ai_execute_procedural message into a struct
 *
 * @param msg The message to decode
 * @param ai_execute_procedural C-struct to decode the message contents into
 */
static inline void mavlink_msg_ai_execute_procedural_decode(const mavlink_message_t* msg, mavlink_ai_execute_procedural_t* ai_execute_procedural)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ai_execute_procedural->procedural_type = mavlink_msg_ai_execute_procedural_get_procedural_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN? msg->len : MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN;
        memset(ai_execute_procedural, 0, MAVLINK_MSG_ID_AI_EXECUTE_PROCEDURAL_LEN);
    memcpy(ai_execute_procedural, _MAV_PAYLOAD(msg), len);
#endif
}
