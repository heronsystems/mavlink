#pragma once
// MESSAGE AI_TEST_PARAMETERIZATION PACKING

#define MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION 12002


typedef struct __mavlink_ai_test_parameterization_t {
 float origin_lat; /*<  The latitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.*/
 float origin_lng; /*<  The longitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.*/
 float origin_alt; /*<  The altitude location (relative to ground) of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.*/
 uint8_t target_system; /*<  System which should execute the command*/
 uint8_t target_component; /*<  Component which should execute the command, 0 for all components*/
 char field_file[14]; /*<  The file name to be used for the field conditions, less the .ini file type extension.*/
 char file_one[14]; /*<  The file name to be used for the red agent, less the .ini file type extension.*/
 char file_two[14]; /*<  The file name to be used for the blue agent, less the .ini file type extension.*/
 char tc_file[14]; /*<  The file name to be used for the test conditions, less the .ini file type extension.*/
} mavlink_ai_test_parameterization_t;

#define MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN 70
#define MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_MIN_LEN 70
#define MAVLINK_MSG_ID_12002_LEN 70
#define MAVLINK_MSG_ID_12002_MIN_LEN 70

#define MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_CRC 155
#define MAVLINK_MSG_ID_12002_CRC 155

#define MAVLINK_MSG_AI_TEST_PARAMETERIZATION_FIELD_FIELD_FILE_LEN 14
#define MAVLINK_MSG_AI_TEST_PARAMETERIZATION_FIELD_FILE_ONE_LEN 14
#define MAVLINK_MSG_AI_TEST_PARAMETERIZATION_FIELD_FILE_TWO_LEN 14
#define MAVLINK_MSG_AI_TEST_PARAMETERIZATION_FIELD_TC_FILE_LEN 14

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AI_TEST_PARAMETERIZATION { \
    12002, \
    "AI_TEST_PARAMETERIZATION", \
    9, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_ai_test_parameterization_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_ai_test_parameterization_t, target_component) }, \
         { "field_file", NULL, MAVLINK_TYPE_CHAR, 14, 14, offsetof(mavlink_ai_test_parameterization_t, field_file) }, \
         { "file_one", NULL, MAVLINK_TYPE_CHAR, 14, 28, offsetof(mavlink_ai_test_parameterization_t, file_one) }, \
         { "file_two", NULL, MAVLINK_TYPE_CHAR, 14, 42, offsetof(mavlink_ai_test_parameterization_t, file_two) }, \
         { "tc_file", NULL, MAVLINK_TYPE_CHAR, 14, 56, offsetof(mavlink_ai_test_parameterization_t, tc_file) }, \
         { "origin_lat", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ai_test_parameterization_t, origin_lat) }, \
         { "origin_lng", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ai_test_parameterization_t, origin_lng) }, \
         { "origin_alt", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ai_test_parameterization_t, origin_alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AI_TEST_PARAMETERIZATION { \
    "AI_TEST_PARAMETERIZATION", \
    9, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_ai_test_parameterization_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_ai_test_parameterization_t, target_component) }, \
         { "field_file", NULL, MAVLINK_TYPE_CHAR, 14, 14, offsetof(mavlink_ai_test_parameterization_t, field_file) }, \
         { "file_one", NULL, MAVLINK_TYPE_CHAR, 14, 28, offsetof(mavlink_ai_test_parameterization_t, file_one) }, \
         { "file_two", NULL, MAVLINK_TYPE_CHAR, 14, 42, offsetof(mavlink_ai_test_parameterization_t, file_two) }, \
         { "tc_file", NULL, MAVLINK_TYPE_CHAR, 14, 56, offsetof(mavlink_ai_test_parameterization_t, tc_file) }, \
         { "origin_lat", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ai_test_parameterization_t, origin_lat) }, \
         { "origin_lng", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ai_test_parameterization_t, origin_lng) }, \
         { "origin_alt", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ai_test_parameterization_t, origin_alt) }, \
         } \
}
#endif

