#pragma once
// MESSAGE BOUNDARY_COUNT PACKING

#define MAVLINK_MSG_ID_BOUNDARY_COUNT 12103


typedef struct __mavlink_boundary_count_t {
 uint16_t count; /*<  Number of items defining the boundary.*/
 uint8_t boundary_host_sysid; /*<  System ID*/
 uint8_t boundary_host_compid; /*<  Creator ID*/
 uint8_t boundary_identifier; /*<  Number to identifiy boundary on host.*/
} mavlink_boundary_count_t;

#define MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN 5
#define MAVLINK_MSG_ID_BOUNDARY_COUNT_MIN_LEN 5
#define MAVLINK_MSG_ID_12103_LEN 5
#define MAVLINK_MSG_ID_12103_MIN_LEN 5

#define MAVLINK_MSG_ID_BOUNDARY_COUNT_CRC 122
#define MAVLINK_MSG_ID_12103_CRC 122



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BOUNDARY_COUNT { \
    12103, \
    "BOUNDARY_COUNT", \
    4, \
    {  { "boundary_host_sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_boundary_count_t, boundary_host_sysid) }, \
         { "boundary_host_compid", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_boundary_count_t, boundary_host_compid) }, \
         { "boundary_identifier", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_boundary_count_t, boundary_identifier) }, \
         { "count", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_boundary_count_t, count) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BOUNDARY_COUNT { \
    "BOUNDARY_COUNT", \
    4, \
    {  { "boundary_host_sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_boundary_count_t, boundary_host_sysid) }, \
         { "boundary_host_compid", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_boundary_count_t, boundary_host_compid) }, \
         { "boundary_identifier", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_boundary_count_t, boundary_identifier) }, \
         { "count", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_boundary_count_t, count) }, \
         } \
}
#endif

