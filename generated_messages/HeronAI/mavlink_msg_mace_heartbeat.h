#pragma once
// MESSAGE MACE_HEARTBEAT PACKING

#define MAVLINK_MSG_ID_MACE_HEARTBEAT 397


typedef struct __mavlink_mace_heartbeat_t {
 uint8_t protocol; /*<  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)*/
 uint8_t type; /*<  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)*/
 uint8_t autopilot; /*<  Autopilot type / class. defined in MAV_AUTOPILOT ENUM*/
 uint8_t vehicle_mode; /*<  The flight mode in its enumerated form. This must be cast per the type of vehicle it is.*/
 uint8_t vehicle_armed; /*<  Boolean describing whether(T=1) or not(F=0) the vehicle is armed.*/
 uint8_t mission_state; /*<  Defines the current state of the vehicle mission. Useful for determing the next state of the vehicle per mission state.*/
 uint8_t mace_companion; /*<  Boolean describing whether(T=1) or not(F=0) the vehicle is MACE companion equipped.*/
 uint8_t mavlink_version; /*<  MAVLink version, not writable by user, gets added by protocol because of magic data type: uint8_t_mavlink_version*/
 uint8_t mavlinkID; /*<  */
} mavlink_mace_heartbeat_t;

#define MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN 9
#define MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN 9
#define MAVLINK_MSG_ID_397_LEN 9
#define MAVLINK_MSG_ID_397_MIN_LEN 9

#define MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC 251
#define MAVLINK_MSG_ID_397_CRC 251



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MACE_HEARTBEAT { \
    397, \
    "MACE_HEARTBEAT", \
    9, \
    {  { "protocol", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_mace_heartbeat_t, protocol) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_mace_heartbeat_t, type) }, \
         { "autopilot", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_mace_heartbeat_t, autopilot) }, \
         { "vehicle_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_mace_heartbeat_t, vehicle_mode) }, \
         { "vehicle_armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mace_heartbeat_t, vehicle_armed) }, \
         { "mission_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_mace_heartbeat_t, mission_state) }, \
         { "mace_companion", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_mace_heartbeat_t, mace_companion) }, \
         { "mavlink_version", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_mace_heartbeat_t, mavlink_version) }, \
         { "mavlinkID", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_mace_heartbeat_t, mavlinkID) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MACE_HEARTBEAT { \
    "MACE_HEARTBEAT", \
    9, \
    {  { "protocol", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_mace_heartbeat_t, protocol) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_mace_heartbeat_t, type) }, \
         { "autopilot", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_mace_heartbeat_t, autopilot) }, \
         { "vehicle_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_mace_heartbeat_t, vehicle_mode) }, \
         { "vehicle_armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mace_heartbeat_t, vehicle_armed) }, \
         { "mission_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_mace_heartbeat_t, mission_state) }, \
         { "mace_companion", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_mace_heartbeat_t, mace_companion) }, \
         { "mavlink_version", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_mace_heartbeat_t, mavlink_version) }, \
         { "mavlinkID", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_mace_heartbeat_t, mavlinkID) }, \
         } \
}
#endif

