#pragma once
// MESSAGE NEW_BOUNDARY_OBJECT PACKING

#define MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT 12100


typedef struct __mavlink_new_boundary_object_t {
 uint8_t boundary_host_sysid; /*<  System ID*/
 uint8_t boundary_host_compid; /*<  Creator ID*/
 uint8_t boundary_type; /*<  Boundary type, see BOUNDARY_TYPE.*/
 uint8_t boundary_identifier; /*<  Number to identifiy boundary on host.*/
 uint8_t vehicle_aplicable; /*<  The vehicle that boundary applies to.*/
 uint8_t num_vehicles; /*<  Number of vehicles that the boundary contains.*/
} mavlink_new_boundary_object_t;

#define MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN 6
#define MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_MIN_LEN 6
#define MAVLINK_MSG_ID_12100_LEN 6
#define MAVLINK_MSG_ID_12100_MIN_LEN 6

#define MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_CRC 52
#define MAVLINK_MSG_ID_12100_CRC 52



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_NEW_BOUNDARY_OBJECT { \
    12100, \
    "NEW_BOUNDARY_OBJECT", \
    6, \
    {  { "boundary_host_sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_new_boundary_object_t, boundary_host_sysid) }, \
         { "boundary_host_compid", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_new_boundary_object_t, boundary_host_compid) }, \
         { "boundary_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_new_boundary_object_t, boundary_type) }, \
         { "boundary_identifier", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_new_boundary_object_t, boundary_identifier) }, \
         { "vehicle_aplicable", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_new_boundary_object_t, vehicle_aplicable) }, \
         { "num_vehicles", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_new_boundary_object_t, num_vehicles) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_NEW_BOUNDARY_OBJECT { \
    "NEW_BOUNDARY_OBJECT", \
    6, \
    {  { "boundary_host_sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_new_boundary_object_t, boundary_host_sysid) }, \
         { "boundary_host_compid", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_new_boundary_object_t, boundary_host_compid) }, \
         { "boundary_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_new_boundary_object_t, boundary_type) }, \
         { "boundary_identifier", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_new_boundary_object_t, boundary_identifier) }, \
         { "vehicle_aplicable", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_new_boundary_object_t, vehicle_aplicable) }, \
         { "num_vehicles", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_new_boundary_object_t, num_vehicles) }, \
         } \
}
#endif

