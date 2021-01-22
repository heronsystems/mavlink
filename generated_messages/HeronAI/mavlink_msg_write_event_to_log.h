#pragma once
// MESSAGE WRITE_EVENT_TO_LOG PACKING

#define MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG 12004


typedef struct __mavlink_write_event_to_log_t {
 uint8_t target_system; /*<  System which should execute the command*/
 uint8_t target_component; /*<  Component which should execute the command, 0 for all components*/
 uint8_t event_type; /*<  The type of event associated with the tag information.*/
 char text[50]; /*<  User defined descriptor useful for describing the event.*/
} mavlink_write_event_to_log_t;

#define MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN 53
#define MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_MIN_LEN 53
#define MAVLINK_MSG_ID_12004_LEN 53
#define MAVLINK_MSG_ID_12004_MIN_LEN 53

#define MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_CRC 88
#define MAVLINK_MSG_ID_12004_CRC 88

#define MAVLINK_MSG_WRITE_EVENT_TO_LOG_FIELD_TEXT_LEN 50

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WRITE_EVENT_TO_LOG { \
    12004, \
    "WRITE_EVENT_TO_LOG", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_write_event_to_log_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_write_event_to_log_t, target_component) }, \
         { "event_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_write_event_to_log_t, event_type) }, \
         { "text", NULL, MAVLINK_TYPE_CHAR, 50, 3, offsetof(mavlink_write_event_to_log_t, text) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WRITE_EVENT_TO_LOG { \
    "WRITE_EVENT_TO_LOG", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_write_event_to_log_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_write_event_to_log_t, target_component) }, \
         { "event_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_write_event_to_log_t, event_type) }, \
         { "text", NULL, MAVLINK_TYPE_CHAR, 50, 3, offsetof(mavlink_write_event_to_log_t, text) }, \
         } \
}
#endif

/**
 * @brief Pack a write_event_to_log message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param event_type  The type of event associated with the tag information.
 * @param text  User defined descriptor useful for describing the event.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_write_event_to_log_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t event_type, const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, event_type);
    _mav_put_char_array(buf, 3, text, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN);
#else
    mavlink_write_event_to_log_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.event_type = event_type;
    mav_array_memcpy(packet.text, text, sizeof(char)*50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_MIN_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_CRC);
}

/**
 * @brief Pack a write_event_to_log message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param event_type  The type of event associated with the tag information.
 * @param text  User defined descriptor useful for describing the event.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_write_event_to_log_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t event_type,const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, event_type);
    _mav_put_char_array(buf, 3, text, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN);
#else
    mavlink_write_event_to_log_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.event_type = event_type;
    mav_array_memcpy(packet.text, text, sizeof(char)*50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_MIN_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_CRC);
}

/**
 * @brief Encode a write_event_to_log struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param write_event_to_log C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_write_event_to_log_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_write_event_to_log_t* write_event_to_log)
{
    return mavlink_msg_write_event_to_log_pack(system_id, component_id, msg, write_event_to_log->target_system, write_event_to_log->target_component, write_event_to_log->event_type, write_event_to_log->text);
}

/**
 * @brief Encode a write_event_to_log struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param write_event_to_log C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_write_event_to_log_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_write_event_to_log_t* write_event_to_log)
{
    return mavlink_msg_write_event_to_log_pack_chan(system_id, component_id, chan, msg, write_event_to_log->target_system, write_event_to_log->target_component, write_event_to_log->event_type, write_event_to_log->text);
}

/**
 * @brief Send a write_event_to_log message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param event_type  The type of event associated with the tag information.
 * @param text  User defined descriptor useful for describing the event.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_write_event_to_log_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t event_type, const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, event_type);
    _mav_put_char_array(buf, 3, text, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG, buf, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_MIN_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_CRC);
#else
    mavlink_write_event_to_log_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.event_type = event_type;
    mav_array_memcpy(packet.text, text, sizeof(char)*50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG, (const char *)&packet, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_MIN_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_CRC);
#endif
}

/**
 * @brief Send a write_event_to_log message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_write_event_to_log_send_struct(mavlink_channel_t chan, const mavlink_write_event_to_log_t* write_event_to_log)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_write_event_to_log_send(chan, write_event_to_log->target_system, write_event_to_log->target_component, write_event_to_log->event_type, write_event_to_log->text);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG, (const char *)write_event_to_log, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_MIN_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_CRC);
#endif
}

#if MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_write_event_to_log_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t event_type, const char *text)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, event_type);
    _mav_put_char_array(buf, 3, text, 50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG, buf, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_MIN_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_CRC);
#else
    mavlink_write_event_to_log_t *packet = (mavlink_write_event_to_log_t *)msgbuf;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->event_type = event_type;
    mav_array_memcpy(packet->text, text, sizeof(char)*50);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG, (const char *)packet, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_MIN_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_CRC);
#endif
}
#endif

#endif

// MESSAGE WRITE_EVENT_TO_LOG UNPACKING


/**
 * @brief Get field target_system from write_event_to_log message
 *
 * @return  System which should execute the command
 */
static inline uint8_t mavlink_msg_write_event_to_log_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from write_event_to_log message
 *
 * @return  Component which should execute the command, 0 for all components
 */
static inline uint8_t mavlink_msg_write_event_to_log_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field event_type from write_event_to_log message
 *
 * @return  The type of event associated with the tag information.
 */
static inline uint8_t mavlink_msg_write_event_to_log_get_event_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field text from write_event_to_log message
 *
 * @return  User defined descriptor useful for describing the event.
 */
static inline uint16_t mavlink_msg_write_event_to_log_get_text(const mavlink_message_t* msg, char *text)
{
    return _MAV_RETURN_char_array(msg, text, 50,  3);
}

/**
 * @brief Decode a write_event_to_log message into a struct
 *
 * @param msg The message to decode
 * @param write_event_to_log C-struct to decode the message contents into
 */
static inline void mavlink_msg_write_event_to_log_decode(const mavlink_message_t* msg, mavlink_write_event_to_log_t* write_event_to_log)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    write_event_to_log->target_system = mavlink_msg_write_event_to_log_get_target_system(msg);
    write_event_to_log->target_component = mavlink_msg_write_event_to_log_get_target_component(msg);
    write_event_to_log->event_type = mavlink_msg_write_event_to_log_get_event_type(msg);
    mavlink_msg_write_event_to_log_get_text(msg, write_event_to_log->text);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN? msg->len : MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN;
        memset(write_event_to_log, 0, MAVLINK_MSG_ID_WRITE_EVENT_TO_LOG_LEN);
    memcpy(write_event_to_log, _MAV_PAYLOAD(msg), len);
#endif
}
