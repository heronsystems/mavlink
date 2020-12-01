#pragma once
// MESSAGE COMMAND_SHORT PACKING

#define MAVLINK_MSG_ID_COMMAND_SHORT 12400


typedef struct __mavlink_command_short_t {
 float param1; /*<  Parameter as defined by MAV_CMD enum.*/
 uint16_t command; /*<  Command ID, as defined by MAV_CMD enum.is was established to reduce the bandwidth required of messages not requiring as much parameterized data.*/
 uint8_t target_system; /*<  System which should execute the command*/
 uint8_t target_component; /*<  Component which should execute the command, 0 for all components*/
 uint8_t confirmation; /*<  0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)*/
} mavlink_command_short_t;

#define MAVLINK_MSG_ID_COMMAND_SHORT_LEN 9
#define MAVLINK_MSG_ID_COMMAND_SHORT_MIN_LEN 9
#define MAVLINK_MSG_ID_12400_LEN 9
#define MAVLINK_MSG_ID_12400_MIN_LEN 9

#define MAVLINK_MSG_ID_COMMAND_SHORT_CRC 79
#define MAVLINK_MSG_ID_12400_CRC 79



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_COMMAND_SHORT { \
    12400, \
    "COMMAND_SHORT", \
    5, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_command_short_t, command) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_command_short_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_command_short_t, target_component) }, \
         { "confirmation", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_command_short_t, confirmation) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_command_short_t, param1) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_COMMAND_SHORT { \
    "COMMAND_SHORT", \
    5, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_command_short_t, command) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_command_short_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_command_short_t, target_component) }, \
         { "confirmation", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_command_short_t, confirmation) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_command_short_t, param1) }, \
         } \
}
#endif