/**
 * @brief Pack a mace_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param protocol  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 * @param type  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 * @param autopilot  Autopilot type / class. defined in MAV_AUTOPILOT ENUM
 * @param vehicle_mode  The flight mode in its enumerated form. This must be cast per the type of vehicle it is.
 * @param vehicle_armed  Boolean describing whether(T=1) or not(F=0) the vehicle is armed.
 * @param mission_state  Defines the current state of the vehicle mission. Useful for determing the next state of the vehicle per mission state.
 * @param mace_companion  Boolean describing whether(T=1) or not(F=0) the vehicle is MACE companion equipped.
 * @param mavlinkID  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mace_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t protocol, uint8_t type, uint8_t autopilot, uint8_t vehicle_mode, uint8_t vehicle_armed, uint8_t mission_state, uint8_t mace_companion, uint8_t mavlinkID)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, protocol);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, autopilot);
    _mav_put_uint8_t(buf, 3, vehicle_mode);
    _mav_put_uint8_t(buf, 4, vehicle_armed);
    _mav_put_uint8_t(buf, 5, mission_state);
    _mav_put_uint8_t(buf, 6, mace_companion);
    _mav_put_uint8_t(buf, 7, 2);
    _mav_put_uint8_t(buf, 8, mavlinkID);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN);
#else
    mavlink_mace_heartbeat_t packet;
    packet.protocol = protocol;
    packet.type = type;
    packet.autopilot = autopilot;
    packet.vehicle_mode = vehicle_mode;
    packet.vehicle_armed = vehicle_armed;
    packet.mission_state = mission_state;
    packet.mace_companion = mace_companion;
    packet.mavlink_version = 2;
    packet.mavlinkID = mavlinkID;

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
 * @param protocol  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 * @param type  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 * @param autopilot  Autopilot type / class. defined in MAV_AUTOPILOT ENUM
 * @param vehicle_mode  The flight mode in its enumerated form. This must be cast per the type of vehicle it is.
 * @param vehicle_armed  Boolean describing whether(T=1) or not(F=0) the vehicle is armed.
 * @param mission_state  Defines the current state of the vehicle mission. Useful for determing the next state of the vehicle per mission state.
 * @param mace_companion  Boolean describing whether(T=1) or not(F=0) the vehicle is MACE companion equipped.
 * @param mavlinkID  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mace_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t protocol,uint8_t type,uint8_t autopilot,uint8_t vehicle_mode,uint8_t vehicle_armed,uint8_t mission_state,uint8_t mace_companion,uint8_t mavlinkID)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, protocol);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, autopilot);
    _mav_put_uint8_t(buf, 3, vehicle_mode);
    _mav_put_uint8_t(buf, 4, vehicle_armed);
    _mav_put_uint8_t(buf, 5, mission_state);
    _mav_put_uint8_t(buf, 6, mace_companion);
    _mav_put_uint8_t(buf, 7, 2);
    _mav_put_uint8_t(buf, 8, mavlinkID);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN);
#else
    mavlink_mace_heartbeat_t packet;
    packet.protocol = protocol;
    packet.type = type;
    packet.autopilot = autopilot;
    packet.vehicle_mode = vehicle_mode;
    packet.vehicle_armed = vehicle_armed;
    packet.mission_state = mission_state;
    packet.mace_companion = mace_companion;
    packet.mavlink_version = 2;
    packet.mavlinkID = mavlinkID;

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
    return mavlink_msg_mace_heartbeat_pack(system_id, component_id, msg, mace_heartbeat->protocol, mace_heartbeat->type, mace_heartbeat->autopilot, mace_heartbeat->vehicle_mode, mace_heartbeat->vehicle_armed, mace_heartbeat->mission_state, mace_heartbeat->mace_companion, mace_heartbeat->mavlinkID);
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
    return mavlink_msg_mace_heartbeat_pack_chan(system_id, component_id, chan, msg, mace_heartbeat->protocol, mace_heartbeat->type, mace_heartbeat->autopilot, mace_heartbeat->vehicle_mode, mace_heartbeat->vehicle_armed, mace_heartbeat->mission_state, mace_heartbeat->mace_companion, mace_heartbeat->mavlinkID);
}

/**
 * @brief Send a mace_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param protocol  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 * @param type  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 * @param autopilot  Autopilot type / class. defined in MAV_AUTOPILOT ENUM
 * @param vehicle_mode  The flight mode in its enumerated form. This must be cast per the type of vehicle it is.
 * @param vehicle_armed  Boolean describing whether(T=1) or not(F=0) the vehicle is armed.
 * @param mission_state  Defines the current state of the vehicle mission. Useful for determing the next state of the vehicle per mission state.
 * @param mace_companion  Boolean describing whether(T=1) or not(F=0) the vehicle is MACE companion equipped.
 * @param mavlinkID  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mace_heartbeat_send(mavlink_channel_t chan, uint8_t protocol, uint8_t type, uint8_t autopilot, uint8_t vehicle_mode, uint8_t vehicle_armed, uint8_t mission_state, uint8_t mace_companion, uint8_t mavlinkID)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, protocol);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, autopilot);
    _mav_put_uint8_t(buf, 3, vehicle_mode);
    _mav_put_uint8_t(buf, 4, vehicle_armed);
    _mav_put_uint8_t(buf, 5, mission_state);
    _mav_put_uint8_t(buf, 6, mace_companion);
    _mav_put_uint8_t(buf, 7, 2);
    _mav_put_uint8_t(buf, 8, mavlinkID);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_HEARTBEAT, buf, MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC);
#else
    mavlink_mace_heartbeat_t packet;
    packet.protocol = protocol;
    packet.type = type;
    packet.autopilot = autopilot;
    packet.vehicle_mode = vehicle_mode;
    packet.vehicle_armed = vehicle_armed;
    packet.mission_state = mission_state;
    packet.mace_companion = mace_companion;
    packet.mavlink_version = 2;
    packet.mavlinkID = mavlinkID;

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
    mavlink_msg_mace_heartbeat_send(chan, mace_heartbeat->protocol, mace_heartbeat->type, mace_heartbeat->autopilot, mace_heartbeat->vehicle_mode, mace_heartbeat->vehicle_armed, mace_heartbeat->mission_state, mace_heartbeat->mace_companion, mace_heartbeat->mavlinkID);
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
static inline void mavlink_msg_mace_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t protocol, uint8_t type, uint8_t autopilot, uint8_t vehicle_mode, uint8_t vehicle_armed, uint8_t mission_state, uint8_t mace_companion, uint8_t mavlinkID)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, protocol);
    _mav_put_uint8_t(buf, 1, type);
    _mav_put_uint8_t(buf, 2, autopilot);
    _mav_put_uint8_t(buf, 3, vehicle_mode);
    _mav_put_uint8_t(buf, 4, vehicle_armed);
    _mav_put_uint8_t(buf, 5, mission_state);
    _mav_put_uint8_t(buf, 6, mace_companion);
    _mav_put_uint8_t(buf, 7, 2);
    _mav_put_uint8_t(buf, 8, mavlinkID);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_HEARTBEAT, buf, MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC);
#else
    mavlink_mace_heartbeat_t *packet = (mavlink_mace_heartbeat_t *)msgbuf;
    packet->protocol = protocol;
    packet->type = type;
    packet->autopilot = autopilot;
    packet->vehicle_mode = vehicle_mode;
    packet->vehicle_armed = vehicle_armed;
    packet->mission_state = mission_state;
    packet->mace_companion = mace_companion;
    packet->mavlink_version = 2;
    packet->mavlinkID = mavlinkID;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MACE_HEARTBEAT, (const char *)packet, MAVLINK_MSG_ID_MACE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN, MAVLINK_MSG_ID_MACE_HEARTBEAT_CRC);
#endif
}
#endif

#endif

// MESSAGE MACE_HEARTBEAT UNPACKING


/**
 * @brief Get field protocol from mace_heartbeat message
 *
 * @return  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_protocol(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field type from mace_heartbeat message
 *
 * @return  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field autopilot from mace_heartbeat message
 *
 * @return  Autopilot type / class. defined in MAV_AUTOPILOT ENUM
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_autopilot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field vehicle_mode from mace_heartbeat message
 *
 * @return  The flight mode in its enumerated form. This must be cast per the type of vehicle it is.
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_vehicle_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field vehicle_armed from mace_heartbeat message
 *
 * @return  Boolean describing whether(T=1) or not(F=0) the vehicle is armed.
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_vehicle_armed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field mission_state from mace_heartbeat message
 *
 * @return  Defines the current state of the vehicle mission. Useful for determing the next state of the vehicle per mission state.
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_mission_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field mace_companion from mace_heartbeat message
 *
 * @return  Boolean describing whether(T=1) or not(F=0) the vehicle is MACE companion equipped.
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_mace_companion(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field mavlink_version from mace_heartbeat message
 *
 * @return  MAVLink version, not writable by user, gets added by protocol because of magic data type: uint8_t_mavlink_version
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_mavlink_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field mavlinkID from mace_heartbeat message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_mace_heartbeat_get_mavlinkID(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
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
    mace_heartbeat->protocol = mavlink_msg_mace_heartbeat_get_protocol(msg);
    mace_heartbeat->type = mavlink_msg_mace_heartbeat_get_type(msg);
    mace_heartbeat->autopilot = mavlink_msg_mace_heartbeat_get_autopilot(msg);
    mace_heartbeat->vehicle_mode = mavlink_msg_mace_heartbeat_get_vehicle_mode(msg);
    mace_heartbeat->vehicle_armed = mavlink_msg_mace_heartbeat_get_vehicle_armed(msg);
    mace_heartbeat->mission_state = mavlink_msg_mace_heartbeat_get_mission_state(msg);
    mace_heartbeat->mace_companion = mavlink_msg_mace_heartbeat_get_mace_companion(msg);
    mace_heartbeat->mavlink_version = mavlink_msg_mace_heartbeat_get_mavlink_version(msg);
    mace_heartbeat->mavlinkID = mavlink_msg_mace_heartbeat_get_mavlinkID(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN;
        memset(mace_heartbeat, 0, MAVLINK_MSG_ID_MACE_HEARTBEAT_LEN);
    memcpy(mace_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}
