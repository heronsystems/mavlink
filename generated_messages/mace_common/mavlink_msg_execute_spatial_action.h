#pragma once
// MESSAGE EXECUTE_SPATIAL_ACTION PACKING

#define MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION 12403


typedef struct __mavlink_execute_spatial_action_t {
 float param1; /*<  Parameter 1, as defined by UXV_CMD enum.*/
 float param2; /*<  Parameter 2, as defined by UXV_CMD enum.*/
 float param3; /*<  Parameter 3, as defined by UXV_CMD enum.*/
 float param4; /*<  Parameter 4, as defined by UXV_CMD enum.*/
 float param5; /*<  Parameter 5, as defined by UXV_CMD enum.*/
 float param6; /*<  Parameter 6, as defined by UXV_CMD enum.*/
 float param7; /*<  Parameter 7, as defined by UXV_CMD enum.*/
 uint16_t action; /*<  Command ID, as defined by UXV_CMD enum.*/
 uint16_t mask; /*<  Mask indicating the invalid dimensions of the position object. 1's indicate a dimesion is invalid.*/
 uint8_t target_system; /*<  System which should execute the command*/
 uint8_t target_component; /*<  Component which should execute the command, 0 for all components*/
 uint8_t frame; /*<  The coordinate system of the MISSION. see UXV_FRAME in mavlink_types.h*/
 uint8_t dimension; /*<  How many dimensions the position object truly is captured in.*/
} mavlink_execute_spatial_action_t;

#define MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN 36
#define MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_MIN_LEN 36
#define MAVLINK_MSG_ID_12403_LEN 36
#define MAVLINK_MSG_ID_12403_MIN_LEN 36

#define MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_CRC 48
#define MAVLINK_MSG_ID_12403_CRC 48



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_EXECUTE_SPATIAL_ACTION { \
    12403, \
    "EXECUTE_SPATIAL_ACTION", \
    13, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_execute_spatial_action_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_execute_spatial_action_t, target_component) }, \
         { "action", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_execute_spatial_action_t, action) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_execute_spatial_action_t, frame) }, \
         { "dimension", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_execute_spatial_action_t, dimension) }, \
         { "mask", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_execute_spatial_action_t, mask) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_execute_spatial_action_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_execute_spatial_action_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_execute_spatial_action_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_execute_spatial_action_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_execute_spatial_action_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_execute_spatial_action_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_execute_spatial_action_t, param7) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_EXECUTE_SPATIAL_ACTION { \
    "EXECUTE_SPATIAL_ACTION", \
    13, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_execute_spatial_action_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_execute_spatial_action_t, target_component) }, \
         { "action", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_execute_spatial_action_t, action) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_execute_spatial_action_t, frame) }, \
         { "dimension", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_execute_spatial_action_t, dimension) }, \
         { "mask", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_execute_spatial_action_t, mask) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_execute_spatial_action_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_execute_spatial_action_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_execute_spatial_action_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_execute_spatial_action_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_execute_spatial_action_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_execute_spatial_action_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_execute_spatial_action_t, param7) }, \
         } \
}
#endif

