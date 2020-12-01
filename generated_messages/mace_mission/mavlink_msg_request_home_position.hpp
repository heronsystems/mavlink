// MESSAGE REQUEST_HOME_POSITION support class

#pragma once

namespace mavlink {
namespace mace_mission {
namespace msg {

/**
 * @brief REQUEST_HOME_POSITION message
 *
 * The home position relating to the mission of the target system has been requested.
 */
struct REQUEST_HOME_POSITION : mavlink::Message {
    static constexpr msgid_t MSG_ID = 500;
    static constexpr size_t LENGTH = 1;
    static constexpr size_t MIN_LENGTH = 1;
    static constexpr uint8_t CRC_EXTRA = 219;
    static constexpr auto NAME = "REQUEST_HOME_POSITION";


    uint8_t target_system; /*<  The system which the home position is being requested from. */


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

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << target_system;                 // offset: 0
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> target_system;                 // offset: 0
    }
};

} // namespace msg
} // namespace mace_mission
} // namespace mavlink
