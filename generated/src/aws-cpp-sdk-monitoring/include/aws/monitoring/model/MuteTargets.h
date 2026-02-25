/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

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
 * <p>Specifies which alarms an alarm mute rule applies to.</p> <p>You can target
 * up to 100 specific alarms by name. When a mute rule is active, the targeted
 * alarms continue to evaluate metrics and transition between states, but their
 * configured actions are muted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MuteTargets">AWS
 * API Reference</a></p>
 */
class MuteTargets {
 public:
  AWS_CLOUDWATCH_API MuteTargets() = default;
  AWS_CLOUDWATCH_API MuteTargets(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API MuteTargets& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The list of alarm names that this mute rule targets. You can specify up to
   * 100 alarm names.</p> <p>Each alarm name must be between 1 and 255 characters in
   * length. The alarm names must match existing alarms in your Amazon Web Services
   * account and region.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAlarmNames() const { return m_alarmNames; }
  inline bool AlarmNamesHasBeenSet() const { return m_alarmNamesHasBeenSet; }
  template <typename AlarmNamesT = Aws::Vector<Aws::String>>
  void SetAlarmNames(AlarmNamesT&& value) {
    m_alarmNamesHasBeenSet = true;
    m_alarmNames = std::forward<AlarmNamesT>(value);
  }
  template <typename AlarmNamesT = Aws::Vector<Aws::String>>
  MuteTargets& WithAlarmNames(AlarmNamesT&& value) {
    SetAlarmNames(std::forward<AlarmNamesT>(value));
    return *this;
  }
  template <typename AlarmNamesT = Aws::String>
  MuteTargets& AddAlarmNames(AlarmNamesT&& value) {
    m_alarmNamesHasBeenSet = true;
    m_alarmNames.emplace_back(std::forward<AlarmNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_alarmNames;
  bool m_alarmNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
