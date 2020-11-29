#pragma once
// MESSAGE SET_SURFACE_DEFLECTION_NORMALIZED PACKING

#define MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED 402


typedef struct __mavlink_set_surface_deflection_normalized_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float elevator_deflection; /*<  Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle.*/
 float aileron_deflection; /*<  Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle.*/
 float rudder_deflection; /*<  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle.*/
 float throttle_deflection; /*<  Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust)*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t surface_mask; /*<  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control.*/
} mavlink_set_surface_deflection_normalized_t;

#define MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN 23
#define MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_MIN_LEN 23
#define MAVLINK_MSG_ID_402_LEN 23
#define MAVLINK_MSG_ID_402_MIN_LEN 23

#define MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_CRC 28
#define MAVLINK_MSG_ID_402_CRC 28



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_SURFACE_DEFLECTION_NORMALIZED { \
    402, \
    "SET_SURFACE_DEFLECTION_NORMALIZED", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_surface_deflection_normalized_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_set_surface_deflection_normalized_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_set_surface_deflection_normalized_t, target_component) }, \
         { "surface_mask", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_set_surface_deflection_normalized_t, surface_mask) }, \
         { "elevator_deflection", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_set_surface_deflection_normalized_t, elevator_deflection) }, \
         { "aileron_deflection", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_set_surface_deflection_normalized_t, aileron_deflection) }, \
         { "rudder_deflection", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_set_surface_deflection_normalized_t, rudder_deflection) }, \
         { "throttle_deflection", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_set_surface_deflection_normalized_t, throttle_deflection) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_SURFACE_DEFLECTION_NORMALIZED { \
    "SET_SURFACE_DEFLECTION_NORMALIZED", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_surface_deflection_normalized_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_set_surface_deflection_normalized_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_set_surface_deflection_normalized_t, target_component) }, \
         { "surface_mask", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_set_surface_deflection_normalized_t, surface_mask) }, \
         { "elevator_deflection", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_set_surface_deflection_normalized_t, elevator_deflection) }, \
         { "aileron_deflection", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_set_surface_deflection_normalized_t, aileron_deflection) }, \
         { "rudder_deflection", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_set_surface_deflection_normalized_t, rudder_deflection) }, \
         { "throttle_deflection", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_set_surface_deflection_normalized_t, throttle_deflection) }, \
         } \
}
#endif

/**
 * @brief Pack a set_surface_deflection_normalized message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param surface_mask  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control.
 * @param elevator_deflection  Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle.
 * @param aileron_deflection  Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle.
 * @param rudder_deflection  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle.
 * @param throttle_deflection  Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_surface_deflection_normalized_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t surface_mask, float elevator_deflection, float aileron_deflection, float rudder_deflection, float throttle_deflection)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, elevator_deflection);
    _mav_put_float(buf, 8, aileron_deflection);
    _mav_put_float(buf, 12, rudder_deflection);
    _mav_put_float(buf, 16, throttle_deflection);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_uint8_t(buf, 22, surface_mask);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN);
#else
    mavlink_set_surface_deflection_normalized_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.elevator_deflection = elevator_deflection;
    packet.aileron_deflection = aileron_deflection;
    packet.rudder_deflection = rudder_deflection;
    packet.throttle_deflection = throttle_deflection;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.surface_mask = surface_mask;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_MIN_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_CRC);
}

/**
 * @brief Pack a set_surface_deflection_normalized message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param surface_mask  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control.
 * @param elevator_deflection  Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle.
 * @param aileron_deflection  Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle.
 * @param rudder_deflection  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle.
 * @param throttle_deflection  Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_surface_deflection_normalized_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,uint8_t surface_mask,float elevator_deflection,float aileron_deflection,float rudder_deflection,float throttle_deflection)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, elevator_deflection);
    _mav_put_float(buf, 8, aileron_deflection);
    _mav_put_float(buf, 12, rudder_deflection);
    _mav_put_float(buf, 16, throttle_deflection);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_uint8_t(buf, 22, surface_mask);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN);
#else
    mavlink_set_surface_deflection_normalized_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.elevator_deflection = elevator_deflection;
    packet.aileron_deflection = aileron_deflection;
    packet.rudder_deflection = rudder_deflection;
    packet.throttle_deflection = throttle_deflection;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.surface_mask = surface_mask;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_MIN_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_CRC);
}

/**
 * @brief Encode a set_surface_deflection_normalized struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_surface_deflection_normalized C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_surface_deflection_normalized_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_surface_deflection_normalized_t* set_surface_deflection_normalized)
{
    return mavlink_msg_set_surface_deflection_normalized_pack(system_id, component_id, msg, set_surface_deflection_normalized->time_boot_ms, set_surface_deflection_normalized->target_system, set_surface_deflection_normalized->target_component, set_surface_deflection_normalized->surface_mask, set_surface_deflection_normalized->elevator_deflection, set_surface_deflection_normalized->aileron_deflection, set_surface_deflection_normalized->rudder_deflection, set_surface_deflection_normalized->throttle_deflection);
}

/**
 * @brief Encode a set_surface_deflection_normalized struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_surface_deflection_normalized C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_surface_deflection_normalized_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_surface_deflection_normalized_t* set_surface_deflection_normalized)
{
    return mavlink_msg_set_surface_deflection_normalized_pack_chan(system_id, component_id, chan, msg, set_surface_deflection_normalized->time_boot_ms, set_surface_deflection_normalized->target_system, set_surface_deflection_normalized->target_component, set_surface_deflection_normalized->surface_mask, set_surface_deflection_normalized->elevator_deflection, set_surface_deflection_normalized->aileron_deflection, set_surface_deflection_normalized->rudder_deflection, set_surface_deflection_normalized->throttle_deflection);
}

/**
 * @brief Send a set_surface_deflection_normalized message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param surface_mask  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control.
 * @param elevator_deflection  Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle.
 * @param aileron_deflection  Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle.
 * @param rudder_deflection  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle.
 * @param throttle_deflection  Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_surface_deflection_normalized_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t surface_mask, float elevator_deflection, float aileron_deflection, float rudder_deflection, float throttle_deflection)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, elevator_deflection);
    _mav_put_float(buf, 8, aileron_deflection);
    _mav_put_float(buf, 12, rudder_deflection);
    _mav_put_float(buf, 16, throttle_deflection);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_uint8_t(buf, 22, surface_mask);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED, buf, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_MIN_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_CRC);
#else
    mavlink_set_surface_deflection_normalized_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.elevator_deflection = elevator_deflection;
    packet.aileron_deflection = aileron_deflection;
    packet.rudder_deflection = rudder_deflection;
    packet.throttle_deflection = throttle_deflection;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.surface_mask = surface_mask;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED, (const char *)&packet, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_MIN_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_CRC);
#endif
}

/**
 * @brief Send a set_surface_deflection_normalized message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_surface_deflection_normalized_send_struct(mavlink_channel_t chan, const mavlink_set_surface_deflection_normalized_t* set_surface_deflection_normalized)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_surface_deflection_normalized_send(chan, set_surface_deflection_normalized->time_boot_ms, set_surface_deflection_normalized->target_system, set_surface_deflection_normalized->target_component, set_surface_deflection_normalized->surface_mask, set_surface_deflection_normalized->elevator_deflection, set_surface_deflection_normalized->aileron_deflection, set_surface_deflection_normalized->rudder_deflection, set_surface_deflection_normalized->throttle_deflection);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED, (const char *)set_surface_deflection_normalized, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_MIN_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_surface_deflection_normalized_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t surface_mask, float elevator_deflection, float aileron_deflection, float rudder_deflection, float throttle_deflection)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, elevator_deflection);
    _mav_put_float(buf, 8, aileron_deflection);
    _mav_put_float(buf, 12, rudder_deflection);
    _mav_put_float(buf, 16, throttle_deflection);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_uint8_t(buf, 22, surface_mask);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED, buf, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_MIN_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_CRC);
#else
    mavlink_set_surface_deflection_normalized_t *packet = (mavlink_set_surface_deflection_normalized_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->elevator_deflection = elevator_deflection;
    packet->aileron_deflection = aileron_deflection;
    packet->rudder_deflection = rudder_deflection;
    packet->throttle_deflection = throttle_deflection;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->surface_mask = surface_mask;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED, (const char *)packet, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_MIN_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_SURFACE_DEFLECTION_NORMALIZED UNPACKING


/**
 * @brief Get field time_boot_ms from set_surface_deflection_normalized message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_set_surface_deflection_normalized_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from set_surface_deflection_normalized message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_set_surface_deflection_normalized_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field target_component from set_surface_deflection_normalized message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_set_surface_deflection_normalized_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field surface_mask from set_surface_deflection_normalized message
 *
 * @return  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control.
 */
