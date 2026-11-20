/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/PIIEntitiesConfiguration.h>
#include <aws/textract/model/SensitiveDataDetectionMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {

/**
 * <p>Controls detection and redaction of sensitive data, such as personally
 * identifiable information (PII), in the output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/SensitiveDataConfiguration">AWS
 * API Reference</a></p>
 */
class SensitiveDataConfiguration {
 public:
  AWS_TEXTRACT_API SensitiveDataConfiguration() = default;
  AWS_TEXTRACT_API SensitiveDataConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API SensitiveDataConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The detection mode. Valid values:</p> <ul> <li> <p> <code>DETECTION</code> -
   * Only detects sensitive data.</p> </li> <li> <p>
   * <code>DETECTION_AND_REDACTION</code> - Detects and redacts sensitive data in the
   * output.</p> </li> <li> <p> <code>DISABLED</code> - Does not detect sensitive
   * data.</p> </li> </ul>
   */
  inline SensitiveDataDetectionMode GetDetectionMode() const { return m_detectionMode; }
  inline bool DetectionModeHasBeenSet() const { return m_detectionModeHasBeenSet; }
  inline void SetDetectionMode(SensitiveDataDetectionMode value) {
    m_detectionModeHasBeenSet = true;
    m_detectionMode = value;
  }
  inline SensitiveDataConfiguration& WithDetectionMode(SensitiveDataDetectionMode value) {
    SetDetectionMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that specifies which PII entity types to detect and how to
   * mask them. If you omit it, Amazon Textract detects all PII entity types
   * (<code>ALL</code>) and masks them with <code>ENTITY_TYPE</code>.</p>
   */
  inline const PIIEntitiesConfiguration& GetPiiEntitiesConfiguration() const { return m_piiEntitiesConfiguration; }
  inline bool PiiEntitiesConfigurationHasBeenSet() const { return m_piiEntitiesConfigurationHasBeenSet; }
  template <typename PiiEntitiesConfigurationT = PIIEntitiesConfiguration>
  void SetPiiEntitiesConfiguration(PiiEntitiesConfigurationT&& value) {
    m_piiEntitiesConfigurationHasBeenSet = true;
    m_piiEntitiesConfiguration = std::forward<PiiEntitiesConfigurationT>(value);
  }
  template <typename PiiEntitiesConfigurationT = PIIEntitiesConfiguration>
  SensitiveDataConfiguration& WithPiiEntitiesConfiguration(PiiEntitiesConfigurationT&& value) {
    SetPiiEntitiesConfiguration(std::forward<PiiEntitiesConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  SensitiveDataDetectionMode m_detectionMode{SensitiveDataDetectionMode::NOT_SET};

  PIIEntitiesConfiguration m_piiEntitiesConfiguration;
  bool m_detectionModeHasBeenSet = false;
  bool m_piiEntitiesConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