/**
 * @brief Pack a execute_spatial_action message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param action  Command ID, as defined by UXV_CMD enum.
 * @param frame  The coordinate system of the MISSION. see UXV_FRAME in mavlink_types.h
 * @param dimension  How many dimensions the position object truly is captured in.
 * @param mask  Mask indicating the invalid dimensions of the position object. 1's indicate a dimesion is invalid.
 * @param param1  Parameter 1, as defined by UXV_CMD enum.
 * @param param2  Parameter 2, as defined by UXV_CMD enum.
 * @param param3  Parameter 3, as defined by UXV_CMD enum.
 * @param param4  Parameter 4, as defined by UXV_CMD enum.
 * @param param5  Parameter 5, as defined by UXV_CMD enum.
 * @param param6  Parameter 6, as defined by UXV_CMD enum.
 * @param param7  Parameter 7, as defined by UXV_CMD enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_execute_spatial_action_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint16_t action, uint8_t frame, uint8_t dimension, uint16_t mask, float param1, float param2, float param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, action);
    _mav_put_uint16_t(buf, 30, mask);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_uint8_t(buf, 34, frame);
    _mav_put_uint8_t(buf, 35, dimension);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN);
#else
    mavlink_execute_spatial_action_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.action = action;
    packet.mask = mask;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.frame = frame;
    packet.dimension = dimension;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_CRC);
}

/**
 * @brief Pack a execute_spatial_action message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param action  Command ID, as defined by UXV_CMD enum.
 * @param frame  The coordinate system of the MISSION. see UXV_FRAME in mavlink_types.h
 * @param dimension  How many dimensions the position object truly is captured in.
 * @param mask  Mask indicating the invalid dimensions of the position object. 1's indicate a dimesion is invalid.
 * @param param1  Parameter 1, as defined by UXV_CMD enum.
 * @param param2  Parameter 2, as defined by UXV_CMD enum.
 * @param param3  Parameter 3, as defined by UXV_CMD enum.
 * @param param4  Parameter 4, as defined by UXV_CMD enum.
 * @param param5  Parameter 5, as defined by UXV_CMD enum.
 * @param param6  Parameter 6, as defined by UXV_CMD enum.
 * @param param7  Parameter 7, as defined by UXV_CMD enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_execute_spatial_action_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint16_t action,uint8_t frame,uint8_t dimension,uint16_t mask,float param1,float param2,float param3,float param4,float param5,float param6,float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, action);
    _mav_put_uint16_t(buf, 30, mask);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_uint8_t(buf, 34, frame);
    _mav_put_uint8_t(buf, 35, dimension);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN);
#else
    mavlink_execute_spatial_action_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.action = action;
    packet.mask = mask;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.frame = frame;
    packet.dimension = dimension;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_CRC);
}

/**
 * @brief Encode a execute_spatial_action struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param execute_spatial_action C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_execute_spatial_action_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_execute_spatial_action_t* execute_spatial_action)
{
    return mavlink_msg_execute_spatial_action_pack(system_id, component_id, msg, execute_spatial_action->target_system, execute_spatial_action->target_component, execute_spatial_action->action, execute_spatial_action->frame, execute_spatial_action->dimension, execute_spatial_action->mask, execute_spatial_action->param1, execute_spatial_action->param2, execute_spatial_action->param3, execute_spatial_action->param4, execute_spatial_action->param5, execute_spatial_action->param6, execute_spatial_action->param7);
}

/**
 * @brief Encode a execute_spatial_action struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param execute_spatial_action C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_execute_spatial_action_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_execute_spatial_action_t* execute_spatial_action)
{
    return mavlink_msg_execute_spatial_action_pack_chan(system_id, component_id, chan, msg, execute_spatial_action->target_system, execute_spatial_action->target_component, execute_spatial_action->action, execute_spatial_action->frame, execute_spatial_action->dimension, execute_spatial_action->mask, execute_spatial_action->param1, execute_spatial_action->param2, execute_spatial_action->param3, execute_spatial_action->param4, execute_spatial_action->param5, execute_spatial_action->param6, execute_spatial_action->param7);
}

/**
 * @brief Send a execute_spatial_action message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param action  Command ID, as defined by UXV_CMD enum.
 * @param frame  The coordinate system of the MISSION. see UXV_FRAME in mavlink_types.h
 * @param dimension  How many dimensions the position object truly is captured in.
 * @param mask  Mask indicating the invalid dimensions of the position object. 1's indicate a dimesion is invalid.
 * @param param1  Parameter 1, as defined by UXV_CMD enum.
 * @param param2  Parameter 2, as defined by UXV_CMD enum.
 * @param param3  Parameter 3, as defined by UXV_CMD enum.
 * @param param4  Parameter 4, as defined by UXV_CMD enum.
 * @param param5  Parameter 5, as defined by UXV_CMD enum.
 * @param param6  Parameter 6, as defined by UXV_CMD enum.
 * @param param7  Parameter 7, as defined by UXV_CMD enum.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_execute_spatial_action_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint16_t action, uint8_t frame, uint8_t dimension, uint16_t mask, float param1, float param2, float param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, action);
    _mav_put_uint16_t(buf, 30, mask);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_uint8_t(buf, 34, frame);
    _mav_put_uint8_t(buf, 35, dimension);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION, buf, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_CRC);
#else
    mavlink_execute_spatial_action_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.action = action;
    packet.mask = mask;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.frame = frame;
    packet.dimension = dimension;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION, (const char *)&packet, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_CRC);
#endif
}

/**
 * @brief Send a execute_spatial_action message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_execute_spatial_action_send_struct(mavlink_channel_t chan, const mavlink_execute_spatial_action_t* execute_spatial_action)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_execute_spatial_action_send(chan, execute_spatial_action->target_system, execute_spatial_action->target_component, execute_spatial_action->action, execute_spatial_action->frame, execute_spatial_action->dimension, execute_spatial_action->mask, execute_spatial_action->param1, execute_spatial_action->param2, execute_spatial_action->param3, execute_spatial_action->param4, execute_spatial_action->param5, execute_spatial_action->param6, execute_spatial_action->param7);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION, (const char *)execute_spatial_action, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_CRC);
#endif
}

#if MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_execute_spatial_action_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint16_t action, uint8_t frame, uint8_t dimension, uint16_t mask, float param1, float param2, float param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, action);
    _mav_put_uint16_t(buf, 30, mask);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_uint8_t(buf, 34, frame);
    _mav_put_uint8_t(buf, 35, dimension);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION, buf, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_CRC);
#else
    mavlink_execute_spatial_action_t *packet = (mavlink_execute_spatial_action_t *)msgbuf;
    packet->param1 = param1;
    packet->param2 = param2;
    packet->param3 = param3;
    packet->param4 = param4;
    packet->param5 = param5;
    packet->param6 = param6;
    packet->param7 = param7;
    packet->action = action;
    packet->mask = mask;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->frame = frame;
    packet->dimension = dimension;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION, (const char *)packet, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_CRC);
#endif
}
#endif

#endif

// MESSAGE EXECUTE_SPATIAL_ACTION UNPACKING


/**
 * @brief Get field target_system from execute_spatial_action message
 *
 * @return  System which should execute the command
 */