/**
 * @brief Pack a ai_test_parameterization message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param field_file  The file name to be used for the field conditions, less the .ini file type extension.
 * @param file_one  The file name to be used for the red agent, less the .ini file type extension.
 * @param file_two  The file name to be used for the blue agent, less the .ini file type extension.
 * @param tc_file  The file name to be used for the test conditions, less the .ini file type extension.
 * @param origin_lat  The latitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 * @param origin_lng  The longitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 * @param origin_alt  The altitude location (relative to ground) of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ai_test_parameterization_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, const char *field_file, const char *file_one, const char *file_two, const char *tc_file, float origin_lat, float origin_lng, float origin_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN];
    _mav_put_float(buf, 0, origin_lat);
    _mav_put_float(buf, 4, origin_lng);
    _mav_put_float(buf, 8, origin_alt);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_char_array(buf, 14, field_file, 14);
    _mav_put_char_array(buf, 28, file_one, 14);
    _mav_put_char_array(buf, 42, file_two, 14);
    _mav_put_char_array(buf, 56, tc_file, 14);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN);
#else
    mavlink_ai_test_parameterization_t packet;
    packet.origin_lat = origin_lat;
    packet.origin_lng = origin_lng;
    packet.origin_alt = origin_alt;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.field_file, field_file, sizeof(char)*14);
    mav_array_memcpy(packet.file_one, file_one, sizeof(char)*14);
    mav_array_memcpy(packet.file_two, file_two, sizeof(char)*14);
    mav_array_memcpy(packet.tc_file, tc_file, sizeof(char)*14);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_MIN_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_CRC);
}

/**
 * @brief Pack a ai_test_parameterization message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param field_file  The file name to be used for the field conditions, less the .ini file type extension.
 * @param file_one  The file name to be used for the red agent, less the .ini file type extension.
 * @param file_two  The file name to be used for the blue agent, less the .ini file type extension.
 * @param tc_file  The file name to be used for the test conditions, less the .ini file type extension.
 * @param origin_lat  The latitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 * @param origin_lng  The longitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 * @param origin_alt  The altitude location (relative to ground) of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ai_test_parameterization_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,const char *field_file,const char *file_one,const char *file_two,const char *tc_file,float origin_lat,float origin_lng,float origin_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN];
    _mav_put_float(buf, 0, origin_lat);
    _mav_put_float(buf, 4, origin_lng);
    _mav_put_float(buf, 8, origin_alt);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_char_array(buf, 14, field_file, 14);
    _mav_put_char_array(buf, 28, file_one, 14);
    _mav_put_char_array(buf, 42, file_two, 14);
    _mav_put_char_array(buf, 56, tc_file, 14);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN);
#else
    mavlink_ai_test_parameterization_t packet;
    packet.origin_lat = origin_lat;
    packet.origin_lng = origin_lng;
    packet.origin_alt = origin_alt;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.field_file, field_file, sizeof(char)*14);
    mav_array_memcpy(packet.file_one, file_one, sizeof(char)*14);
    mav_array_memcpy(packet.file_two, file_two, sizeof(char)*14);
    mav_array_memcpy(packet.tc_file, tc_file, sizeof(char)*14);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_MIN_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_CRC);
}

/**
 * @brief Encode a ai_test_parameterization struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ai_test_parameterization C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ai_test_parameterization_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ai_test_parameterization_t* ai_test_parameterization)
{
    return mavlink_msg_ai_test_parameterization_pack(system_id, component_id, msg, ai_test_parameterization->target_system, ai_test_parameterization->target_component, ai_test_parameterization->field_file, ai_test_parameterization->file_one, ai_test_parameterization->file_two, ai_test_parameterization->tc_file, ai_test_parameterization->origin_lat, ai_test_parameterization->origin_lng, ai_test_parameterization->origin_alt);
}

/**
 * @brief Encode a ai_test_parameterization struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ai_test_parameterization C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ai_test_parameterization_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ai_test_parameterization_t* ai_test_parameterization)
{
    return mavlink_msg_ai_test_parameterization_pack_chan(system_id, component_id, chan, msg, ai_test_parameterization->target_system, ai_test_parameterization->target_component, ai_test_parameterization->field_file, ai_test_parameterization->file_one, ai_test_parameterization->file_two, ai_test_parameterization->tc_file, ai_test_parameterization->origin_lat, ai_test_parameterization->origin_lng, ai_test_parameterization->origin_alt);
}

/**
 * @brief Send a ai_test_parameterization message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param field_file  The file name to be used for the field conditions, less the .ini file type extension.
 * @param file_one  The file name to be used for the red agent, less the .ini file type extension.
 * @param file_two  The file name to be used for the blue agent, less the .ini file type extension.
 * @param tc_file  The file name to be used for the test conditions, less the .ini file type extension.
 * @param origin_lat  The latitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 * @param origin_lng  The longitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 * @param origin_alt  The altitude location (relative to ground) of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ai_test_parameterization_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, const char *field_file, const char *file_one, const char *file_two, const char *tc_file, float origin_lat, float origin_lng, float origin_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN];
    _mav_put_float(buf, 0, origin_lat);
    _mav_put_float(buf, 4, origin_lng);
    _mav_put_float(buf, 8, origin_alt);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_char_array(buf, 14, field_file, 14);
    _mav_put_char_array(buf, 28, file_one, 14);
    _mav_put_char_array(buf, 42, file_two, 14);
    _mav_put_char_array(buf, 56, tc_file, 14);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION, buf, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_MIN_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_CRC);
#else
    mavlink_ai_test_parameterization_t packet;
    packet.origin_lat = origin_lat;
    packet.origin_lng = origin_lng;
    packet.origin_alt = origin_alt;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.field_file, field_file, sizeof(char)*14);
    mav_array_memcpy(packet.file_one, file_one, sizeof(char)*14);
    mav_array_memcpy(packet.file_two, file_two, sizeof(char)*14);
    mav_array_memcpy(packet.tc_file, tc_file, sizeof(char)*14);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION, (const char *)&packet, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_MIN_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_CRC);
#endif
}

/**
 * @brief Send a ai_test_parameterization message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ai_test_parameterization_send_struct(mavlink_channel_t chan, const mavlink_ai_test_parameterization_t* ai_test_parameterization)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ai_test_parameterization_send(chan, ai_test_parameterization->target_system, ai_test_parameterization->target_component, ai_test_parameterization->field_file, ai_test_parameterization->file_one, ai_test_parameterization->file_two, ai_test_parameterization->tc_file, ai_test_parameterization->origin_lat, ai_test_parameterization->origin_lng, ai_test_parameterization->origin_alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION, (const char *)ai_test_parameterization, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_MIN_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ai_test_parameterization_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, const char *field_file, const char *file_one, const char *file_two, const char *tc_file, float origin_lat, float origin_lng, float origin_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, origin_lat);
    _mav_put_float(buf, 4, origin_lng);
    _mav_put_float(buf, 8, origin_alt);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_char_array(buf, 14, field_file, 14);
    _mav_put_char_array(buf, 28, file_one, 14);
    _mav_put_char_array(buf, 42, file_two, 14);
    _mav_put_char_array(buf, 56, tc_file, 14);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION, buf, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_MIN_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_CRC);
#else
    mavlink_ai_test_parameterization_t *packet = (mavlink_ai_test_parameterization_t *)msgbuf;
    packet->origin_lat = origin_lat;
    packet->origin_lng = origin_lng;
    packet->origin_alt = origin_alt;
    packet->target_system = target_system;
    packet->target_component = target_component;
    mav_array_memcpy(packet->field_file, field_file, sizeof(char)*14);
    mav_array_memcpy(packet->file_one, file_one, sizeof(char)*14);
    mav_array_memcpy(packet->file_two, file_two, sizeof(char)*14);
    mav_array_memcpy(packet->tc_file, tc_file, sizeof(char)*14);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION, (const char *)packet, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_MIN_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_CRC);
#endif
}
#endif

#endif

// MESSAGE AI_TEST_PARAMETERIZATION UNPACKING


/**
 * @brief Get field target_system from ai_test_parameterization message
 *
 * @return  System which should execute the command
 */
