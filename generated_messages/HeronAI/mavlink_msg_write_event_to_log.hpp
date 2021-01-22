// MESSAGE WRITE_EVENT_TO_LOG support class

#pragma once

namespace mavlink {
namespace HeronAI {
namespace msg {

/**
 * @brief WRITE_EVENT_TO_LOG message
 *
 * Generic writer enabling 3rd party software sources to write some text to the target_systems internal logging structure.
 */
struct WRITE_EVENT_TO_LOG : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12004;
    static constexpr size_t LENGTH = 53;
    static constexpr size_t MIN_LENGTH = 53;
    static constexpr uint8_t CRC_EXTRA = 88;
    static constexpr auto NAME = "WRITE_EVENT_TO_LOG";


    uint8_t target_system; /*<  System which should execute the command */
    uint8_t target_component; /*<  Component which should execute the command, 0 for all components */
    uint8_t event_type; /*<  The type of event associated with the tag information. */
    std::array<char, 50> text; /*<  User defined descriptor useful for describing the event. */


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
        ss << "  event_type: " << +event_type << std::endl;
        ss << "  text: \"" << to_string(text) << "\"" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << target_system;                 // offset: 0
        map << target_component;              // offset: 1
        map << event_type;                    // offset: 2
        map << text;                          // offset: 3
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> target_system;                 // offset: 0
        map >> target_component;              // offset: 1
        map >> event_type;                    // offset: 2
        map >> text;                          // offset: 3
    }
};

} // namespace msg
} // namespace HeronAI
} // namespace mavlink
