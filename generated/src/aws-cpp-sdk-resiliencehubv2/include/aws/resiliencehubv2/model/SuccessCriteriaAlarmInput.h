/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Identifies a success criteria alarm by its ARN.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/SuccessCriteriaAlarmInput">AWS
 * API Reference</a></p>
 */
class SuccessCriteriaAlarmInput {
 public:
  AWS_RESILIENCEHUBV2_API SuccessCriteriaAlarmInput() = default;
  AWS_RESILIENCEHUBV2_API SuccessCriteriaAlarmInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API SuccessCriteriaAlarmInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the CloudWatch alarm.</p>
   */
  inline const Aws::String& GetAlarmArn() const { return m_alarmArn; }
  inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }
  template <typename AlarmArnT = Aws::String>
  void SetAlarmArn(AlarmArnT&& value) {
    m_alarmArnHasBeenSet = true;
    m_alarmArn = std::forward<AlarmArnT>(value);
  }
  template <typename AlarmArnT = Aws::String>
  SuccessCriteriaAlarmInput& WithAlarmArn(AlarmArnT&& value) {
    SetAlarmArn(std::forward<AlarmArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alarmArn;
  bool m_alarmArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
