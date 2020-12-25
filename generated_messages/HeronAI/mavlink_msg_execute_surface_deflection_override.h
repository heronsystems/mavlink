#pragma once
// MESSAGE EXECUTE_SURFACE_DEFLECTION_OVERRIDE PACKING

#define MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE 12004


typedef struct __mavlink_execute_surface_deflection_override_t {
 float event_type; /*<  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control.*/
 float deflection_elevator; /*<  elevator_deflection: Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle.*/
 float deflection_aileron; /*<  aileron_deflectiond: Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle.*/
 float deflection_rudder; /*<  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle.*/
 float deflection_throttle; /*<  throttle_deflection: Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust).*/
} mavlink_execute_surface_deflection_override_t;

#define MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN 20
#define MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_MIN_LEN 20
#define MAVLINK_MSG_ID_12004_LEN 20
#define MAVLINK_MSG_ID_12004_MIN_LEN 20

#define MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_CRC 46
#define MAVLINK_MSG_ID_12004_CRC 46



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_EXECUTE_SURFACE_DEFLECTION_OVERRIDE { \
    12004, \
    "EXECUTE_SURFACE_DEFLECTION_OVERRIDE", \
    5, \
    {  { "event_type", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_execute_surface_deflection_override_t, event_type) }, \
         { "deflection_elevator", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_execute_surface_deflection_override_t, deflection_elevator) }, \
         { "deflection_aileron", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_execute_surface_deflection_override_t, deflection_aileron) }, \
         { "deflection_rudder", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_execute_surface_deflection_override_t, deflection_rudder) }, \
         { "deflection_throttle", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_execute_surface_deflection_override_t, deflection_throttle) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_EXECUTE_SURFACE_DEFLECTION_OVERRIDE { \
    "EXECUTE_SURFACE_DEFLECTION_OVERRIDE", \
    5, \
    {  { "event_type", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_execute_surface_deflection_override_t, event_type) }, \
         { "deflection_elevator", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_execute_surface_deflection_override_t, deflection_elevator) }, \
         { "deflection_aileron", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_execute_surface_deflection_override_t, deflection_aileron) }, \
         { "deflection_rudder", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_execute_surface_deflection_override_t, deflection_rudder) }, \
         { "deflection_throttle", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_execute_surface_deflection_override_t, deflection_throttle) }, \
         } \
}
#endif

