/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/translate/Translate_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Translate {
namespace Model {

/**
 * <p>The number of documents successfully and unsuccessfully processed during a
 * translation job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/JobDetails">AWS
 * API Reference</a></p>
 */
class JobDetails {
 public:
  AWS_TRANSLATE_API JobDetails() = default;
  AWS_TRANSLATE_API JobDetails(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSLATE_API JobDetails& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSLATE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The number of documents successfully processed during a translation job.</p>
   */
  inline int64_t GetTranslatedDocumentsCount() const { return m_translatedDocumentsCount; }
  inline bool TranslatedDocumentsCountHasBeenSet() const { return m_translatedDocumentsCountHasBeenSet; }
  inline void SetTranslatedDocumentsCount(int64_t value) {
    m_translatedDocumentsCountHasBeenSet = true;
    m_translatedDocumentsCount = value;
  }
  inline JobDetails& WithTranslatedDocumentsCount(int64_t value) {
    SetTranslatedDocumentsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of documents that could not be processed during a translation
   * job.</p>
   */
  inline int64_t GetDocumentsWithErrorsCount() const { return m_documentsWithErrorsCount; }
  inline bool DocumentsWithErrorsCountHasBeenSet() const { return m_documentsWithErrorsCountHasBeenSet; }
  inline void SetDocumentsWithErrorsCount(int64_t value) {
    m_documentsWithErrorsCountHasBeenSet = true;
    m_documentsWithErrorsCount = value;
  }
  inline JobDetails& WithDocumentsWithErrorsCount(int64_t value) {
    SetDocumentsWithErrorsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of documents used as input in a translation job.</p>
   */
  inline int64_t GetInputDocumentsCount() const { return m_inputDocumentsCount; }
  inline bool InputDocumentsCountHasBeenSet() const { return m_inputDocumentsCountHasBeenSet; }
  inline void SetInputDocumentsCount(int64_t value) {
    m_inputDocumentsCountHasBeenSet = true;
    m_inputDocumentsCount = value;
  }
  inline JobDetails& WithInputDocumentsCount(int64_t value) {
    SetInputDocumentsCount(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_translatedDocumentsCount{0};

  int64_t m_documentsWithErrorsCount{0};

  int64_t m_inputDocumentsCount{0};
  bool m_translatedDocumentsCountHasBeenSet = false;
  bool m_documentsWithErrorsCountHasBeenSet = false;
  bool m_inputDocumentsCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Translate
}  // namespace Aws
