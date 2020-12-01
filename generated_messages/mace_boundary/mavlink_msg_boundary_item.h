#pragma once
// MESSAGE BOUNDARY_ITEM PACKING

#define MAVLINK_MSG_ID_BOUNDARY_ITEM 12105


typedef struct __mavlink_boundary_item_t {
 float x; /*<  PARAM5 / local: x position, global: latitude.*/
 float y; /*<  PARAM6 / y position: global: longitude.*/
 float z; /*<  PARAM7 / z position: global: altitude (relative or absolute, depending on frame.*/
 uint16_t seq; /*<  Item index within the bonudary sequence.*/
 uint8_t boundary_host_sysid; /*<  System ID*/
 uint8_t boundary_host_compid; /*<  Creator ID*/
 uint8_t boundary_identifier; /*<  Number to identifiy boundary on host.*/
 uint8_t frame; /*<  The coordinate system of the boundary. see MAV_FRAME in mavlink_types.h*/
} mavlink_boundary_item_t;

#define MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN 18
#define MAVLINK_MSG_ID_BOUNDARY_ITEM_MIN_LEN 18
#define MAVLINK_MSG_ID_12105_LEN 18
#define MAVLINK_MSG_ID_12105_MIN_LEN 18

#define MAVLINK_MSG_ID_BOUNDARY_ITEM_CRC 66
#define MAVLINK_MSG_ID_12105_CRC 66



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BOUNDARY_ITEM { \
    12105, \
    "BOUNDARY_ITEM", \
    8, \
    {  { "boundary_host_sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_boundary_item_t, boundary_host_sysid) }, \
         { "boundary_host_compid", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_boundary_item_t, boundary_host_compid) }, \
         { "boundary_identifier", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_boundary_item_t, boundary_identifier) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_boundary_item_t, frame) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_boundary_item_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_boundary_item_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_boundary_item_t, z) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_boundary_item_t, seq) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BOUNDARY_ITEM { \
    "BOUNDARY_ITEM", \
    8, \
    {  { "boundary_host_sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_boundary_item_t, boundary_host_sysid) }, \
         { "boundary_host_compid", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_boundary_item_t, boundary_host_compid) }, \
         { "boundary_identifier", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_boundary_item_t, boundary_identifier) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_boundary_item_t, frame) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_boundary_item_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_boundary_item_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_boundary_item_t, z) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_boundary_item_t, seq) }, \
         } \
}
#endif