/**
 * @brief Pack a new_boundary_object message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param boundary_host_sysid  System ID
 * @param boundary_host_compid  Creator ID
 * @param boundary_type  Boundary type, see BOUNDARY_TYPE.
 * @param boundary_identifier  Number to identifiy boundary on host.
 * @param vehicle_aplicable  The vehicle that boundary applies to.
 * @param num_vehicles  Number of vehicles that the boundary contains.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_new_boundary_object_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t boundary_host_sysid, uint8_t boundary_host_compid, uint8_t boundary_type, uint8_t boundary_identifier, uint8_t vehicle_aplicable, uint8_t num_vehicles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN];
    _mav_put_uint8_t(buf, 0, boundary_host_sysid);
    _mav_put_uint8_t(buf, 1, boundary_host_compid);
    _mav_put_uint8_t(buf, 2, boundary_type);
    _mav_put_uint8_t(buf, 3, boundary_identifier);
    _mav_put_uint8_t(buf, 4, vehicle_aplicable);
    _mav_put_uint8_t(buf, 5, num_vehicles);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN);
#else
    mavlink_new_boundary_object_t packet;
    packet.boundary_host_sysid = boundary_host_sysid;
    packet.boundary_host_compid = boundary_host_compid;
    packet.boundary_type = boundary_type;
    packet.boundary_identifier = boundary_identifier;
    packet.vehicle_aplicable = vehicle_aplicable;
    packet.num_vehicles = num_vehicles;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_MIN_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_CRC);
}

/**
 * @brief Pack a new_boundary_object message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param boundary_host_sysid  System ID
 * @param boundary_host_compid  Creator ID
 * @param boundary_type  Boundary type, see BOUNDARY_TYPE.
 * @param boundary_identifier  Number to identifiy boundary on host.
 * @param vehicle_aplicable  The vehicle that boundary applies to.
 * @param num_vehicles  Number of vehicles that the boundary contains.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_new_boundary_object_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t boundary_host_sysid,uint8_t boundary_host_compid,uint8_t boundary_type,uint8_t boundary_identifier,uint8_t vehicle_aplicable,uint8_t num_vehicles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN];
    _mav_put_uint8_t(buf, 0, boundary_host_sysid);
    _mav_put_uint8_t(buf, 1, boundary_host_compid);
    _mav_put_uint8_t(buf, 2, boundary_type);
    _mav_put_uint8_t(buf, 3, boundary_identifier);
    _mav_put_uint8_t(buf, 4, vehicle_aplicable);
    _mav_put_uint8_t(buf, 5, num_vehicles);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN);
#else
    mavlink_new_boundary_object_t packet;
    packet.boundary_host_sysid = boundary_host_sysid;
    packet.boundary_host_compid = boundary_host_compid;
    packet.boundary_type = boundary_type;
    packet.boundary_identifier = boundary_identifier;
    packet.vehicle_aplicable = vehicle_aplicable;
    packet.num_vehicles = num_vehicles;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_MIN_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_CRC);
}

/**
 * @brief Encode a new_boundary_object struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param new_boundary_object C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_new_boundary_object_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_new_boundary_object_t* new_boundary_object)
{
    return mavlink_msg_new_boundary_object_pack(system_id, component_id, msg, new_boundary_object->boundary_host_sysid, new_boundary_object->boundary_host_compid, new_boundary_object->boundary_type, new_boundary_object->boundary_identifier, new_boundary_object->vehicle_aplicable, new_boundary_object->num_vehicles);
}

/**
 * @brief Encode a new_boundary_object struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param new_boundary_object C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_new_boundary_object_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_new_boundary_object_t* new_boundary_object)
{
    return mavlink_msg_new_boundary_object_pack_chan(system_id, component_id, chan, msg, new_boundary_object->boundary_host_sysid, new_boundary_object->boundary_host_compid, new_boundary_object->boundary_type, new_boundary_object->boundary_identifier, new_boundary_object->vehicle_aplicable, new_boundary_object->num_vehicles);
}

/**
 * @brief Send a new_boundary_object message
 * @param chan MAVLink channel to send the message
 *
 * @param boundary_host_sysid  System ID
 * @param boundary_host_compid  Creator ID
 * @param boundary_type  Boundary type, see BOUNDARY_TYPE.
 * @param boundary_identifier  Number to identifiy boundary on host.
 * @param vehicle_aplicable  The vehicle that boundary applies to.
 * @param num_vehicles  Number of vehicles that the boundary contains.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_new_boundary_object_send(mavlink_channel_t chan, uint8_t boundary_host_sysid, uint8_t boundary_host_compid, uint8_t boundary_type, uint8_t boundary_identifier, uint8_t vehicle_aplicable, uint8_t num_vehicles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN];
    _mav_put_uint8_t(buf, 0, boundary_host_sysid);
    _mav_put_uint8_t(buf, 1, boundary_host_compid);
    _mav_put_uint8_t(buf, 2, boundary_type);
    _mav_put_uint8_t(buf, 3, boundary_identifier);
    _mav_put_uint8_t(buf, 4, vehicle_aplicable);
    _mav_put_uint8_t(buf, 5, num_vehicles);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT, buf, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_MIN_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_CRC);
#else
    mavlink_new_boundary_object_t packet;
    packet.boundary_host_sysid = boundary_host_sysid;
    packet.boundary_host_compid = boundary_host_compid;
    packet.boundary_type = boundary_type;
    packet.boundary_identifier = boundary_identifier;
    packet.vehicle_aplicable = vehicle_aplicable;
    packet.num_vehicles = num_vehicles;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT, (const char *)&packet, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_MIN_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_CRC);
#endif
}

/**
 * @brief Send a new_boundary_object message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_new_boundary_object_send_struct(mavlink_channel_t chan, const mavlink_new_boundary_object_t* new_boundary_object)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_new_boundary_object_send(chan, new_boundary_object->boundary_host_sysid, new_boundary_object->boundary_host_compid, new_boundary_object->boundary_type, new_boundary_object->boundary_identifier, new_boundary_object->vehicle_aplicable, new_boundary_object->num_vehicles);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT, (const char *)new_boundary_object, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_MIN_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_CRC);
#endif
}

#if MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_new_boundary_object_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t boundary_host_sysid, uint8_t boundary_host_compid, uint8_t boundary_type, uint8_t boundary_identifier, uint8_t vehicle_aplicable, uint8_t num_vehicles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, boundary_host_sysid);
    _mav_put_uint8_t(buf, 1, boundary_host_compid);
    _mav_put_uint8_t(buf, 2, boundary_type);
    _mav_put_uint8_t(buf, 3, boundary_identifier);
    _mav_put_uint8_t(buf, 4, vehicle_aplicable);
    _mav_put_uint8_t(buf, 5, num_vehicles);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT, buf, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_MIN_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_CRC);
#else
    mavlink_new_boundary_object_t *packet = (mavlink_new_boundary_object_t *)msgbuf;
    packet->boundary_host_sysid = boundary_host_sysid;
    packet->boundary_host_compid = boundary_host_compid;
    packet->boundary_type = boundary_type;
    packet->boundary_identifier = boundary_identifier;
    packet->vehicle_aplicable = vehicle_aplicable;
    packet->num_vehicles = num_vehicles;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT, (const char *)packet, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_MIN_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_CRC);
#endif
}
#endif

#endif

// MESSAGE NEW_BOUNDARY_OBJECT UNPACKING


/**
 * @brief Get field boundary_host_sysid from new_boundary_object message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_new_boundary_object_get_boundary_host_sysid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field boundary_host_compid from new_boundary_object message
 *
 * @return  Creator ID
 */
