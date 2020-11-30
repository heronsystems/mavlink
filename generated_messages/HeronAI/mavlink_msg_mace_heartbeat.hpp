// MESSAGE MACE_HEARTBEAT support class

#pragma once

namespace mavlink {
namespace HeronAI {
namespace msg {

/**
 * @brief MACE_HEARTBEAT message
 *
 * The heartbeat message shows that a system is present and responding. The type of the MAV and Autopilot hardware allow the receiving system to treat further messages from this system appropriate (e.g. by laying out the user interface based on the autopilot).
 */
struct MACE_HEARTBEAT : mavlink::Message {
    static constexpr msgid_t MSG_ID = 397;
    static constexpr size_t LENGTH = 9;
    static constexpr size_t MIN_LENGTH = 9;
    static constexpr uint8_t CRC_EXTRA = 251;
    static constexpr auto NAME = "MACE_HEARTBEAT";


    uint8_t protocol; /*<  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM) */
    uint8_t type; /*<  Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM) */
    uint8_t autopilot; /*<  Autopilot type / class. defined in MAV_AUTOPILOT ENUM */
    uint8_t vehicle_mode; /*<  The flight mode in its enumerated form. This must be cast per the type of vehicle it is. */
    uint8_t vehicle_armed; /*<  Boolean describing whether(T=1) or not(F=0) the vehicle is armed. */
    uint8_t mission_state; /*<  Defines the current state of the vehicle mission. Useful for determing the next state of the vehicle per mission state. */
    uint8_t mace_companion; /*<  Boolean describing whether(T=1) or not(F=0) the vehicle is MACE companion equipped. */
    uint8_t mavlink_version; /*<  MAVLink version, not writable by user, gets added by protocol because of magic data type: uint8_t_mavlink_version */
    uint8_t mavlinkID; /*<   */


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
        ss << "  protocol: " << +protocol << std::endl;
        ss << "  type: " << +type << std::endl;
        ss << "  autopilot: " << +autopilot << std::endl;
        ss << "  vehicle_mode: " << +vehicle_mode << std::endl;
        ss << "  vehicle_armed: " << +vehicle_armed << std::endl;
        ss << "  mission_state: " << +mission_state << std::endl;
        ss << "  mace_companion: " << +mace_companion << std::endl;
        ss << "  mavlink_version: " << +mavlink_version << std::endl;
        ss << "  mavlinkID: " << +mavlinkID << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << protocol;                      // offset: 0
        map << type;                          // offset: 1
        map << autopilot;                     // offset: 2
        map << vehicle_mode;                  // offset: 3
        map << vehicle_armed;                 // offset: 4
        map << mission_state;                 // offset: 5
        map << mace_companion;                // offset: 6
        map << uint8_t(2);               // offset: 7
        map << mavlinkID;                     // offset: 8
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> protocol;                      // offset: 0
        map >> type;                          // offset: 1
        map >> autopilot;                     // offset: 2
        map >> vehicle_mode;                  // offset: 3
        map >> vehicle_armed;                 // offset: 4
        map >> mission_state;                 // offset: 5
        map >> mace_companion;                // offset: 6
        map >> mavlink_version;               // offset: 7
        map >> mavlinkID;                     // offset: 8
    }
};

} // namespace msg
} // namespace HeronAI
} // namespace mavlink
