// MESSAGE MACE_MISSION_ACK support class

#pragma once

namespace mavlink {
namespace mace_mission {
namespace msg {

/**
 * @brief MACE_MISSION_ACK message
 *
 * Acknowledgment message during waypoint handling. The type field states if this message is a positive ack (type=0) or if an error happened (type=non-zero).
 */
struct MACE_MISSION_ACK : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12504;
    static constexpr size_t LENGTH = 6;
    static constexpr size_t MIN_LENGTH = 3;
    static constexpr uint8_t CRC_EXTRA = 57;
    static constexpr auto NAME = "MACE_MISSION_ACK";


    uint8_t target_system; /*<  System ID */
    uint8_t target_component; /*<  Component ID */
    uint8_t type; /*<  Mission result. */
    uint8_t mission_type; /*<  Mission type. */
    uint8_t mission_creator; /*<  Creator ID */
    uint8_t mission_id; /*<  Mission ID */


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
        ss << "  type: " << +type << std::endl;
        ss << "  mission_type: " << +mission_type << std::endl;
        ss << "  mission_creator: " << +mission_creator << std::endl;
        ss << "  mission_id: " << +mission_id << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << target_system;                 // offset: 0
        map << target_component;              // offset: 1
        map << type;                          // offset: 2
        map << mission_type;                  // offset: 3
        map << mission_creator;               // offset: 4
        map << mission_id;                    // offset: 5
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> target_system;                 // offset: 0
        map >> target_component;              // offset: 1
        map >> type;                          // offset: 2
        map >> mission_type;                  // offset: 3
        map >> mission_creator;               // offset: 4
        map >> mission_id;                    // offset: 5
    }
};

} // namespace msg
} // namespace mace_mission
} // namespace mavlink
