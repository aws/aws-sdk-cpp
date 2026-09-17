/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

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
 * <p>A time-bound restriction on a calling action, such as the number of calls
 * allowed within a time period.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppCallPermissionLimit">AWS
 * API Reference</a></p>
 */
class WhatsAppCallPermissionLimit {
 public:
  AWS_SOCIALMESSAGING_API WhatsAppCallPermissionLimit() = default;
  AWS_SOCIALMESSAGING_API WhatsAppCallPermissionLimit(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API WhatsAppCallPermissionLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The time period over which the limit applies, as an ISO 8601 duration.</p>
   */
  inline const Aws::String& GetTimePeriod() const { return m_timePeriod; }
  inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
  template <typename TimePeriodT = Aws::String>
  void SetTimePeriod(TimePeriodT&& value) {
    m_timePeriodHasBeenSet = true;
    m_timePeriod = std::forward<TimePeriodT>(value);
  }
  template <typename TimePeriodT = Aws::String>
  WhatsAppCallPermissionLimit& WithTimePeriod(TimePeriodT&& value) {
    SetTimePeriod(std::forward<TimePeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of times the action is allowed within the time period.</p>
   */
  inline int GetMaxAllowed() const { return m_maxAllowed; }
  inline bool MaxAllowedHasBeenSet() const { return m_maxAllowedHasBeenSet; }
  inline void SetMaxAllowed(int value) {
    m_maxAllowedHasBeenSet = true;
    m_maxAllowed = value;
  }
  inline WhatsAppCallPermissionLimit& WithMaxAllowed(int value) {
    SetMaxAllowed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of times the action has been used within the current time
   * period.</p>
   */
  inline int GetCurrentUsage() const { return m_currentUsage; }
  inline bool CurrentUsageHasBeenSet() const { return m_currentUsageHasBeenSet; }
  inline void SetCurrentUsage(int value) {
    m_currentUsageHasBeenSet = true;
    m_currentUsage = value;
  }
  inline WhatsAppCallPermissionLimit& WithCurrentUsage(int value) {
    SetCurrentUsage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the limit resets. This value is present only when the current
   * usage has reached the maximum allowed.</p>
   */
  inline const Aws::Utils::DateTime& GetLimitExpirationTime() const { return m_limitExpirationTime; }
  inline bool LimitExpirationTimeHasBeenSet() const { return m_limitExpirationTimeHasBeenSet; }
  template <typename LimitExpirationTimeT = Aws::Utils::DateTime>
  void SetLimitExpirationTime(LimitExpirationTimeT&& value) {
    m_limitExpirationTimeHasBeenSet = true;
    m_limitExpirationTime = std::forward<LimitExpirationTimeT>(value);
  }
  template <typename LimitExpirationTimeT = Aws::Utils::DateTime>
  WhatsAppCallPermissionLimit& WithLimitExpirationTime(LimitExpirationTimeT&& value) {
    SetLimitExpirationTime(std::forward<LimitExpirationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_timePeriod;

  int m_maxAllowed{0};

  int m_currentUsage{0};

  Aws::Utils::DateTime m_limitExpirationTime{};
  bool m_timePeriodHasBeenSet = false;
  bool m_maxAllowedHasBeenSet = false;
  bool m_currentUsageHasBeenSet = false;
  bool m_limitExpirationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
