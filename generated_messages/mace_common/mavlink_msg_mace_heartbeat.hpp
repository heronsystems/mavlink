// MESSAGE MACE_HEARTBEAT support class

#pragma once

namespace mavlink {
namespace mace_common {
namespace msg {

/**
 * @brief MACE_HEARTBEAT message
 *
 * The heartbeat message shows that a system or component is present and responding. The type and autopilot fields (along with the message component id), allow the receiving system to treat further messages from this system appropriately (e.g. by laying out the user interface based on the autopilot). This microservice is documented at https://mavlink.io/en/services/heartbeat.html
 */
struct MACE_HEARTBEAT : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12400;
    static constexpr size_t LENGTH = 5;
    static constexpr size_t MIN_LENGTH = 5;
    static constexpr uint8_t CRC_EXTRA = 179;
    static constexpr auto NAME = "MACE_HEARTBEAT";


    uint8_t type; /*<  Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type. */
    uint8_t autopilot; /*<  Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers. */
    uint8_t flight_mode; /*<  System mode. */
    uint8_t vehicle_hsm; /*<  System status flag. */
    uint8_t mavlink_version; /*<  MAVLink version, not writable by user, gets added by protocol because of magic data type: uint8_t_mavlink_version */


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
        ss << "  type: " << +type << std::endl;
        ss << "  autopilot: " << +autopilot << std::endl;
        ss << "  flight_mode: " << +flight_mode << std::endl;
        ss << "  vehicle_hsm: " << +vehicle_hsm << std::endl;
        ss << "  mavlink_version: " << +mavlink_version << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << type;                          // offset: 0
        map << autopilot;                     // offset: 1
        map << flight_mode;                   // offset: 2
        map << vehicle_hsm;                   // offset: 3
        map << uint8_t(3);               // offset: 4
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> type;                          // offset: 0
        map >> autopilot;                     // offset: 1
        map >> flight_mode;                   // offset: 2
        map >> vehicle_hsm;                   // offset: 3
        map >> mavlink_version;               // offset: 4
    }
};

} // namespace msg
} // namespace mace_common
} // namespace mavlink
