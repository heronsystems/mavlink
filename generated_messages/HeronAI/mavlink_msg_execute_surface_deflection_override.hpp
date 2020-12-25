// MESSAGE EXECUTE_SURFACE_DEFLECTION_OVERRIDE support class

#pragma once

namespace mavlink {
namespace HeronAI {
namespace msg {

/**
 * @brief EXECUTE_SURFACE_DEFLECTION_OVERRIDE message
 *
 * Command sent by a companion asset overriding any deflections set from the flight controller. The vehicle must be in the appropriate mode to support this command. It will not change modes in response to receiving this command.
 */
struct EXECUTE_SURFACE_DEFLECTION_OVERRIDE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 12004;
    static constexpr size_t LENGTH = 20;
    static constexpr size_t MIN_LENGTH = 20;
    static constexpr uint8_t CRC_EXTRA = 46;
    static constexpr auto NAME = "EXECUTE_SURFACE_DEFLECTION_OVERRIDE";


    float event_type; /*<  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control. */
    float deflection_elevator; /*<  elevator_deflection: Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle. */
    float deflection_aileron; /*<  aileron_deflectiond: Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle. */
    float deflection_rudder; /*<  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle. */
    float deflection_throttle; /*<  throttle_deflection: Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust). */


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
        ss << "  event_type: " << event_type << std::endl;
        ss << "  deflection_elevator: " << deflection_elevator << std::endl;
        ss << "  deflection_aileron: " << deflection_aileron << std::endl;
        ss << "  deflection_rudder: " << deflection_rudder << std::endl;
        ss << "  deflection_throttle: " << deflection_throttle << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << event_type;                    // offset: 0
        map << deflection_elevator;           // offset: 4
        map << deflection_aileron;            // offset: 8
        map << deflection_rudder;             // offset: 12
        map << deflection_throttle;           // offset: 16
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> event_type;                    // offset: 0
        map >> deflection_elevator;           // offset: 4
        map >> deflection_aileron;            // offset: 8
        map >> deflection_rudder;             // offset: 12
        map >> deflection_throttle;           // offset: 16
    }
};

} // namespace msg
} // namespace HeronAI
} // namespace mavlink
