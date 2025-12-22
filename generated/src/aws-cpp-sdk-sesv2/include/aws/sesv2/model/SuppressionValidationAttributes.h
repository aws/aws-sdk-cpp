/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SuppressionConditionThreshold.h>

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
 * <p>Structure containing validation attributes used for suppressing sending to
 * specific destination on account level.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressionValidationAttributes">AWS
 * API Reference</a></p>
 */
class SuppressionValidationAttributes {
 public:
  AWS_SESV2_API SuppressionValidationAttributes() = default;
  AWS_SESV2_API SuppressionValidationAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API SuppressionValidationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the condition threshold settings for account-level suppression.</p>
   */
  inline const SuppressionConditionThreshold& GetConditionThreshold() const { return m_conditionThreshold; }
  inline bool ConditionThresholdHasBeenSet() const { return m_conditionThresholdHasBeenSet; }
  template <typename ConditionThresholdT = SuppressionConditionThreshold>
  void SetConditionThreshold(ConditionThresholdT&& value) {
    m_conditionThresholdHasBeenSet = true;
    m_conditionThreshold = std::forward<ConditionThresholdT>(value);
  }
  template <typename ConditionThresholdT = SuppressionConditionThreshold>
  SuppressionValidationAttributes& WithConditionThreshold(ConditionThresholdT&& value) {
    SetConditionThreshold(std::forward<ConditionThresholdT>(value));
    return *this;
  }
  ///@}
 private:
  SuppressionConditionThreshold m_conditionThreshold;
  bool m_conditionThresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
