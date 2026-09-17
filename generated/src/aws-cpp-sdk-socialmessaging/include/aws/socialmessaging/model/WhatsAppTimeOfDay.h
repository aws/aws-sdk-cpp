/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

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
 * <p>A time of day, expressed as an hour and minute.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppTimeOfDay">AWS
 * API Reference</a></p>
 */
class WhatsAppTimeOfDay {
 public:
  AWS_SOCIALMESSAGING_API WhatsAppTimeOfDay() = default;
  AWS_SOCIALMESSAGING_API WhatsAppTimeOfDay(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API WhatsAppTimeOfDay& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The hour of the day, from 0 to 23.</p>
   */
  inline int GetHours() const { return m_hours; }
  inline bool HoursHasBeenSet() const { return m_hoursHasBeenSet; }
  inline void SetHours(int value) {
    m_hoursHasBeenSet = true;
    m_hours = value;
  }
  inline WhatsAppTimeOfDay& WithHours(int value) {
    SetHours(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minute of the hour, from 0 to 59.</p>
   */
  inline int GetMinutes() const { return m_minutes; }
  inline bool MinutesHasBeenSet() const { return m_minutesHasBeenSet; }
  inline void SetMinutes(int value) {
    m_minutesHasBeenSet = true;
    m_minutes = value;
  }
  inline WhatsAppTimeOfDay& WithMinutes(int value) {
    SetMinutes(value);
    return *this;
  }
  ///@}
 private:
  int m_hours{0};

  int m_minutes{0};
  bool m_hoursHasBeenSet = false;
  bool m_minutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
