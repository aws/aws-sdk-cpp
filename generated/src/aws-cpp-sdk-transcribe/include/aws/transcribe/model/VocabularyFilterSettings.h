/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/VocabularyFilterEntry.h>
#include <aws/transcribe/model/VocabularyFilterMethod.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace TranscribeService {
namespace Model {

/**
 * <p>Custom vocabulary filters to apply to your transcript, and how to apply
 * them.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/VocabularyFilterSettings">AWS
 * API Reference</a></p>
 */
class VocabularyFilterSettings {
 public:
  AWS_TRANSCRIBESERVICE_API VocabularyFilterSettings() = default;
  AWS_TRANSCRIBESERVICE_API VocabularyFilterSettings(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API VocabularyFilterSettings& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Specify how you want your custom vocabulary filter applied to your
   * transcript.</p> <p>To replace words with <code>***</code>, choose
   * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
   * flag words without changing them, choose <code>tag</code>.</p>
   */
  inline VocabularyFilterMethod GetVocabularyFilterMethod() const { return m_vocabularyFilterMethod; }
  inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }
  inline void SetVocabularyFilterMethod(VocabularyFilterMethod value) {
    m_vocabularyFilterMethodHasBeenSet = true;
    m_vocabularyFilterMethod = value;
  }
  inline VocabularyFilterSettings& WithVocabularyFilterMethod(VocabularyFilterMethod value) {
    SetVocabularyFilterMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom vocabulary filters, with one entry per language. In each entry, you
   * can reference a custom vocabulary filter you created or provide words inline.
   * All entries must use the same type, either all by name or all inline.</p> <p>If
   * you specify <code>Language</code>, include exactly one entry, and its
   * <code>Language</code> must match. If you use <code>LanguageDetectionMode</code>,
   * you can include one entry for each language in <code>LanguageOptions</code>.</p>
   */
  inline const Aws::Vector<VocabularyFilterEntry>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<VocabularyFilterEntry>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<VocabularyFilterEntry>>
  VocabularyFilterSettings& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = VocabularyFilterEntry>
  VocabularyFilterSettings& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  VocabularyFilterMethod m_vocabularyFilterMethod{VocabularyFilterMethod::NOT_SET};

  Aws::Vector<VocabularyFilterEntry> m_filters;
  bool m_vocabularyFilterMethodHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
