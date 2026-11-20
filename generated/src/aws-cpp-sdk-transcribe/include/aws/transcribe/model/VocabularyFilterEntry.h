/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/SyncLanguage.h>

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
 * <p>A custom vocabulary filter for one language. Specify exactly one of
 * <code>VocabularyFilterName</code> or <code>Words</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/VocabularyFilterEntry">AWS
 * API Reference</a></p>
 */
class VocabularyFilterEntry {
 public:
  AWS_TRANSCRIBESERVICE_API VocabularyFilterEntry() = default;
  AWS_TRANSCRIBESERVICE_API VocabularyFilterEntry(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API VocabularyFilterEntry& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The language this custom vocabulary filter applies to, as a base language
   * code (for example, <code>en</code>). Each language can appear in only one
   * entry.</p>
   */
  inline SyncLanguage GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(SyncLanguage value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline VocabularyFilterEntry& WithLanguage(SyncLanguage value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of a custom vocabulary filter you created. The filter's language
   * must match this entry's <code>Language</code>.</p> <p>Vocabulary filter names
   * are case sensitive.</p> <p>Include either <code>VocabularyFilterName</code> or
   * <code>Words</code> in each entry, but not both.</p>
   */
  inline const Aws::String& GetVocabularyFilterName() const { return m_vocabularyFilterName; }
  inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }
  template <typename VocabularyFilterNameT = Aws::String>
  void SetVocabularyFilterName(VocabularyFilterNameT&& value) {
    m_vocabularyFilterNameHasBeenSet = true;
    m_vocabularyFilterName = std::forward<VocabularyFilterNameT>(value);
  }
  template <typename VocabularyFilterNameT = Aws::String>
  VocabularyFilterEntry& WithVocabularyFilterName(VocabularyFilterNameT&& value) {
    SetVocabularyFilterName(std::forward<VocabularyFilterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The words to filter, provided inline. You don't need to create the vocabulary
   * filter first.</p> <p>Include either <code>Words</code> or
   * <code>VocabularyFilterName</code> in each entry, but not both.</p>
   */
  inline const Aws::Vector<Aws::String>& GetWords() const { return m_words; }
  inline bool WordsHasBeenSet() const { return m_wordsHasBeenSet; }
  template <typename WordsT = Aws::Vector<Aws::String>>
  void SetWords(WordsT&& value) {
    m_wordsHasBeenSet = true;
    m_words = std::forward<WordsT>(value);
  }
  template <typename WordsT = Aws::Vector<Aws::String>>
  VocabularyFilterEntry& WithWords(WordsT&& value) {
    SetWords(std::forward<WordsT>(value));
    return *this;
  }
  template <typename WordsT = Aws::String>
  VocabularyFilterEntry& AddWords(WordsT&& value) {
    m_wordsHasBeenSet = true;
    m_words.emplace_back(std::forward<WordsT>(value));
    return *this;
  }
  ///@}
 private:
  SyncLanguage m_language{SyncLanguage::NOT_SET};

  Aws::String m_vocabularyFilterName;

  Aws::Vector<Aws::String> m_words;
  bool m_languageHasBeenSet = false;
  bool m_vocabularyFilterNameHasBeenSet = false;
  bool m_wordsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
