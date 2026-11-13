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
 * <p>Information about the input document.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/DocumentMetadata">AWS
 * API Reference</a></p>
 */
class DocumentMetadata {
 public:
  AWS_TEXTRACT_API DocumentMetadata() = default;
  AWS_TEXTRACT_API DocumentMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API DocumentMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The number of pages that are detected in the document.</p>
   */
  inline int64_t GetPages() const { return m_pages; }
  inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }
  inline void SetPages(int64_t value) {
    m_pagesHasBeenSet = true;
    m_pages = value;
  }
  inline DocumentMetadata& WithPages(int64_t value) {
    SetPages(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_pages{0};
  bool m_pagesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