/**
 * @brief Pack a execute_surface_deflection_override message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param event_type  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control.
 * @param deflection_elevator  elevator_deflection: Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle.
 * @param deflection_aileron  aileron_deflectiond: Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle.
 * @param deflection_rudder  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle.
 * @param deflection_throttle  throttle_deflection: Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_execute_surface_deflection_override_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float event_type, float deflection_elevator, float deflection_aileron, float deflection_rudder, float deflection_throttle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN];
    _mav_put_float(buf, 0, event_type);
    _mav_put_float(buf, 4, deflection_elevator);
    _mav_put_float(buf, 8, deflection_aileron);
    _mav_put_float(buf, 12, deflection_rudder);
    _mav_put_float(buf, 16, deflection_throttle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN);
#else
    mavlink_execute_surface_deflection_override_t packet;
    packet.event_type = event_type;
    packet.deflection_elevator = deflection_elevator;
    packet.deflection_aileron = deflection_aileron;
    packet.deflection_rudder = deflection_rudder;
    packet.deflection_throttle = deflection_throttle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_CRC);
}

/**
 * @brief Pack a execute_surface_deflection_override message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param event_type  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control.
 * @param deflection_elevator  elevator_deflection: Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle.
 * @param deflection_aileron  aileron_deflectiond: Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle.
 * @param deflection_rudder  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle.
 * @param deflection_throttle  throttle_deflection: Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_execute_surface_deflection_override_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float event_type,float deflection_elevator,float deflection_aileron,float deflection_rudder,float deflection_throttle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN];
    _mav_put_float(buf, 0, event_type);
    _mav_put_float(buf, 4, deflection_elevator);
    _mav_put_float(buf, 8, deflection_aileron);
    _mav_put_float(buf, 12, deflection_rudder);
    _mav_put_float(buf, 16, deflection_throttle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN);
#else
    mavlink_execute_surface_deflection_override_t packet;
    packet.event_type = event_type;
    packet.deflection_elevator = deflection_elevator;
    packet.deflection_aileron = deflection_aileron;
    packet.deflection_rudder = deflection_rudder;
    packet.deflection_throttle = deflection_throttle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_CRC);
}

/**
 * @brief Encode a execute_surface_deflection_override struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param execute_surface_deflection_override C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_execute_surface_deflection_override_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_execute_surface_deflection_override_t* execute_surface_deflection_override)
{
    return mavlink_msg_execute_surface_deflection_override_pack(system_id, component_id, msg, execute_surface_deflection_override->event_type, execute_surface_deflection_override->deflection_elevator, execute_surface_deflection_override->deflection_aileron, execute_surface_deflection_override->deflection_rudder, execute_surface_deflection_override->deflection_throttle);
}

/**
 * @brief Encode a execute_surface_deflection_override struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param execute_surface_deflection_override C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_execute_surface_deflection_override_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_execute_surface_deflection_override_t* execute_surface_deflection_override)
{
    return mavlink_msg_execute_surface_deflection_override_pack_chan(system_id, component_id, chan, msg, execute_surface_deflection_override->event_type, execute_surface_deflection_override->deflection_elevator, execute_surface_deflection_override->deflection_aileron, execute_surface_deflection_override->deflection_rudder, execute_surface_deflection_override->deflection_throttle);
}

/**
 * @brief Send a execute_surface_deflection_override message
 * @param chan MAVLink channel to send the message
 *
 * @param event_type  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control.
 * @param deflection_elevator  elevator_deflection: Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle.
 * @param deflection_aileron  aileron_deflectiond: Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle.
 * @param deflection_rudder  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle.
 * @param deflection_throttle  throttle_deflection: Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_execute_surface_deflection_override_send(mavlink_channel_t chan, float event_type, float deflection_elevator, float deflection_aileron, float deflection_rudder, float deflection_throttle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN];
    _mav_put_float(buf, 0, event_type);
    _mav_put_float(buf, 4, deflection_elevator);
    _mav_put_float(buf, 8, deflection_aileron);
    _mav_put_float(buf, 12, deflection_rudder);
    _mav_put_float(buf, 16, deflection_throttle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE, buf, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_CRC);
#else
    mavlink_execute_surface_deflection_override_t packet;
    packet.event_type = event_type;
    packet.deflection_elevator = deflection_elevator;
    packet.deflection_aileron = deflection_aileron;
    packet.deflection_rudder = deflection_rudder;
    packet.deflection_throttle = deflection_throttle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE, (const char *)&packet, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_CRC);
#endif
}

/**
 * @brief Send a execute_surface_deflection_override message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_execute_surface_deflection_override_send_struct(mavlink_channel_t chan, const mavlink_execute_surface_deflection_override_t* execute_surface_deflection_override)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_execute_surface_deflection_override_send(chan, execute_surface_deflection_override->event_type, execute_surface_deflection_override->deflection_elevator, execute_surface_deflection_override->deflection_aileron, execute_surface_deflection_override->deflection_rudder, execute_surface_deflection_override->deflection_throttle);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE, (const char *)execute_surface_deflection_override, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_CRC);
#endif
}

#if MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_execute_surface_deflection_override_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float event_type, float deflection_elevator, float deflection_aileron, float deflection_rudder, float deflection_throttle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, event_type);
    _mav_put_float(buf, 4, deflection_elevator);
    _mav_put_float(buf, 8, deflection_aileron);
    _mav_put_float(buf, 12, deflection_rudder);
    _mav_put_float(buf, 16, deflection_throttle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE, buf, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_CRC);
#else
    mavlink_execute_surface_deflection_override_t *packet = (mavlink_execute_surface_deflection_override_t *)msgbuf;
    packet->event_type = event_type;
    packet->deflection_elevator = deflection_elevator;
    packet->deflection_aileron = deflection_aileron;
    packet->deflection_rudder = deflection_rudder;
    packet->deflection_throttle = deflection_throttle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE, (const char *)packet, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_MIN_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_CRC);
#endif
}
#endif

#endif

// MESSAGE EXECUTE_SURFACE_DEFLECTION_OVERRIDE UNPACKING


/**
 * @brief Get field event_type from execute_surface_deflection_override message
 *
 * @return  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control.
 */
static inline float mavlink_msg_execute_surface_deflection_override_get_event_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field deflection_elevator from execute_surface_deflection_override message
 *
 * @return  elevator_deflection: Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle.
 */
static inline float mavlink_msg_execute_surface_deflection_override_get_deflection_elevator(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field deflection_aileron from execute_surface_deflection_override message
 *
 * @return  aileron_deflectiond: Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle.
 */
static inline float mavlink_msg_execute_surface_deflection_override_get_deflection_aileron(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field deflection_rudder from execute_surface_deflection_override message
 *
 * @return  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle.
 */
static inline float mavlink_msg_execute_surface_deflection_override_get_deflection_rudder(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field deflection_throttle from execute_surface_deflection_override message
 *
 * @return  throttle_deflection: Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust).
 */
static inline float mavlink_msg_execute_surface_deflection_override_get_deflection_throttle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a execute_surface_deflection_override message into a struct
 *
 * @param msg The message to decode
 * @param execute_surface_deflection_override C-struct to decode the message contents into
 */
static inline void mavlink_msg_execute_surface_deflection_override_decode(const mavlink_message_t* msg, mavlink_execute_surface_deflection_override_t* execute_surface_deflection_override)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    execute_surface_deflection_override->event_type = mavlink_msg_execute_surface_deflection_override_get_event_type(msg);
    execute_surface_deflection_override->deflection_elevator = mavlink_msg_execute_surface_deflection_override_get_deflection_elevator(msg);
    execute_surface_deflection_override->deflection_aileron = mavlink_msg_execute_surface_deflection_override_get_deflection_aileron(msg);
    execute_surface_deflection_override->deflection_rudder = mavlink_msg_execute_surface_deflection_override_get_deflection_rudder(msg);
    execute_surface_deflection_override->deflection_throttle = mavlink_msg_execute_surface_deflection_override_get_deflection_throttle(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN? msg->len : MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN;
        memset(execute_surface_deflection_override, 0, MAVLINK_MSG_ID_EXECUTE_SURFACE_DEFLECTION_OVERRIDE_LEN);
    memcpy(execute_surface_deflection_override, _MAV_PAYLOAD(msg), len);
#endif
}
