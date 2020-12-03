// MESSAGE MACE_MISSION_COUNT support class

#pragma once

namespace mavlink {
namespace mace_mission {
namespace msg {

/**
 * @brief MACE_MISSION_COUNT message
 *
 * This message is emitted as response to MISSION_REQUEST_LIST by the MAV and to initiate a write transaction. The GCS can then request the individual mission item based on the knowledge of the total number of waypoints.
 */
struct MACE_MISSION_COUNT : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12503;
    static constexpr size_t LENGTH = 7;
    static constexpr size_t MIN_LENGTH = 4;
    static constexpr uint8_t CRC_EXTRA = 232;
    static constexpr auto NAME = "MACE_MISSION_COUNT";


    uint8_t target_system; /*<  System ID */
    uint8_t target_component; /*<  Component ID */
    uint16_t count; /*<  Number of mission items in the sequence */
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
        ss << "  count: " << count << std::endl;
        ss << "  mission_type: " << +mission_type << std::endl;
        ss << "  mission_creator: " << +mission_creator << std::endl;
        ss << "  mission_id: " << +mission_id << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << count;                         // offset: 0
        map << target_system;                 // offset: 2
        map << target_component;              // offset: 3
        map << mission_type;                  // offset: 4
        map << mission_creator;               // offset: 5
        map << mission_id;                    // offset: 6
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> count;                         // offset: 0
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
