/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>The messaging limits that apply to an origination identity, such as a phone
 * number, sender ID, or RCS agent. Includes the per-capability send rates and, for
 * supported origination identities, advisory per-provider daily message
 * caps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/MessagingLimits">AWS
 * API Reference</a></p>
 */
class MessagingLimits {
 public:
  AWS_PINPOINTSMSVOICEV2_API MessagingLimits() = default;
  AWS_PINPOINTSMSVOICEV2_API MessagingLimits(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API MessagingLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum send rate for each supported capability, in messages per second.
   * The map is keyed by capability, such as <code>SMS</code>, <code>MMS</code>,
   * <code>VOICE</code>, or <code>RCS</code>.</p>
   */
  inline const Aws::Map<Aws::String, long long>& GetRateLimits() const { return m_rateLimits; }
  inline bool RateLimitsHasBeenSet() const { return m_rateLimitsHasBeenSet; }
  template <typename RateLimitsT = Aws::Map<Aws::String, long long>>
  void SetRateLimits(RateLimitsT&& value) {
    m_rateLimitsHasBeenSet = true;
    m_rateLimits = std::forward<RateLimitsT>(value);
  }
  template <typename RateLimitsT = Aws::Map<Aws::String, long long>>
  MessagingLimits& WithRateLimits(RateLimitsT&& value) {
    SetRateLimits(std::forward<RateLimitsT>(value));
    return *this;
  }
  inline MessagingLimits& AddRateLimits(Aws::String key, long long value) {
    m_rateLimitsHasBeenSet = true;
    m_rateLimits.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The advisory maximum number of messages that can be sent per day, keyed by
   * provider (for example, <code>T-MOBILE</code>). Applies to 10DLC phone numbers
   * and is omitted when no daily cap applies.</p>
   */
  inline const Aws::Map<Aws::String, long long>& GetDailyMessageCaps() const { return m_dailyMessageCaps; }
  inline bool DailyMessageCapsHasBeenSet() const { return m_dailyMessageCapsHasBeenSet; }
  template <typename DailyMessageCapsT = Aws::Map<Aws::String, long long>>
  void SetDailyMessageCaps(DailyMessageCapsT&& value) {
    m_dailyMessageCapsHasBeenSet = true;
    m_dailyMessageCaps = std::forward<DailyMessageCapsT>(value);
  }
  template <typename DailyMessageCapsT = Aws::Map<Aws::String, long long>>
  MessagingLimits& WithDailyMessageCaps(DailyMessageCapsT&& value) {
    SetDailyMessageCaps(std::forward<DailyMessageCapsT>(value));
    return *this;
  }
  inline MessagingLimits& AddDailyMessageCaps(Aws::String key, long long value) {
    m_dailyMessageCapsHasBeenSet = true;
    m_dailyMessageCaps.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, long long> m_rateLimits;

  Aws::Map<Aws::String, long long> m_dailyMessageCaps;
  bool m_rateLimitsHasBeenSet = false;
  bool m_dailyMessageCapsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
