/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {

/**
 * <p>A structure that holds information regarding a detected signature on a
 * page.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/DetectedSignature">AWS
 * API Reference</a></p>
 */
class DetectedSignature {
 public:
  AWS_TEXTRACT_API DetectedSignature() = default;
  AWS_TEXTRACT_API DetectedSignature(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API DetectedSignature& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The page a detected signature was found on.</p>
   */
  inline int64_t GetPage() const { return m_page; }
  inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }
  inline void SetPage(int64_t value) {
    m_pageHasBeenSet = true;
    m_page = value;
  }
  inline DetectedSignature& WithPage(int64_t value) {
    SetPage(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_page{0};
  bool m_pageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
