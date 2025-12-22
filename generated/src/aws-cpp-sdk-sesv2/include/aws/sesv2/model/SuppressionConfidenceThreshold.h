/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SuppressionConfidenceVerdictThreshold.h>

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
 * <p>Contains the confidence threshold settings for Auto Validation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressionConfidenceThreshold">AWS
 * API Reference</a></p>
 */
class SuppressionConfidenceThreshold {
 public:
  AWS_SESV2_API SuppressionConfidenceThreshold() = default;
  AWS_SESV2_API SuppressionConfidenceThreshold(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API SuppressionConfidenceThreshold& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The confidence level threshold for suppression decisions.</p>
   */
  inline SuppressionConfidenceVerdictThreshold GetConfidenceVerdictThreshold() const { return m_confidenceVerdictThreshold; }
  inline bool ConfidenceVerdictThresholdHasBeenSet() const { return m_confidenceVerdictThresholdHasBeenSet; }
  inline void SetConfidenceVerdictThreshold(SuppressionConfidenceVerdictThreshold value) {
    m_confidenceVerdictThresholdHasBeenSet = true;
    m_confidenceVerdictThreshold = value;
  }
  inline SuppressionConfidenceThreshold& WithConfidenceVerdictThreshold(SuppressionConfidenceVerdictThreshold value) {
    SetConfidenceVerdictThreshold(value);
    return *this;
  }
  ///@}
 private:
  SuppressionConfidenceVerdictThreshold m_confidenceVerdictThreshold{SuppressionConfidenceVerdictThreshold::NOT_SET};
  bool m_confidenceVerdictThresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