/**
 * @brief Pack a boundary_count message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param boundary_host_sysid  System ID
 * @param boundary_host_compid  Creator ID
 * @param boundary_identifier  Number to identifiy boundary on host.
 * @param count  Number of items defining the boundary.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_boundary_count_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t boundary_host_sysid, uint8_t boundary_host_compid, uint8_t boundary_identifier, uint16_t count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN];
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, boundary_host_sysid);
    _mav_put_uint8_t(buf, 3, boundary_host_compid);
    _mav_put_uint8_t(buf, 4, boundary_identifier);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN);
#else
    mavlink_boundary_count_t packet;
    packet.count = count;
    packet.boundary_host_sysid = boundary_host_sysid;
    packet.boundary_host_compid = boundary_host_compid;
    packet.boundary_identifier = boundary_identifier;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BOUNDARY_COUNT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BOUNDARY_COUNT_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_CRC);
}

/**
 * @brief Pack a boundary_count message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param boundary_host_sysid  System ID
 * @param boundary_host_compid  Creator ID
 * @param boundary_identifier  Number to identifiy boundary on host.
 * @param count  Number of items defining the boundary.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_boundary_count_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t boundary_host_sysid,uint8_t boundary_host_compid,uint8_t boundary_identifier,uint16_t count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN];
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, boundary_host_sysid);
    _mav_put_uint8_t(buf, 3, boundary_host_compid);
    _mav_put_uint8_t(buf, 4, boundary_identifier);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN);
#else
    mavlink_boundary_count_t packet;
    packet.count = count;
    packet.boundary_host_sysid = boundary_host_sysid;
    packet.boundary_host_compid = boundary_host_compid;
    packet.boundary_identifier = boundary_identifier;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BOUNDARY_COUNT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BOUNDARY_COUNT_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_CRC);
}

/**
 * @brief Encode a boundary_count struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param boundary_count C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_boundary_count_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_boundary_count_t* boundary_count)
{
    return mavlink_msg_boundary_count_pack(system_id, component_id, msg, boundary_count->boundary_host_sysid, boundary_count->boundary_host_compid, boundary_count->boundary_identifier, boundary_count->count);
}

/**
 * @brief Encode a boundary_count struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param boundary_count C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_boundary_count_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_boundary_count_t* boundary_count)
{
    return mavlink_msg_boundary_count_pack_chan(system_id, component_id, chan, msg, boundary_count->boundary_host_sysid, boundary_count->boundary_host_compid, boundary_count->boundary_identifier, boundary_count->count);
}

/**
 * @brief Send a boundary_count message
 * @param chan MAVLink channel to send the message
 *
 * @param boundary_host_sysid  System ID
 * @param boundary_host_compid  Creator ID
 * @param boundary_identifier  Number to identifiy boundary on host.
 * @param count  Number of items defining the boundary.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_boundary_count_send(mavlink_channel_t chan, uint8_t boundary_host_sysid, uint8_t boundary_host_compid, uint8_t boundary_identifier, uint16_t count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN];
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, boundary_host_sysid);
    _mav_put_uint8_t(buf, 3, boundary_host_compid);
    _mav_put_uint8_t(buf, 4, boundary_identifier);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BOUNDARY_COUNT, buf, MAVLINK_MSG_ID_BOUNDARY_COUNT_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_CRC);
#else
    mavlink_boundary_count_t packet;
    packet.count = count;
    packet.boundary_host_sysid = boundary_host_sysid;
    packet.boundary_host_compid = boundary_host_compid;
    packet.boundary_identifier = boundary_identifier;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BOUNDARY_COUNT, (const char *)&packet, MAVLINK_MSG_ID_BOUNDARY_COUNT_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_CRC);
#endif
}

/**
 * @brief Send a boundary_count message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_boundary_count_send_struct(mavlink_channel_t chan, const mavlink_boundary_count_t* boundary_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_boundary_count_send(chan, boundary_count->boundary_host_sysid, boundary_count->boundary_host_compid, boundary_count->boundary_identifier, boundary_count->count);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BOUNDARY_COUNT, (const char *)boundary_count, MAVLINK_MSG_ID_BOUNDARY_COUNT_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_CRC);
#endif
}

#if MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_boundary_count_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t boundary_host_sysid, uint8_t boundary_host_compid, uint8_t boundary_identifier, uint16_t count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, count);
    _mav_put_uint8_t(buf, 2, boundary_host_sysid);
    _mav_put_uint8_t(buf, 3, boundary_host_compid);
    _mav_put_uint8_t(buf, 4, boundary_identifier);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BOUNDARY_COUNT, buf, MAVLINK_MSG_ID_BOUNDARY_COUNT_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_CRC);
#else
    mavlink_boundary_count_t *packet = (mavlink_boundary_count_t *)msgbuf;
    packet->count = count;
    packet->boundary_host_sysid = boundary_host_sysid;
    packet->boundary_host_compid = boundary_host_compid;
    packet->boundary_identifier = boundary_identifier;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BOUNDARY_COUNT, (const char *)packet, MAVLINK_MSG_ID_BOUNDARY_COUNT_MIN_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN, MAVLINK_MSG_ID_BOUNDARY_COUNT_CRC);
#endif
}
#endif

#endif

// MESSAGE BOUNDARY_COUNT UNPACKING


/**
 * @brief Get field boundary_host_sysid from boundary_count message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_boundary_count_get_boundary_host_sysid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field boundary_host_compid from boundary_count message
 *
 * @return  Creator ID
 */
static inline uint8_t mavlink_msg_boundary_count_get_boundary_host_compid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field boundary_identifier from boundary_count message
 *
 * @return  Number to identifiy boundary on host.
 */
static inline uint8_t mavlink_msg_boundary_count_get_boundary_identifier(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field count from boundary_count message
 *
 * @return  Number of items defining the boundary.
 */
static inline uint16_t mavlink_msg_boundary_count_get_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a boundary_count message into a struct
 *
 * @param msg The message to decode
 * @param boundary_count C-struct to decode the message contents into
 */
static inline void mavlink_msg_boundary_count_decode(const mavlink_message_t* msg, mavlink_boundary_count_t* boundary_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    boundary_count->count = mavlink_msg_boundary_count_get_count(msg);
    boundary_count->boundary_host_sysid = mavlink_msg_boundary_count_get_boundary_host_sysid(msg);
    boundary_count->boundary_host_compid = mavlink_msg_boundary_count_get_boundary_host_compid(msg);
    boundary_count->boundary_identifier = mavlink_msg_boundary_count_get_boundary_identifier(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN? msg->len : MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN;
        memset(boundary_count, 0, MAVLINK_MSG_ID_BOUNDARY_COUNT_LEN);
    memcpy(boundary_count, _MAV_PAYLOAD(msg), len);
#endif
}
