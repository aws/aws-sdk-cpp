/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/FeatureStatus.h>
#include <aws/sesv2/model/SuppressionConfidenceThreshold.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {

/**
 * <p>Contains Auto Validation settings, allowing you to suppress sending to
 * specific destination(s) if they do not meet required threshold. For details on
 * Auto Validation, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/email-validation.html">Auto
 * Validation</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressionConditionThreshold">AWS
 * API Reference</a></p>
 */
class SuppressionConditionThreshold {
 public:
  AWS_SESV2_API SuppressionConditionThreshold() = default;
  AWS_SESV2_API SuppressionConditionThreshold(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API SuppressionConditionThreshold& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether Auto Validation is enabled for suppression. Set to
   * <code>ENABLED</code> to enable the Auto Validation feature, or set to
   * <code>DISABLED</code> to disable it.</p>
   */
  inline FeatureStatus GetConditionThresholdEnabled() const { return m_conditionThresholdEnabled; }
  inline bool ConditionThresholdEnabledHasBeenSet() const { return m_conditionThresholdEnabledHasBeenSet; }
  inline void SetConditionThresholdEnabled(FeatureStatus value) {
    m_conditionThresholdEnabledHasBeenSet = true;
    m_conditionThresholdEnabled = value;
  }
  inline SuppressionConditionThreshold& WithConditionThresholdEnabled(FeatureStatus value) {
    SetConditionThresholdEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The overall confidence threshold used to determine suppression decisions.</p>
   */
  inline const SuppressionConfidenceThreshold& GetOverallConfidenceThreshold() const { return m_overallConfidenceThreshold; }
  inline bool OverallConfidenceThresholdHasBeenSet() const { return m_overallConfidenceThresholdHasBeenSet; }
  template <typename OverallConfidenceThresholdT = SuppressionConfidenceThreshold>
  void SetOverallConfidenceThreshold(OverallConfidenceThresholdT&& value) {
    m_overallConfidenceThresholdHasBeenSet = true;
    m_overallConfidenceThreshold = std::forward<OverallConfidenceThresholdT>(value);
  }
  template <typename OverallConfidenceThresholdT = SuppressionConfidenceThreshold>
  SuppressionConditionThreshold& WithOverallConfidenceThreshold(OverallConfidenceThresholdT&& value) {
    SetOverallConfidenceThreshold(std::forward<OverallConfidenceThresholdT>(value));
    return *this;
  }
  ///@}
 private:
  FeatureStatus m_conditionThresholdEnabled{FeatureStatus::NOT_SET};

  SuppressionConfidenceThreshold m_overallConfidenceThreshold;
  bool m_conditionThresholdEnabledHasBeenSet = false;
  bool m_overallConfidenceThresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
