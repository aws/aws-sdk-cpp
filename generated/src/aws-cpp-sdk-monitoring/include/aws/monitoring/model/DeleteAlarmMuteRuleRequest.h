/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CloudWatch {
namespace Model {

/**
 */
class DeleteAlarmMuteRuleRequest : public CloudWatchRequest {
 public:
  AWS_CLOUDWATCH_API DeleteAlarmMuteRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAlarmMuteRule"; }

  AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the alarm mute rule to delete.</p>
   */
  inline const Aws::String& GetAlarmMuteRuleName() const { return m_alarmMuteRuleName; }
  inline bool AlarmMuteRuleNameHasBeenSet() const { return m_alarmMuteRuleNameHasBeenSet; }
  template <typename AlarmMuteRuleNameT = Aws::String>
  void SetAlarmMuteRuleName(AlarmMuteRuleNameT&& value) {
    m_alarmMuteRuleNameHasBeenSet = true;
    m_alarmMuteRuleName = std::forward<AlarmMuteRuleNameT>(value);
  }
  template <typename AlarmMuteRuleNameT = Aws::String>
  DeleteAlarmMuteRuleRequest& WithAlarmMuteRuleName(AlarmMuteRuleNameT&& value) {
    SetAlarmMuteRuleName(std::forward<AlarmMuteRuleNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alarmMuteRuleName;
  bool m_alarmMuteRuleNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
