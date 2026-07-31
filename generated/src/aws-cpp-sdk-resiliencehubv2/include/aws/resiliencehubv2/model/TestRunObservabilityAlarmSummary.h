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
 * <p>Summary information about an observability alarm snapshot captured for a test
 * run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestRunObservabilityAlarmSummary">AWS
 * API Reference</a></p>
 */
class TestRunObservabilityAlarmSummary {
 public:
  AWS_RESILIENCEHUBV2_API TestRunObservabilityAlarmSummary() = default;
  AWS_RESILIENCEHUBV2_API TestRunObservabilityAlarmSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestRunObservabilityAlarmSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  TestRunObservabilityAlarmSummary& WithAlarmArn(AlarmArnT&& value) {
    SetAlarmArn(std::forward<AlarmArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the CloudWatch alarm.</p>
   */
  inline const Aws::String& GetAlarmName() const { return m_alarmName; }
  inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
  template <typename AlarmNameT = Aws::String>
  void SetAlarmName(AlarmNameT&& value) {
    m_alarmNameHasBeenSet = true;
    m_alarmName = std::forward<AlarmNameT>(value);
  }
  template <typename AlarmNameT = Aws::String>
  TestRunObservabilityAlarmSummary& WithAlarmName(AlarmNameT&& value) {
    SetAlarmName(std::forward<AlarmNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Region of the CloudWatch alarm.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  TestRunObservabilityAlarmSummary& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID that owns the CloudWatch alarm.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  TestRunObservabilityAlarmSummary& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alarmArn;

  Aws::String m_alarmName;

  Aws::String m_region;

  Aws::String m_accountId;
  bool m_alarmArnHasBeenSet = false;
  bool m_alarmNameHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
