/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/PIIEntityType.h>
#include <aws/textract/model/PIIRedactionMaskMode.h>

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
 * <p>Specifies which personally identifiable information (PII) entity types to
 * detect and how to mask them.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/PIIEntitiesConfiguration">AWS
 * API Reference</a></p>
 */
class PIIEntitiesConfiguration {
 public:
  AWS_TEXTRACT_API PIIEntitiesConfiguration() = default;
  AWS_TEXTRACT_API PIIEntitiesConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API PIIEntitiesConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The list of PII entity types to detect. Each type can appear only once.</p>
   */
  inline const Aws::Vector<PIIEntityType>& GetPiiEntityTypes() const { return m_piiEntityTypes; }
  inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }
  template <typename PiiEntityTypesT = Aws::Vector<PIIEntityType>>
  void SetPiiEntityTypes(PiiEntityTypesT&& value) {
    m_piiEntityTypesHasBeenSet = true;
    m_piiEntityTypes = std::forward<PiiEntityTypesT>(value);
  }
  template <typename PiiEntityTypesT = Aws::Vector<PIIEntityType>>
  PIIEntitiesConfiguration& WithPiiEntityTypes(PiiEntityTypesT&& value) {
    SetPiiEntityTypes(std::forward<PiiEntityTypesT>(value));
    return *this;
  }
  inline PIIEntitiesConfiguration& AddPiiEntityTypes(PIIEntityType value) {
    m_piiEntityTypesHasBeenSet = true;
    m_piiEntityTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How detected PII is masked in the redacted output.</p>
   */
  inline PIIRedactionMaskMode GetRedactionMaskMode() const { return m_redactionMaskMode; }
  inline bool RedactionMaskModeHasBeenSet() const { return m_redactionMaskModeHasBeenSet; }
  inline void SetRedactionMaskMode(PIIRedactionMaskMode value) {
    m_redactionMaskModeHasBeenSet = true;
    m_redactionMaskMode = value;
  }
  inline PIIEntitiesConfiguration& WithRedactionMaskMode(PIIRedactionMaskMode value) {
    SetRedactionMaskMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PIIEntityType> m_piiEntityTypes;

  PIIRedactionMaskMode m_redactionMaskMode{PIIRedactionMaskMode::NOT_SET};
  bool m_piiEntityTypesHasBeenSet = false;
  bool m_redactionMaskModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
