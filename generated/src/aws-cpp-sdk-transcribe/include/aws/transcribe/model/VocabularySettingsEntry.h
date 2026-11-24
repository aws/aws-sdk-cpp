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
#include <aws/transcribe/model/VocabularyPhrase.h>

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
 * <p>A custom vocabulary for one language. Specify exactly one of
 * <code>VocabularyName</code> or <code>Phrases</code>.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/VocabularySettingsEntry">AWS
 * API Reference</a></p>
 */
class VocabularySettingsEntry {
 public:
  AWS_TRANSCRIBESERVICE_API VocabularySettingsEntry() = default;
  AWS_TRANSCRIBESERVICE_API VocabularySettingsEntry(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API VocabularySettingsEntry& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The language this custom vocabulary applies to, as a base language code (for
   * example, <code>en</code>). Each language can appear in only one entry.</p>
   */
  inline SyncLanguage GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(SyncLanguage value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline VocabularySettingsEntry& WithLanguage(SyncLanguage value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of a custom vocabulary you created. The vocabulary must be in the
   * <code>READY</code> state, and its language must match this entry's
   * <code>Language</code>.</p> <p>Vocabulary names are case sensitive.</p>
   * <p>Include either <code>VocabularyName</code> or <code>Phrases</code> in each
   * entry, but not both.</p>
   */
  inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
  inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
  template <typename VocabularyNameT = Aws::String>
  void SetVocabularyName(VocabularyNameT&& value) {
    m_vocabularyNameHasBeenSet = true;
    m_vocabularyName = std::forward<VocabularyNameT>(value);
  }
  template <typename VocabularyNameT = Aws::String>
  VocabularySettingsEntry& WithVocabularyName(VocabularyNameT&& value) {
    SetVocabularyName(std::forward<VocabularyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Up to 100 phrases to use as a custom vocabulary, provided inline. You don't
   * need to create the vocabulary first.</p> <p>Include either <code>Phrases</code>
   * or <code>VocabularyName</code> in each entry, but not both.</p>
   */
  inline const Aws::Vector<VocabularyPhrase>& GetPhrases() const { return m_phrases; }
  inline bool PhrasesHasBeenSet() const { return m_phrasesHasBeenSet; }
  template <typename PhrasesT = Aws::Vector<VocabularyPhrase>>
  void SetPhrases(PhrasesT&& value) {
    m_phrasesHasBeenSet = true;
    m_phrases = std::forward<PhrasesT>(value);
  }
  template <typename PhrasesT = Aws::Vector<VocabularyPhrase>>
  VocabularySettingsEntry& WithPhrases(PhrasesT&& value) {
    SetPhrases(std::forward<PhrasesT>(value));
    return *this;
  }
  template <typename PhrasesT = VocabularyPhrase>
  VocabularySettingsEntry& AddPhrases(PhrasesT&& value) {
    m_phrasesHasBeenSet = true;
    m_phrases.emplace_back(std::forward<PhrasesT>(value));
    return *this;
  }
  ///@}
 private:
  SyncLanguage m_language{SyncLanguage::NOT_SET};

  Aws::String m_vocabularyName;

  Aws::Vector<VocabularyPhrase> m_phrases;
  bool m_languageHasBeenSet = false;
  bool m_vocabularyNameHasBeenSet = false;
  bool m_phrasesHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
