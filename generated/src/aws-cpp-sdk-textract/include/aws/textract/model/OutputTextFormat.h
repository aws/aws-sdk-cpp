/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/OutputTextFormatType.h>

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
 * <p>Specifies the text formats produced in the extraction output.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/OutputTextFormat">AWS
 * API Reference</a></p>
 */
class OutputTextFormat {
 public:
  AWS_TEXTRACT_API OutputTextFormat() = default;
  AWS_TEXTRACT_API OutputTextFormat(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API OutputTextFormat& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The text formats produced in the extraction output. Each type can appear only
   * once, and <code>CSV</code> can't be the only type.</p>
   */
  inline const Aws::Vector<OutputTextFormatType>& GetTypes() const { return m_types; }
  inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
  template <typename TypesT = Aws::Vector<OutputTextFormatType>>
  void SetTypes(TypesT&& value) {
    m_typesHasBeenSet = true;
    m_types = std::forward<TypesT>(value);
  }
  template <typename TypesT = Aws::Vector<OutputTextFormatType>>
  OutputTextFormat& WithTypes(TypesT&& value) {
    SetTypes(std::forward<TypesT>(value));
    return *this;
  }
  inline OutputTextFormat& AddTypes(OutputTextFormatType value) {
    m_typesHasBeenSet = true;
    m_types.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<OutputTextFormatType> m_types;
  bool m_typesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