static inline uint8_t mavlink_msg_ai_test_parameterization_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field target_component from ai_test_parameterization message
 *
 * @return  Component which should execute the command, 0 for all components
 */
static inline uint8_t mavlink_msg_ai_test_parameterization_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field field_file from ai_test_parameterization message
 *
 * @return  The file name to be used for the field conditions, less the .ini file type extension.
 */
static inline uint16_t mavlink_msg_ai_test_parameterization_get_field_file(const mavlink_message_t* msg, char *field_file)
{
    return _MAV_RETURN_char_array(msg, field_file, 14,  14);
}

/**
 * @brief Get field file_one from ai_test_parameterization message
 *
 * @return  The file name to be used for the red agent, less the .ini file type extension.
 */
static inline uint16_t mavlink_msg_ai_test_parameterization_get_file_one(const mavlink_message_t* msg, char *file_one)
{
    return _MAV_RETURN_char_array(msg, file_one, 14,  28);
}

/**
 * @brief Get field file_two from ai_test_parameterization message
 *
 * @return  The file name to be used for the blue agent, less the .ini file type extension.
 */
static inline uint16_t mavlink_msg_ai_test_parameterization_get_file_two(const mavlink_message_t* msg, char *file_two)
{
    return _MAV_RETURN_char_array(msg, file_two, 14,  42);
}

