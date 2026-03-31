/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Details of code review settings</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CodeReviewSettings">AWS
 * API Reference</a></p>
 */
class CodeReviewSettings {
 public:
  AWS_SECURITYAGENT_API CodeReviewSettings() = default;
  AWS_SECURITYAGENT_API CodeReviewSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API CodeReviewSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether Controls are utilized for code review analysis</p>
   */
  inline bool GetControlsScanning() const { return m_controlsScanning; }
  inline bool ControlsScanningHasBeenSet() const { return m_controlsScanningHasBeenSet; }
  inline void SetControlsScanning(bool value) {
    m_controlsScanningHasBeenSet = true;
    m_controlsScanning = value;
  }
  inline CodeReviewSettings& WithControlsScanning(bool value) {
    SetControlsScanning(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether general purpose analysis is performed for code review</p>
   */
  inline bool GetGeneralPurposeScanning() const { return m_generalPurposeScanning; }
  inline bool GeneralPurposeScanningHasBeenSet() const { return m_generalPurposeScanningHasBeenSet; }
  inline void SetGeneralPurposeScanning(bool value) {
    m_generalPurposeScanningHasBeenSet = true;
    m_generalPurposeScanning = value;
  }
  inline CodeReviewSettings& WithGeneralPurposeScanning(bool value) {
    SetGeneralPurposeScanning(value);
    return *this;
  }
  ///@}
 private:
  bool m_controlsScanning{false};

  bool m_generalPurposeScanning{false};
  bool m_controlsScanningHasBeenSet = false;
  bool m_generalPurposeScanningHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
