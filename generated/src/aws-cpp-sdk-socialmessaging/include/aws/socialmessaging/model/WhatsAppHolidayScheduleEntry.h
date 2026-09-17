/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/WhatsAppTimeOfDay.h>

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
 * <p>A date-specific override to the weekly operating hours, such as a
 * holiday.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppHolidayScheduleEntry">AWS
 * API Reference</a></p>
 */
class WhatsAppHolidayScheduleEntry {
 public:
  AWS_SOCIALMESSAGING_API WhatsAppHolidayScheduleEntry() = default;
  AWS_SOCIALMESSAGING_API WhatsAppHolidayScheduleEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API WhatsAppHolidayScheduleEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The date that the override applies to, in ISO 8601 format
   * (<code>YYYY-MM-DD</code>).</p>
   */
  inline const Aws::String& GetDate() const { return m_date; }
  inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
  template <typename DateT = Aws::String>
  void SetDate(DateT&& value) {
    m_dateHasBeenSet = true;
    m_date = std::forward<DateT>(value);
  }
  template <typename DateT = Aws::String>
  WhatsAppHolidayScheduleEntry& WithDate(DateT&& value) {
    SetDate(std::forward<DateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time of day when the business begins accepting calls on the override
   * date.</p>
   */
  inline const WhatsAppTimeOfDay& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = WhatsAppTimeOfDay>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = WhatsAppTimeOfDay>
  WhatsAppHolidayScheduleEntry& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time of day when the business stops accepting calls on the override
   * date.</p>
   */
  inline const WhatsAppTimeOfDay& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = WhatsAppTimeOfDay>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = WhatsAppTimeOfDay>
  WhatsAppHolidayScheduleEntry& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_date;

  WhatsAppTimeOfDay m_startTime;

  WhatsAppTimeOfDay m_endTime;
  bool m_dateHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
