// MESSAGE SET_SURFACE_DEFLECTION_NORMALIZED support class

#pragma once

namespace mavlink {
namespace HeronAI {
namespace msg {

/**
 * @brief SET_SURFACE_DEFLECTION_NORMALIZED message
 *
 * Sets the deflection of the control surfaces of the aircraft. Principally used with fixed wing.
 */
struct SET_SURFACE_DEFLECTION_NORMALIZED : mavlink::Message {
    static constexpr msgid_t MSG_ID = 402;
    static constexpr size_t LENGTH = 23;
    static constexpr size_t MIN_LENGTH = 23;
    static constexpr uint8_t CRC_EXTRA = 28;
    static constexpr auto NAME = "SET_SURFACE_DEFLECTION_NORMALIZED";


    uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot). */
    uint8_t target_system; /*<  System ID */
    uint8_t target_component; /*<  Component ID */
    uint8_t surface_mask; /*<  Bitmask defining the control authorities on the axis that should remain stabilized or tracking an explicit condition. This would imply we can set the aircraft on a course or attitude state that is maintained by an inner-loop control law while evaluating the other axes under AI control. */
    float elevator_deflection; /*<  Normalized x-axis value between -1 and 1 that corresponds to the elevators of the vehicle. */
    float aileron_deflection; /*<  Normalized y-axis value between -1 and 1 that corresponds to the ailerons of the vehicle. */
    float rudder_deflection; /*<  Normalized r-axis value between -1 and 1 that corresponds to the rudders of the vehicle. */
    float throttle_deflection; /*<  Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust) */


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
        ss << "  time_boot_ms: " << time_boot_ms << std::endl;
        ss << "  target_system: " << +target_system << std::endl;
        ss << "  target_component: " << +target_component << std::endl;
        ss << "  surface_mask: " << +surface_mask << std::endl;
        ss << "  elevator_deflection: " << elevator_deflection << std::endl;
        ss << "  aileron_deflection: " << aileron_deflection << std::endl;
        ss << "  rudder_deflection: " << rudder_deflection << std::endl;
        ss << "  throttle_deflection: " << throttle_deflection << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_boot_ms;                  // offset: 0
        map << elevator_deflection;           // offset: 4
        map << aileron_deflection;            // offset: 8
        map << rudder_deflection;             // offset: 12
        map << throttle_deflection;           // offset: 16
        map << target_system;                 // offset: 20
        map << target_component;              // offset: 21
        map << surface_mask;                  // offset: 22
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_boot_ms;                  // offset: 0
        map >> elevator_deflection;           // offset: 4
        map >> aileron_deflection;            // offset: 8
        map >> rudder_deflection;             // offset: 12
        map >> throttle_deflection;           // offset: 16
        map >> target_system;                 // offset: 20
        map >> target_component;              // offset: 21
        map >> surface_mask;                  // offset: 22
    }
};

} // namespace msg
} // namespace HeronAI
} // namespace mavlink
