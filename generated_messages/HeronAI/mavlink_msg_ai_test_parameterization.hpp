// MESSAGE AI_TEST_PARAMETERIZATION support class

#pragma once

namespace mavlink {
namespace HeronAI {
namespace msg {

/**
 * @brief AI_TEST_PARAMETERIZATION message
 *
 * Structure used to transmit the current test parameterization conditions between the test host and participating unmanned systems.
 */
struct AI_TEST_PARAMETERIZATION : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12002;
    static constexpr size_t LENGTH = 44;
    static constexpr size_t MIN_LENGTH = 44;
    static constexpr uint8_t CRC_EXTRA = 35;
    static constexpr auto NAME = "AI_TEST_PARAMETERIZATION";


    uint8_t target_system; /*<  System which should execute the command */
    uint8_t target_component; /*<  Component which should execute the command, 0 for all components */
    std::array<char, 10> field_file; /*<  The file name to be used for the field conditions, less the .ini file type extension. */
    std::array<char, 10> red_file; /*<  The file name to be used for the red agent, less the .ini file type extension. */
    std::array<char, 10> blue_file; /*<  The file name to be used for the blue agent, less the .ini file type extension. */
    float origin_lat; /*<  The latitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria. */
    float origin_lng; /*<  The longitude location of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria. */
    float origin_alt; /*<  The altitude location (relative to ground) of the origin for this explicit test. This is the common reference frame for all the aircraft to be using between communications. Agents will also reference this condition for their starting route criteria. */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  target_system: " << +target_system << std::endl;
        ss << "  target_component: " << +target_component << std::endl;
        ss << "  field_file: \"" << to_string(field_file) << "\"" << std::endl;
        ss << "  red_file: \"" << to_string(red_file) << "\"" << std::endl;
        ss << "  blue_file: \"" << to_string(blue_file) << "\"" << std::endl;
        ss << "  origin_lat: " << origin_lat << std::endl;
        ss << "  origin_lng: " << origin_lng << std::endl;
        ss << "  origin_alt: " << origin_alt << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << origin_lat;                    // offset: 0
        map << origin_lng;                    // offset: 4
        map << origin_alt;                    // offset: 8
        map << target_system;                 // offset: 12
        map << target_component;              // offset: 13
        map << field_file;                    // offset: 14
        map << red_file;                      // offset: 24
        map << blue_file;                     // offset: 34
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> origin_lat;                    // offset: 0
        map >> origin_lng;                    // offset: 4
        map >> origin_alt;                    // offset: 8
        map >> target_system;                 // offset: 12
        map >> target_component;              // offset: 13
        map >> field_file;                    // offset: 14
        map >> red_file;                      // offset: 24
        map >> blue_file;                     // offset: 34
    }
};

} // namespace msg
} // namespace HeronAI
} // namespace mavlink
