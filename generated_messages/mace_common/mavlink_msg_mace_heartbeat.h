#pragma once
// MESSAGE MACE_HEARTBEAT PACKING

#define MAVLINK_MSG_ID_MACE_HEARTBEAT 12400


typedef struct __mavlink_mace_heartbeat_t {
 uint8_t id; /*<  vehicle id associated with the heartbeat of this message.*/
 uint8_t type; /*<  Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type.*/
 uint8_t autopilot; /*<  Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.*/
 uint8_t flight_mode; /*<  System mode.*/
 uint8_t vehicle_hsm; /*<  System status flag.*/
 uint8_t mavlink_version; /*<  MAVLink version, not writable by user, gets added by protocol because of magic data type: uint8_t_mavlink_version*/
} mavlink_mace_heartbeat_t;

#define MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN 6
#define MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN 6
#define MAVLINK_MSG_ID_12400_LEN 6
#define MAVLINK_MSG_ID_12400_MIN_LEN 6

#define MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC 44
#define MAVLINK_MSG_ID_12400_CRC 44



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MACE_HEARTBEAT { \
    12400, \
    "MACE_HEARTBEAT", \
    6, \
    {  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_mace_heartbeat_t, id) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_mace_heartbeat_t, type) }, \
         { "autopilot", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_mace_heartbeat_t, autopilot) }, \
         { "flight_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_mace_heartbeat_t, flight_mode) }, \
         { "vehicle_hsm", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mace_heartbeat_t, vehicle_hsm) }, \
         { "mavlink_version", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_mace_heartbeat_t, mavlink_version) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MACE_HEARTBEAT { \
    "MACE_HEARTBEAT", \
    6, \
    {  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_mace_heartbeat_t, id) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_mace_heartbeat_t, type) }, \
         { "autopilot", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_mace_heartbeat_t, autopilot) }, \
         { "flight_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_mace_heartbeat_t, flight_mode) }, \
         { "vehicle_hsm", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mace_heartbeat_t, vehicle_hsm) }, \
         { "mavlink_version", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_mace_heartbeat_t, mavlink_version) }, \
         } \
}
#endif