static inline uint8_t mavlink_msg_execute_spatial_action_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field target_component from execute_spatial_action message
 *
 * @return  Component which should execute the command, 0 for all components
 */
static inline uint8_t mavlink_msg_execute_spatial_action_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field action from execute_spatial_action message
 *
 * @return  Command ID, as defined by UXV_CMD enum.
 */
static inline uint16_t mavlink_msg_execute_spatial_action_get_action(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field frame from execute_spatial_action message
 *
 * @return  The coordinate system of the MISSION. see UXV_FRAME in mavlink_types.h
 */
static inline uint8_t mavlink_msg_execute_spatial_action_get_frame(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field dimension from execute_spatial_action message
 *
 * @return  How many dimensions the position object truly is captured in.
 */
static inline uint8_t mavlink_msg_execute_spatial_action_get_dimension(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field mask from execute_spatial_action message
 *
 * @return  Mask indicating the invalid dimensions of the position object. 1's indicate a dimesion is invalid.
 */
static inline uint16_t mavlink_msg_execute_spatial_action_get_mask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Get field param1 from execute_spatial_action message
 *
 * @return  Parameter 1, as defined by UXV_CMD enum.
 */
static inline float mavlink_msg_execute_spatial_action_get_param1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param2 from execute_spatial_action message
 *
 * @return  Parameter 2, as defined by UXV_CMD enum.
 */
static inline float mavlink_msg_execute_spatial_action_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field param3 from execute_spatial_action message
 *
 * @return  Parameter 3, as defined by UXV_CMD enum.
 */
static inline float mavlink_msg_execute_spatial_action_get_param3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field param4 from execute_spatial_action message
 *
 * @return  Parameter 4, as defined by UXV_CMD enum.
 */
static inline float mavlink_msg_execute_spatial_action_get_param4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field param5 from execute_spatial_action message
 *
 * @return  Parameter 5, as defined by UXV_CMD enum.
 */
static inline float mavlink_msg_execute_spatial_action_get_param5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field param6 from execute_spatial_action message
 *
 * @return  Parameter 6, as defined by UXV_CMD enum.
 */
static inline float mavlink_msg_execute_spatial_action_get_param6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field param7 from execute_spatial_action message
 *
 * @return  Parameter 7, as defined by UXV_CMD enum.
 */
static inline float mavlink_msg_execute_spatial_action_get_param7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a execute_spatial_action message into a struct
 *
 * @param msg The message to decode
 * @param execute_spatial_action C-struct to decode the message contents into
 */
static inline void mavlink_msg_execute_spatial_action_decode(const mavlink_message_t* msg, mavlink_execute_spatial_action_t* execute_spatial_action)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    execute_spatial_action->param1 = mavlink_msg_execute_spatial_action_get_param1(msg);
    execute_spatial_action->param2 = mavlink_msg_execute_spatial_action_get_param2(msg);
    execute_spatial_action->param3 = mavlink_msg_execute_spatial_action_get_param3(msg);
    execute_spatial_action->param4 = mavlink_msg_execute_spatial_action_get_param4(msg);
    execute_spatial_action->param5 = mavlink_msg_execute_spatial_action_get_param5(msg);
    execute_spatial_action->param6 = mavlink_msg_execute_spatial_action_get_param6(msg);
    execute_spatial_action->param7 = mavlink_msg_execute_spatial_action_get_param7(msg);
    execute_spatial_action->action = mavlink_msg_execute_spatial_action_get_action(msg);
    execute_spatial_action->mask = mavlink_msg_execute_spatial_action_get_mask(msg);
    execute_spatial_action->target_system = mavlink_msg_execute_spatial_action_get_target_system(msg);
    execute_spatial_action->target_component = mavlink_msg_execute_spatial_action_get_target_component(msg);
    execute_spatial_action->frame = mavlink_msg_execute_spatial_action_get_frame(msg);
    execute_spatial_action->dimension = mavlink_msg_execute_spatial_action_get_dimension(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN? msg->len : MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN;
        memset(execute_spatial_action, 0, MAVLINK_MSG_ID_EXECUTE_SPATIAL_ACTION_LEN);
    memcpy(execute_spatial_action, _MAV_PAYLOAD(msg), len);
#endif
}
