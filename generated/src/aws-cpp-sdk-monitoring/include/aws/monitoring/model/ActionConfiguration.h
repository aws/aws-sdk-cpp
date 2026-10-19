/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/AlarmTagsPropagation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>Settings that change the content of the notifications and events that an
 * alarm sends when its state changes. These settings apply to the alarm's actions,
 * whichever state triggers them.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ActionConfiguration">AWS
 * API Reference</a></p>
 */
class ActionConfiguration {
 public:
  AWS_CLOUDWATCH_API ActionConfiguration() = default;
  AWS_CLOUDWATCH_API ActionConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API ActionConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Settings for including the alarm's tags in its action notifications and
   * state-change events.</p>
   */
  inline const AlarmTagsPropagation& GetAlarmTagsPropagation() const { return m_alarmTagsPropagation; }
  inline bool AlarmTagsPropagationHasBeenSet() const { return m_alarmTagsPropagationHasBeenSet; }
  template <typename AlarmTagsPropagationT = AlarmTagsPropagation>
  void SetAlarmTagsPropagation(AlarmTagsPropagationT&& value) {
    m_alarmTagsPropagationHasBeenSet = true;
    m_alarmTagsPropagation = std::forward<AlarmTagsPropagationT>(value);
  }
  template <typename AlarmTagsPropagationT = AlarmTagsPropagation>
  ActionConfiguration& WithAlarmTagsPropagation(AlarmTagsPropagationT&& value) {
    SetAlarmTagsPropagation(std::forward<AlarmTagsPropagationT>(value));
    return *this;
  }
  ///@}
 private:
  AlarmTagsPropagation m_alarmTagsPropagation;
  bool m_alarmTagsPropagationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