static inline uint8_t mavlink_msg_new_boundary_object_get_boundary_host_compid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field boundary_type from new_boundary_object message
 *
 * @return  Boundary type, see BOUNDARY_TYPE.
 */
static inline uint8_t mavlink_msg_new_boundary_object_get_boundary_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field boundary_identifier from new_boundary_object message
 *
 * @return  Number to identifiy boundary on host.
 */
static inline uint8_t mavlink_msg_new_boundary_object_get_boundary_identifier(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field vehicle_aplicable from new_boundary_object message
 *
 * @return  The vehicle that boundary applies to.
 */
static inline uint8_t mavlink_msg_new_boundary_object_get_vehicle_aplicable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field num_vehicles from new_boundary_object message
 *
 * @return  Number of vehicles that the boundary contains.
 */
static inline uint8_t mavlink_msg_new_boundary_object_get_num_vehicles(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a new_boundary_object message into a struct
 *
 * @param msg The message to decode
 * @param new_boundary_object C-struct to decode the message contents into
 */
static inline void mavlink_msg_new_boundary_object_decode(const mavlink_message_t* msg, mavlink_new_boundary_object_t* new_boundary_object)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    new_boundary_object->boundary_host_sysid = mavlink_msg_new_boundary_object_get_boundary_host_sysid(msg);
    new_boundary_object->boundary_host_compid = mavlink_msg_new_boundary_object_get_boundary_host_compid(msg);
    new_boundary_object->boundary_type = mavlink_msg_new_boundary_object_get_boundary_type(msg);
    new_boundary_object->boundary_identifier = mavlink_msg_new_boundary_object_get_boundary_identifier(msg);
    new_boundary_object->vehicle_aplicable = mavlink_msg_new_boundary_object_get_vehicle_aplicable(msg);
    new_boundary_object->num_vehicles = mavlink_msg_new_boundary_object_get_num_vehicles(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN? msg->len : MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN;
        memset(new_boundary_object, 0, MAVLINK_MSG_ID_NEW_BOUNDARY_OBJECT_LEN);
    memcpy(new_boundary_object, _MAV_PAYLOAD(msg), len);
#endif
}
