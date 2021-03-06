// MESSAGE MACE_MISSION_REQUEST_INT support class

#pragma once

namespace mavlink {
namespace mace_mission {
namespace msg {

/**
 * @brief MACE_MISSION_REQUEST_INT message
 *
 * Request the information of the mission item with the sequence number seq. The response of the system to this message should be a MISSION_ITEM_INT message. https://mavlink.io/en/services/mission.html
 */
struct MACE_MISSION_REQUEST_INT : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12505;
    static constexpr size_t LENGTH = 7;
    static constexpr size_t MIN_LENGTH = 4;
    static constexpr uint8_t CRC_EXTRA = 13;
    static constexpr auto NAME = "MACE_MISSION_REQUEST_INT";


    uint8_t target_system; /*<  System ID */
    uint8_t target_component; /*<  Component ID */
    uint16_t seq; /*<  Sequence */
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
        ss << "  seq: " << seq << std::endl;
        ss << "  mission_type: " << +mission_type << std::endl;
        ss << "  mission_creator: " << +mission_creator << std::endl;
        ss << "  mission_id: " << +mission_id << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << seq;                           // offset: 0
        map << target_system;                 // offset: 2
        map << target_component;              // offset: 3
        map << mission_type;                  // offset: 4
        map << mission_creator;               // offset: 5
        map << mission_id;                    // offset: 6
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> seq;                           // offset: 0
        map >> target_system;                 // offset: 2
        map >> target_component;              // offset: 3
        map >> mission_type;                  // offset: 4
        map >> mission_creator;               // offset: 5
        map >> mission_id;                    // offset: 6
    }
};

} // namespace msg
} // namespace mace_mission
} // namespace mavlink
