// MESSAGE WRITE_EVENT_TO_LOG support class

#pragma once

namespace mavlink {
namespace HeronAI {
namespace msg {

/**
 * @brief WRITE_EVENT_TO_LOG message
 *
 * Generic writer enabling 3rd party software sources to 
 */
struct WRITE_EVENT_TO_LOG : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12003;
    static constexpr size_t LENGTH = 51;
    static constexpr size_t MIN_LENGTH = 51;
    static constexpr uint8_t CRC_EXTRA = 151;
    static constexpr auto NAME = "WRITE_EVENT_TO_LOG";


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
        ss << "  event_type: " << +event_type << std::endl;
        ss << "  text: \"" << to_string(text) << "\"" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << event_type;                    // offset: 0
        map << text;                          // offset: 1
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> event_type;                    // offset: 0
        map >> text;                          // offset: 1
    }
};

} // namespace msg
} // namespace HeronAI
} // namespace mavlink