/**
 * @brief Pack a command_short message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command  Command ID, as defined by MAV_CMD enum.is was established to reduce the bandwidth required of messages not requiring as much parameterized data.
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param confirmation  0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)
 * @param param1  Parameter as defined by MAV_CMD enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_short_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t command, uint8_t target_system, uint8_t target_component, uint8_t confirmation, float param1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_SHORT_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, target_system);
    _mav_put_uint8_t(buf, 7, target_component);
    _mav_put_uint8_t(buf, 8, confirmation);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_SHORT_LEN);
#else
    mavlink_command_short_t packet;
    packet.param1 = param1;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.confirmation = confirmation;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_COMMAND_SHORT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_COMMAND_SHORT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_COMMAND_SHORT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_CRC);
}

/**
 * @brief Pack a command_short message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command  Command ID, as defined by MAV_CMD enum.is was established to reduce the bandwidth required of messages not requiring as much parameterized data.
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param confirmation  0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)
 * @param param1  Parameter as defined by MAV_CMD enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_short_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t command,uint8_t target_system,uint8_t target_component,uint8_t confirmation,float param1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_SHORT_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, target_system);
    _mav_put_uint8_t(buf, 7, target_component);
    _mav_put_uint8_t(buf, 8, confirmation);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_SHORT_LEN);
#else
    mavlink_command_short_t packet;
    packet.param1 = param1;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.confirmation = confirmation;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_COMMAND_SHORT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_COMMAND_SHORT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_COMMAND_SHORT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_CRC);
}

/**
 * @brief Encode a command_short struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param command_short C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_short_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_command_short_t* command_short)
{
    return mavlink_msg_command_short_pack(system_id, component_id, msg, command_short->command, command_short->target_system, command_short->target_component, command_short->confirmation, command_short->param1);
}

/**
 * @brief Encode a command_short struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command_short C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_short_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_command_short_t* command_short)
{
    return mavlink_msg_command_short_pack_chan(system_id, component_id, chan, msg, command_short->command, command_short->target_system, command_short->target_component, command_short->confirmation, command_short->param1);
}

/**
 * @brief Send a command_short message
 * @param chan MAVLink channel to send the message
 *
 * @param command  Command ID, as defined by MAV_CMD enum.is was established to reduce the bandwidth required of messages not requiring as much parameterized data.
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param confirmation  0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)
 * @param param1  Parameter as defined by MAV_CMD enum.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_command_short_send(mavlink_channel_t chan, uint16_t command, uint8_t target_system, uint8_t target_component, uint8_t confirmation, float param1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_SHORT_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, target_system);
    _mav_put_uint8_t(buf, 7, target_component);
    _mav_put_uint8_t(buf, 8, confirmation);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_SHORT, buf, MAVLINK_MSG_ID_COMMAND_SHORT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_CRC);
#else
    mavlink_command_short_t packet;
    packet.param1 = param1;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.confirmation = confirmation;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_SHORT, (const char *)&packet, MAVLINK_MSG_ID_COMMAND_SHORT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_CRC);
#endif
}

/**
 * @brief Send a command_short message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_command_short_send_struct(mavlink_channel_t chan, const mavlink_command_short_t* command_short)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_command_short_send(chan, command_short->command, command_short->target_system, command_short->target_component, command_short->confirmation, command_short->param1);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_SHORT, (const char *)command_short, MAVLINK_MSG_ID_COMMAND_SHORT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_CRC);
#endif
}

#if MAVLINK_MSG_ID_COMMAND_SHORT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_command_short_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t command, uint8_t target_system, uint8_t target_component, uint8_t confirmation, float param1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param1);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, target_system);
    _mav_put_uint8_t(buf, 7, target_component);
    _mav_put_uint8_t(buf, 8, confirmation);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_SHORT, buf, MAVLINK_MSG_ID_COMMAND_SHORT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_CRC);
#else
    mavlink_command_short_t *packet = (mavlink_command_short_t *)msgbuf;
    packet->param1 = param1;
    packet->command = command;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->confirmation = confirmation;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_SHORT, (const char *)packet, MAVLINK_MSG_ID_COMMAND_SHORT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_LEN, MAVLINK_MSG_ID_COMMAND_SHORT_CRC);
#endif
}
#endif

#endif

// MESSAGE COMMAND_SHORT UNPACKING


/**
 * @brief Get field command from command_short message
 *
 * @return  Command ID, as defined by MAV_CMD enum.is was established to reduce the bandwidth required of messages not requiring as much parameterized data.
 */
static inline uint16_t mavlink_msg_command_short_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field target_system from command_short message
 *
 * @return  System which should execute the command
 */
static inline uint8_t mavlink_msg_command_short_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field target_component from command_short message
 *
 * @return  Component which should execute the command, 0 for all components
 */
static inline uint8_t mavlink_msg_command_short_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field confirmation from command_short message
 *
 * @return  0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)
 */
static inline uint8_t mavlink_msg_command_short_get_confirmation(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field param1 from command_short message
 *
 * @return  Parameter as defined by MAV_CMD enum.
 */
static inline float mavlink_msg_command_short_get_param1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a command_short message into a struct
 *
 * @param msg The message to decode
 * @param command_short C-struct to decode the message contents into
 */
static inline void mavlink_msg_command_short_decode(const mavlink_message_t* msg, mavlink_command_short_t* command_short)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    command_short->param1 = mavlink_msg_command_short_get_param1(msg);
    command_short->command = mavlink_msg_command_short_get_command(msg);
    command_short->target_system = mavlink_msg_command_short_get_target_system(msg);
    command_short->target_component = mavlink_msg_command_short_get_target_component(msg);
    command_short->confirmation = mavlink_msg_command_short_get_confirmation(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_COMMAND_SHORT_LEN? msg->len : MAVLINK_MSG_ID_COMMAND_SHORT_LEN;
        memset(command_short, 0, MAVLINK_MSG_ID_COMMAND_SHORT_LEN);
    memcpy(command_short, _MAV_PAYLOAD(msg), len);
#endif
}