/**
 * @brief Get field tc_file from ai_test_parameterization message
 *
 * @return  The file name to be used for the test conditions, less the .ini file type extension.
 */
static inline uint16_t mavlink_msg_ai_test_parameterization_get_tc_file(const mavlink_message_t* msg, char *tc_file)
{
    return _MAV_RETURN_char_array(msg, tc_file, 14,  56);
}

/**
 * @brief Get field origin_lat from ai_test_parameterization message
 *
 * @return  The latitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 */
static inline float mavlink_msg_ai_test_parameterization_get_origin_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field origin_lng from ai_test_parameterization message
 *
 * @return  The longitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 */
static inline float mavlink_msg_ai_test_parameterization_get_origin_lng(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field origin_alt from ai_test_parameterization message
 *
 * @return  The altitude location (relative to ground) of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria.
 */
static inline float mavlink_msg_ai_test_parameterization_get_origin_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a ai_test_parameterization message into a struct
 *
 * @param msg The message to decode
 * @param ai_test_parameterization C-struct to decode the message contents into
 */
static inline void mavlink_msg_ai_test_parameterization_decode(const mavlink_message_t* msg, mavlink_ai_test_parameterization_t* ai_test_parameterization)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ai_test_parameterization->origin_lat = mavlink_msg_ai_test_parameterization_get_origin_lat(msg);
    ai_test_parameterization->origin_lng = mavlink_msg_ai_test_parameterization_get_origin_lng(msg);
    ai_test_parameterization->origin_alt = mavlink_msg_ai_test_parameterization_get_origin_alt(msg);
    ai_test_parameterization->target_system = mavlink_msg_ai_test_parameterization_get_target_system(msg);
    ai_test_parameterization->target_component = mavlink_msg_ai_test_parameterization_get_target_component(msg);
    mavlink_msg_ai_test_parameterization_get_field_file(msg, ai_test_parameterization->field_file);
    mavlink_msg_ai_test_parameterization_get_file_one(msg, ai_test_parameterization->file_one);
    mavlink_msg_ai_test_parameterization_get_file_two(msg, ai_test_parameterization->file_two);
    mavlink_msg_ai_test_parameterization_get_tc_file(msg, ai_test_parameterization->tc_file);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN? msg->len : MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN;
        memset(ai_test_parameterization, 0, MAVLINK_MSG_ID_AI_TEST_PARAMETERIZATION_LEN);
    memcpy(ai_test_parameterization, _MAV_PAYLOAD(msg), len);
#endif
}
