/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/WhatsAppHolidayScheduleEntry.h>
#include <aws/socialmessaging/model/WhatsAppWeeklyOperatingHoursEntry.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {

/**
 * <p>The operating hours during which a business phone number accepts WhatsApp
 * calls, including the time zone, weekly schedule, and any holiday
 * overrides.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppCallHours">AWS
 * API Reference</a></p>
 */
class WhatsAppCallHours {
 public:
  AWS_SOCIALMESSAGING_API WhatsAppCallHours() = default;
  AWS_SOCIALMESSAGING_API WhatsAppCallHours(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API WhatsAppCallHours& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether call hours are enforced. When disabled, the business
   * accepts calls at any time.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline WhatsAppCallHours& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IANA time zone in which the operating hours are interpreted, such as
   * <code>America/New_York</code>.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  WhatsAppCallHours& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weekly schedule of hours during which the business accepts calls.</p>
   */
  inline const Aws::Vector<WhatsAppWeeklyOperatingHoursEntry>& GetWeeklyOperatingHours() const { return m_weeklyOperatingHours; }
  inline bool WeeklyOperatingHoursHasBeenSet() const { return m_weeklyOperatingHoursHasBeenSet; }
  template <typename WeeklyOperatingHoursT = Aws::Vector<WhatsAppWeeklyOperatingHoursEntry>>
  void SetWeeklyOperatingHours(WeeklyOperatingHoursT&& value) {
    m_weeklyOperatingHoursHasBeenSet = true;
    m_weeklyOperatingHours = std::forward<WeeklyOperatingHoursT>(value);
  }
  template <typename WeeklyOperatingHoursT = Aws::Vector<WhatsAppWeeklyOperatingHoursEntry>>
  WhatsAppCallHours& WithWeeklyOperatingHours(WeeklyOperatingHoursT&& value) {
    SetWeeklyOperatingHours(std::forward<WeeklyOperatingHoursT>(value));
    return *this;
  }
  template <typename WeeklyOperatingHoursT = WhatsAppWeeklyOperatingHoursEntry>
  WhatsAppCallHours& AddWeeklyOperatingHours(WeeklyOperatingHoursT&& value) {
    m_weeklyOperatingHoursHasBeenSet = true;
    m_weeklyOperatingHours.emplace_back(std::forward<WeeklyOperatingHoursT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Date-specific overrides to the weekly operating hours, such as holidays.</p>
   */
  inline const Aws::Vector<WhatsAppHolidayScheduleEntry>& GetHolidaySchedule() const { return m_holidaySchedule; }
  inline bool HolidayScheduleHasBeenSet() const { return m_holidayScheduleHasBeenSet; }
  template <typename HolidayScheduleT = Aws::Vector<WhatsAppHolidayScheduleEntry>>
  void SetHolidaySchedule(HolidayScheduleT&& value) {
    m_holidayScheduleHasBeenSet = true;
    m_holidaySchedule = std::forward<HolidayScheduleT>(value);
  }
  template <typename HolidayScheduleT = Aws::Vector<WhatsAppHolidayScheduleEntry>>
  WhatsAppCallHours& WithHolidaySchedule(HolidayScheduleT&& value) {
    SetHolidaySchedule(std::forward<HolidayScheduleT>(value));
    return *this;
  }
  template <typename HolidayScheduleT = WhatsAppHolidayScheduleEntry>
  WhatsAppCallHours& AddHolidaySchedule(HolidayScheduleT&& value) {
    m_holidayScheduleHasBeenSet = true;
    m_holidaySchedule.emplace_back(std::forward<HolidayScheduleT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_timezone;

  Aws::Vector<WhatsAppWeeklyOperatingHoursEntry> m_weeklyOperatingHours;

  Aws::Vector<WhatsAppHolidayScheduleEntry> m_holidaySchedule;
  bool m_enabledHasBeenSet = false;
  bool m_timezoneHasBeenSet = false;
  bool m_weeklyOperatingHoursHasBeenSet = false;
  bool m_holidayScheduleHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
