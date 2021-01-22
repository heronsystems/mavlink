// MESSAGE AI_EXECUTE_PROCEDURAL support class

#pragma once

namespace mavlink {
namespace HeronAI {
namespace msg {

/**
 * @brief AI_EXECUTE_PROCEDURAL message
 *
 * Command that can dictate the conditions of the test.
 */
struct AI_EXECUTE_PROCEDURAL : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12003;
    static constexpr size_t LENGTH = 3;
    static constexpr size_t MIN_LENGTH = 3;
    static constexpr uint8_t CRC_EXTRA = 162;
    static constexpr auto NAME = "AI_EXECUTE_PROCEDURAL";


    uint8_t target_system; /*<  System which should execute the command */
    uint8_t target_component; /*<  Component which should execute the command, 0 for all components */
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
        ss << "  target_system: " << +target_system << std::endl;
        ss << "  target_component: " << +target_component << std::endl;
        ss << "  procedural_type: " << +procedural_type << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << target_system;                 // offset: 0
        map << target_component;              // offset: 1
        map << procedural_type;               // offset: 2
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> target_system;                 // offset: 0
        map >> target_component;              // offset: 1
        map >> procedural_type;               // offset: 2
    }
};

} // namespace msg
} // namespace HeronAI
} // namespace mavlink