/**
 * @brief Pack a boundary_item message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param boundary_host_sysid  System ID
 * @param boundary_host_compid  Creator ID
 * @param boundary_identifier  Number to identifiy boundary on host.
 * @param frame  The coordinate system of the boundary. see MAV_FRAME in mavlink_types.h
 * @param x  PARAM5 / local: x position, global: latitude.
 * @param y  PARAM6 / y position: global: longitude.
 * @param z  PARAM7 / z position: global: altitude (relative or absolute, depending on frame.
 * @param seq  Item index within the bonudary sequence.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_boundary_item_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t boundary_host_sysid, uint8_t boundary_host_compid, uint8_t boundary_identifier, uint8_t frame, float x, float y, float z, uint16_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_uint16_t(buf, 12, seq);
    _mav_put_uint8_t(buf, 14, boundary_host_sysid);
    _mav_put_uint8_t(buf, 15, boundary_host_compid);
    _mav_put_uint8_t(buf, 16, boundary_identifier);
    _mav_put_uint8_t(buf, 17, frame);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN);
#else
    mavlink_boundary_item_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.seq = seq;
    packet.boundary_host_sysid = boundary_host_sysid;
    packet.boundary_host_compid = boundary_host_compid;
    packet.boundary_identifier = boundary_identifier;
    packet.frame = frame;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BOUNDARY_ITEM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BOUNDARY_ITEM_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_CRC);
}

/**
 * @brief Pack a boundary_item message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param boundary_host_sysid  System ID
 * @param boundary_host_compid  Creator ID
 * @param boundary_identifier  Number to identifiy boundary on host.
 * @param frame  The coordinate system of the boundary. see MAV_FRAME in mavlink_types.h
 * @param x  PARAM5 / local: x position, global: latitude.
 * @param y  PARAM6 / y position: global: longitude.
 * @param z  PARAM7 / z position: global: altitude (relative or absolute, depending on frame.
 * @param seq  Item index within the bonudary sequence.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_boundary_item_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t boundary_host_sysid,uint8_t boundary_host_compid,uint8_t boundary_identifier,uint8_t frame,float x,float y,float z,uint16_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_uint16_t(buf, 12, seq);
    _mav_put_uint8_t(buf, 14, boundary_host_sysid);
    _mav_put_uint8_t(buf, 15, boundary_host_compid);
    _mav_put_uint8_t(buf, 16, boundary_identifier);
    _mav_put_uint8_t(buf, 17, frame);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN);
#else
    mavlink_boundary_item_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.seq = seq;
    packet.boundary_host_sysid = boundary_host_sysid;
    packet.boundary_host_compid = boundary_host_compid;
    packet.boundary_identifier = boundary_identifier;
    packet.frame = frame;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BOUNDARY_ITEM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BOUNDARY_ITEM_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_CRC);
}

/**
 * @brief Encode a boundary_item struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param boundary_item C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_boundary_item_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_boundary_item_t* boundary_item)
{
    return mavlink_msg_boundary_item_pack(system_id, component_id, msg, boundary_item->boundary_host_sysid, boundary_item->boundary_host_compid, boundary_item->boundary_identifier, boundary_item->frame, boundary_item->x, boundary_item->y, boundary_item->z, boundary_item->seq);
}

/**
 * @brief Encode a boundary_item struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param boundary_item C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_boundary_item_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_boundary_item_t* boundary_item)
{
    return mavlink_msg_boundary_item_pack_chan(system_id, component_id, chan, msg, boundary_item->boundary_host_sysid, boundary_item->boundary_host_compid, boundary_item->boundary_identifier, boundary_item->frame, boundary_item->x, boundary_item->y, boundary_item->z, boundary_item->seq);
}

/**
 * @brief Send a boundary_item message
 * @param chan MAVLink channel to send the message
 *
 * @param boundary_host_sysid  System ID
 * @param boundary_host_compid  Creator ID
 * @param boundary_identifier  Number to identifiy boundary on host.
 * @param frame  The coordinate system of the boundary. see MAV_FRAME in mavlink_types.h
 * @param x  PARAM5 / local: x position, global: latitude.
 * @param y  PARAM6 / y position: global: longitude.
 * @param z  PARAM7 / z position: global: altitude (relative or absolute, depending on frame.
 * @param seq  Item index within the bonudary sequence.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_boundary_item_send(mavlink_channel_t chan, uint8_t boundary_host_sysid, uint8_t boundary_host_compid, uint8_t boundary_identifier, uint8_t frame, float x, float y, float z, uint16_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_uint16_t(buf, 12, seq);
    _mav_put_uint8_t(buf, 14, boundary_host_sysid);
    _mav_put_uint8_t(buf, 15, boundary_host_compid);
    _mav_put_uint8_t(buf, 16, boundary_identifier);
    _mav_put_uint8_t(buf, 17, frame);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BOUNDARY_ITEM, buf, MAVLINK_MSG_ID_BOUNDARY_ITEM_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_CRC);
#else
    mavlink_boundary_item_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.seq = seq;
    packet.boundary_host_sysid = boundary_host_sysid;
    packet.boundary_host_compid = boundary_host_compid;
    packet.boundary_identifier = boundary_identifier;
    packet.frame = frame;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BOUNDARY_ITEM, (const char *)&packet, MAVLINK_MSG_ID_BOUNDARY_ITEM_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_CRC);
#endif
}

/**
 * @brief Send a boundary_item message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_boundary_item_send_struct(mavlink_channel_t chan, const mavlink_boundary_item_t* boundary_item)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_boundary_item_send(chan, boundary_item->boundary_host_sysid, boundary_item->boundary_host_compid, boundary_item->boundary_identifier, boundary_item->frame, boundary_item->x, boundary_item->y, boundary_item->z, boundary_item->seq);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BOUNDARY_ITEM, (const char *)boundary_item, MAVLINK_MSG_ID_BOUNDARY_ITEM_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_CRC);
#endif
}

#if MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_boundary_item_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t boundary_host_sysid, uint8_t boundary_host_compid, uint8_t boundary_identifier, uint8_t frame, float x, float y, float z, uint16_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_uint16_t(buf, 12, seq);
    _mav_put_uint8_t(buf, 14, boundary_host_sysid);
    _mav_put_uint8_t(buf, 15, boundary_host_compid);
    _mav_put_uint8_t(buf, 16, boundary_identifier);
    _mav_put_uint8_t(buf, 17, frame);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BOUNDARY_ITEM, buf, MAVLINK_MSG_ID_BOUNDARY_ITEM_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_CRC);
#else
    mavlink_boundary_item_t *packet = (mavlink_boundary_item_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->seq = seq;
    packet->boundary_host_sysid = boundary_host_sysid;
    packet->boundary_host_compid = boundary_host_compid;
    packet->boundary_identifier = boundary_identifier;
    packet->frame = frame;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BOUNDARY_ITEM, (const char *)packet, MAVLINK_MSG_ID_BOUNDARY_ITEM_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN, MAVLINK_MSG_ID_BOUNDARY_ITEM_CRC);
#endif
}
#endif

#endif

// MESSAGE BOUNDARY_ITEM UNPACKING


/**
 * @brief Get field boundary_host_sysid from boundary_item message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_boundary_item_get_boundary_host_sysid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field boundary_host_compid from boundary_item message
 *
 * @return  Creator ID
 */
