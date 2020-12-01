// MESSAGE AI_EXECUTE_PROCEDURAL support class

#pragma once

namespace mavlink {
namespace HeronAI {
namespace msg {

/**
 * @brief AI_EXECUTE_PROCEDURAL message
 *
 * Generic writer enabling 3rd party software sources to 
 */
struct AI_EXECUTE_PROCEDURAL : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12002;
    static constexpr size_t LENGTH = 1;
    static constexpr size_t MIN_LENGTH = 1;
    static constexpr uint8_t CRC_EXTRA = 112;
    static constexpr auto NAME = "AI_EXECUTE_PROCEDURAL";


    uint8_t procedural_type; /*<  The type of event to be performed. */


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
        ss << "  procedural_type: " << +procedural_type << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << procedural_type;               // offset: 0
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> procedural_type;               // offset: 0
    }
};

} // namespace msg
} // namespace HeronAI
} // namespace mavlink
