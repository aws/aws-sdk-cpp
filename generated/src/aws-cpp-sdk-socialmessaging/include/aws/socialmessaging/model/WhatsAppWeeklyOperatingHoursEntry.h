/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/WhatsAppDayOfWeek.h>
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
 * <p>A single entry in a weekly calling schedule, defining the open and close
 * times for one day of the week.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppWeeklyOperatingHoursEntry">AWS
 * API Reference</a></p>
 */
class WhatsAppWeeklyOperatingHoursEntry {
 public:
  AWS_SOCIALMESSAGING_API WhatsAppWeeklyOperatingHoursEntry() = default;
  AWS_SOCIALMESSAGING_API WhatsAppWeeklyOperatingHoursEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API WhatsAppWeeklyOperatingHoursEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The day of the week that the entry applies to.</p>
   */
  inline WhatsAppDayOfWeek GetDayOfWeek() const { return m_dayOfWeek; }
  inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
  inline void SetDayOfWeek(WhatsAppDayOfWeek value) {
    m_dayOfWeekHasBeenSet = true;
    m_dayOfWeek = value;
  }
  inline WhatsAppWeeklyOperatingHoursEntry& WithDayOfWeek(WhatsAppDayOfWeek value) {
    SetDayOfWeek(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time of day when the business begins accepting calls.</p>
   */
  inline const WhatsAppTimeOfDay& GetOpenTime() const { return m_openTime; }
  inline bool OpenTimeHasBeenSet() const { return m_openTimeHasBeenSet; }
  template <typename OpenTimeT = WhatsAppTimeOfDay>
  void SetOpenTime(OpenTimeT&& value) {
    m_openTimeHasBeenSet = true;
    m_openTime = std::forward<OpenTimeT>(value);
  }
  template <typename OpenTimeT = WhatsAppTimeOfDay>
  WhatsAppWeeklyOperatingHoursEntry& WithOpenTime(OpenTimeT&& value) {
    SetOpenTime(std::forward<OpenTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time of day when the business stops accepting calls.</p>
   */
  inline const WhatsAppTimeOfDay& GetCloseTime() const { return m_closeTime; }
  inline bool CloseTimeHasBeenSet() const { return m_closeTimeHasBeenSet; }
  template <typename CloseTimeT = WhatsAppTimeOfDay>
  void SetCloseTime(CloseTimeT&& value) {
    m_closeTimeHasBeenSet = true;
    m_closeTime = std::forward<CloseTimeT>(value);
  }
  template <typename CloseTimeT = WhatsAppTimeOfDay>
  WhatsAppWeeklyOperatingHoursEntry& WithCloseTime(CloseTimeT&& value) {
    SetCloseTime(std::forward<CloseTimeT>(value));
    return *this;
  }
  ///@}
 private:
  WhatsAppDayOfWeek m_dayOfWeek{WhatsAppDayOfWeek::NOT_SET};

  WhatsAppTimeOfDay m_openTime;

  WhatsAppTimeOfDay m_closeTime;
  bool m_dayOfWeekHasBeenSet = false;
  bool m_openTimeHasBeenSet = false;
  bool m_closeTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