static inline uint8_t mavlink_msg_set_surface_deflection_normalized_get_surface_mask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  22);
}

/**
 * @brief Get field elevator_deflection from set_surface_deflection_normalized message
 *
 * @return  Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle.
 */
static inline float mavlink_msg_set_surface_deflection_normalized_get_elevator_deflection(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field aileron_deflection from set_surface_deflection_normalized message
 *
 * @return  Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle.
 */
static inline float mavlink_msg_set_surface_deflection_normalized_get_aileron_deflection(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field rudder_deflection from set_surface_deflection_normalized message
 *
 * @return  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle.
 */
static inline float mavlink_msg_set_surface_deflection_normalized_get_rudder_deflection(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field throttle_deflection from set_surface_deflection_normalized message
 *
 * @return  Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust)
 */
static inline float mavlink_msg_set_surface_deflection_normalized_get_throttle_deflection(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a set_surface_deflection_normalized message into a struct
 *
 * @param msg The message to decode
 * @param set_surface_deflection_normalized C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_surface_deflection_normalized_decode(const mavlink_message_t* msg, mavlink_set_surface_deflection_normalized_t* set_surface_deflection_normalized)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_surface_deflection_normalized->time_boot_ms = mavlink_msg_set_surface_deflection_normalized_get_time_boot_ms(msg);
    set_surface_deflection_normalized->elevator_deflection = mavlink_msg_set_surface_deflection_normalized_get_elevator_deflection(msg);
    set_surface_deflection_normalized->aileron_deflection = mavlink_msg_set_surface_deflection_normalized_get_aileron_deflection(msg);
    set_surface_deflection_normalized->rudder_deflection = mavlink_msg_set_surface_deflection_normalized_get_rudder_deflection(msg);
    set_surface_deflection_normalized->throttle_deflection = mavlink_msg_set_surface_deflection_normalized_get_throttle_deflection(msg);
    set_surface_deflection_normalized->target_system = mavlink_msg_set_surface_deflection_normalized_get_target_system(msg);
    set_surface_deflection_normalized->target_component = mavlink_msg_set_surface_deflection_normalized_get_target_component(msg);
    set_surface_deflection_normalized->surface_mask = mavlink_msg_set_surface_deflection_normalized_get_surface_mask(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN? msg->len : MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN;
        memset(set_surface_deflection_normalized, 0, MAVLINK_MSG_ID_SET_SURFACE_DEFLECTION_NORMALIZED_LEN);
    memcpy(set_surface_deflection_normalized, _MAV_PAYLOAD(msg), len);
#endif
}
