// MESSAGE MACE_SET_VEHICLE_MODE support class

#pragma once

namespace mavlink {
namespace mace_common {
namespace msg {

/**
 * @brief MACE_SET_VEHICLE_MODE message
 *
 * A short command message for those messages only requiring one parameter. Th
 */
struct MACE_SET_VEHICLE_MODE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12401;
    static constexpr size_t LENGTH = 21;
    static constexpr size_t MIN_LENGTH = 21;
    static constexpr uint8_t CRC_EXTRA = 67;
    static constexpr auto NAME = "MACE_SET_VEHICLE_MODE";


    uint8_t target_system; /*<  System which should execute the command */
    std::array<char, 20> mode; /*<  The string of the desired mode for the autonomous system. */


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
        ss << "  mode: \"" << to_string(mode) << "\"" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << target_system;                 // offset: 0
        map << mode;                          // offset: 1
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> target_system;                 // offset: 0
        map >> mode;                          // offset: 1
    }
};

} // namespace msg
} // namespace mace_common
} // namespace mavlink
