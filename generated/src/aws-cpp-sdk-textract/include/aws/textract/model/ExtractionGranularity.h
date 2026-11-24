/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/ExtractionGranularityType.h>

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
 * <p>Specifies the granularity levels at which Amazon Textract extracts content
 * from a document.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExtractionGranularity">AWS
 * API Reference</a></p>
 */
class ExtractionGranularity {
 public:
  AWS_TEXTRACT_API ExtractionGranularity() = default;
  AWS_TEXTRACT_API ExtractionGranularity(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API ExtractionGranularity& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The granularity levels at which Amazon Textract extracts content, from the
   * whole document down to individual lines of text. Each type can appear only
   * once.</p>
   */
  inline const Aws::Vector<ExtractionGranularityType>& GetTypes() const { return m_types; }
  inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
  template <typename TypesT = Aws::Vector<ExtractionGranularityType>>
  void SetTypes(TypesT&& value) {
    m_typesHasBeenSet = true;
    m_types = std::forward<TypesT>(value);
  }
  template <typename TypesT = Aws::Vector<ExtractionGranularityType>>
  ExtractionGranularity& WithTypes(TypesT&& value) {
    SetTypes(std::forward<TypesT>(value));
    return *this;
  }
  inline ExtractionGranularity& AddTypes(ExtractionGranularityType value) {
    m_typesHasBeenSet = true;
    m_types.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ExtractionGranularityType> m_types;
  bool m_typesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