static inline uint8_t mavlink_msg_boundary_item_get_boundary_host_compid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field boundary_identifier from boundary_item message
 *
 * @return  Number to identifiy boundary on host.
 */
static inline uint8_t mavlink_msg_boundary_item_get_boundary_identifier(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field frame from boundary_item message
 *
 * @return  The coordinate system of the boundary. see MAV_FRAME in mavlink_types.h
 */
static inline uint8_t mavlink_msg_boundary_item_get_frame(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field x from boundary_item message
 *
 * @return  PARAM5 / local: x position, global: latitude.
 */
static inline float mavlink_msg_boundary_item_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from boundary_item message
 *
 * @return  PARAM6 / y position: global: longitude.
 */
static inline float mavlink_msg_boundary_item_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from boundary_item message
 *
 * @return  PARAM7 / z position: global: altitude (relative or absolute, depending on frame.
 */
static inline float mavlink_msg_boundary_item_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field seq from boundary_item message
 *
 * @return  Item index within the bonudary sequence.
 */
static inline uint16_t mavlink_msg_boundary_item_get_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Decode a boundary_item message into a struct
 *
 * @param msg The message to decode
 * @param boundary_item C-struct to decode the message contents into
 */
static inline void mavlink_msg_boundary_item_decode(const mavlink_message_t* msg, mavlink_boundary_item_t* boundary_item)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    boundary_item->x = mavlink_msg_boundary_item_get_x(msg);
    boundary_item->y = mavlink_msg_boundary_item_get_y(msg);
    boundary_item->z = mavlink_msg_boundary_item_get_z(msg);
    boundary_item->seq = mavlink_msg_boundary_item_get_seq(msg);
    boundary_item->boundary_host_sysid = mavlink_msg_boundary_item_get_boundary_host_sysid(msg);
    boundary_item->boundary_host_compid = mavlink_msg_boundary_item_get_boundary_host_compid(msg);
    boundary_item->boundary_identifier = mavlink_msg_boundary_item_get_boundary_identifier(msg);
    boundary_item->frame = mavlink_msg_boundary_item_get_frame(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN? msg->len : MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN;
        memset(boundary_item, 0, MAVLINK_MSG_ID_BOUNDARY_ITEM_LEN);
    memcpy(boundary_item, _MAV_PAYLOAD(msg), len);
#endif
}
