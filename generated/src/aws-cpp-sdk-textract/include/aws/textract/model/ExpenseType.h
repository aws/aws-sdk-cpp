/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>

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
 * <p>An object used to store information about the Type detected by Amazon
 * Textract.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExpenseType">AWS
 * API Reference</a></p>
 */
class ExpenseType {
 public:
  AWS_TEXTRACT_API ExpenseType() = default;
  AWS_TEXTRACT_API ExpenseType(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API ExpenseType& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The word or line of text detected by Amazon Textract.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  ExpenseType& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence of accuracy, as a percentage.</p>
   */
  inline double GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(double value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline ExpenseType& WithConfidence(double value) {
    SetConfidence(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  double m_confidence{0.0};
  bool m_textHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