/**
 * @brief Pack a mace_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  vehicle id associated with the heartbeat of this message.
 * @param type  Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type.
 * @param autopilot  Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.
 * @param flight_mode  System mode.
 * @param vehicle_hsm  System status flag.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mace_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t id, uint8_t type, uint8_t autopilot, uint8_t flight_mode, uint8_t vehicle_hsm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, id);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, autopilot);
    _mav_put_uint8_t(buf, 3, flight_mode);
    _mav_put_uint8_t(buf, 4, vehicle_hsm);
    _mav_put_uint8_t(buf, 5, 3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN);
#else
    mavlink_mace_heartbeat_t packet;
    packet.id = id;
    packet.type = type;
    packet.autopilot = autopilot;
    packet.flight_mode = flight_mode;
    packet.vehicle_hsm = vehicle_hsm;
    packet.mavlink_version = 3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MACE_HEARTBEAT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC);
}

/**
 * @brief Pack a mace_heartbeat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id  vehicle id associated with the heartbeat of this message.
 * @param type  Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type.
 * @param autopilot  Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.
 * @param flight_mode  System mode.
 * @param vehicle_hsm  System status flag.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mace_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t id,uint8_t type,uint8_t autopilot,uint8_t flight_mode,uint8_t vehicle_hsm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, id);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, autopilot);
    _mav_put_uint8_t(buf, 3, flight_mode);
    _mav_put_uint8_t(buf, 4, vehicle_hsm);
    _mav_put_uint8_t(buf, 5, 3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN);
#else
    mavlink_mace_heartbeat_t packet;
    packet.id = id;
    packet.type = type;
    packet.autopilot = autopilot;
    packet.flight_mode = flight_mode;
    packet.vehicle_hsm = vehicle_hsm;
    packet.mavlink_version = 3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MACE_HEARTBEAT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC);
}

/**
 * @brief Encode a mace_heartbeat struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mace_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mace_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mace_heartbeat_t* mace_heartbeat)
{
    return mavlink_msg_mace_heartbeat_pack(system_id, component_id, msg, mace_heartbeat->id, mace_heartbeat->type, mace_heartbeat->autopilot, mace_heartbeat->flight_mode, mace_heartbeat->vehicle_hsm);
}

/**
 * @brief Encode a mace_heartbeat struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mace_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mace_heartbeat_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mace_heartbeat_t* mace_heartbeat)
{
    return mavlink_msg_mace_heartbeat_pack_chan(system_id, component_id, chan, msg, mace_heartbeat->id, mace_heartbeat->type, mace_heartbeat->autopilot, mace_heartbeat->flight_mode, mace_heartbeat->vehicle_hsm);
}

/**
 * @brief Send a mace_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param id  vehicle id associated with the heartbeat of this message.
 * @param type  Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type.
 * @param autopilot  Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.
 * @param flight_mode  System mode.
 * @param vehicle_hsm  System status flag.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mace_heartbeat_send(mavlink_channel_t chan, uint8_t id, uint8_t type, uint8_t autopilot, uint8_t flight_mode, uint8_t vehicle_hsm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, id);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, autopilot);
    _mav_put_uint8_t(buf, 3, flight_mode);
    _mav_put_uint8_t(buf, 4, vehicle_hsm);
    _mav_put_uint8_t(buf, 5, 3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_HEARTBEAT, buf, MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC);
#else
    mavlink_mace_heartbeat_t packet;
    packet.id = id;
    packet.type = type;
    packet.autopilot = autopilot;
    packet.flight_mode = flight_mode;
    packet.vehicle_hsm = vehicle_hsm;
    packet.mavlink_version = 3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_HEARTBEAT, (const char *)&packet, MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC);
#endif
}

/**
 * @brief Send a mace_heartbeat message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mace_heartbeat_send_struct(mavlink_channel_t chan, const mavlink_mace_heartbeat_t* mace_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mace_heartbeat_send(chan, mace_heartbeat->id, mace_heartbeat->type, mace_heartbeat->autopilot, mace_heartbeat->flight_mode, mace_heartbeat->vehicle_hsm);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_HEARTBEAT, (const char *)mace_heartbeat, MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC);
#endif
}

#if MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mace_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t id, uint8_t type, uint8_t autopilot, uint8_t flight_mode, uint8_t vehicle_hsm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, id);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, autopilot);
    _mav_put_uint8_t(buf, 3, flight_mode);
    _mav_put_uint8_t(buf, 4, vehicle_hsm);
    _mav_put_uint8_t(buf, 5, 3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_HEARTBEAT, buf, MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC);
#else
    mavlink_mace_heartbeat_t *packet = (mavlink_mace_heartbeat_t *)msgbuf;
    packet->id = id;
    packet->type = type;
    packet->autopilot = autopilot;
    packet->flight_mode = flight_mode;
    packet->vehicle_hsm = vehicle_hsm;
    packet->mavlink_version = 3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_HEARTBEAT, (const char *)packet, MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC);
#endif
}
#endif

#endif

// MESSAGE MACE_HEARTBEAT UNPACKING


/**
 * @brief Get field id from mace_heartbeat message
 *
 * @return  vehicle id associated with the heartbeat of this message.
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field type from mace_heartbeat message
 *
 * @return  Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type.
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field autopilot from mace_heartbeat message
 *
 * @return  Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_autopilot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field flight_mode from mace_heartbeat message
 *
 * @return  System mode.
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_flight_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field vehicle_hsm from mace_heartbeat message
 *
 * @return  System status flag.
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_vehicle_hsm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field mavlink_version from mace_heartbeat message
 *
 * @return  MAVLink version, not writable by user, gets added by protocol because of magic data type: uint8_t_mavlink_version
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_mavlink_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a mace_heartbeat message into a struct
 *
 * @param msg The message to decode
 * @param mace_heartbeat C-struct to decode the message contents into
 */
static inline void mavlink_msg_mace_heartbeat_decode(const mavlink_message_t* msg, mavlink_mace_heartbeat_t* mace_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mace_heartbeat->id = mavlink_msg_mace_heartbeat_get_id(msg);
    mace_heartbeat->type = mavlink_msg_mace_heartbeat_get_type(msg);
    mace_heartbeat->autopilot = mavlink_msg_mace_heartbeat_get_autopilot(msg);
    mace_heartbeat->flight_mode = mavlink_msg_mace_heartbeat_get_flight_mode(msg);
    mace_heartbeat->vehicle_hsm = mavlink_msg_mace_heartbeat_get_vehicle_hsm(msg);
    mace_heartbeat->mavlink_version = mavlink_msg_mace_heartbeat_get_mavlink_version(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN;
        memset(mace_heartbeat, 0, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN);
    memcpy(mace_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}
