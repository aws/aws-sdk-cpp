/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/SyncLanguageCode.h>
#include <aws/transcribe/model/SyncRedaction.h>

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
 * <p>A word or punctuation mark in your transcript. Labels such as
 * <code>SpeakerLabel</code> and <code>ChannelLabel</code> are present only if you
 * enabled the related feature.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/SyncItem">AWS
 * API Reference</a></p>
 */
class SyncItem {
 public:
  AWS_TRANSCRIBESERVICE_API SyncItem() = default;
  AWS_TRANSCRIBESERVICE_API SyncItem(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API SyncItem& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The position of this item in the transcript, starting at 0.</p>
   */
  inline int64_t GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  inline void SetId(int64_t value) {
    m_idHasBeenSet = true;
    m_id = value;
  }
  inline SyncItem& WithId(int64_t value) {
    SetId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The word or punctuation mark. In <code>RedactedResults</code>, Amazon
   * Transcribe replaces redacted words with <code>[PII]</code>.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  SyncItem& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time, in seconds from the start of your audio, when this item starts.</p>
   */
  inline double GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  inline void SetStartTime(double value) {
    m_startTimeHasBeenSet = true;
    m_startTime = value;
  }
  inline SyncItem& WithStartTime(double value) {
    SetStartTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time, in seconds from the start of your audio, when this item ends.</p>
   */
  inline double GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  inline void SetEndTime(double value) {
    m_endTimeHasBeenSet = true;
    m_endTime = value;
  }
  inline SyncItem& WithEndTime(double value) {
    SetEndTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language of this item, as a locale (for example, <code>en-US</code>).</p>
   */
  inline SyncLanguageCode GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  inline void SetLanguageCode(SyncLanguageCode value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = value;
  }
  inline SyncItem& WithLanguageCode(SyncLanguageCode value) {
    SetLanguageCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audio channel this item came from (<code>ch_0</code> or
   * <code>ch_1</code>). Present if you enabled
   * <code>ChannelIdentification</code>.</p> <p>Item start and end times are measured
   * from the start of the audio, separately for each channel.</p>
   */
  inline const Aws::String& GetChannelLabel() const { return m_channelLabel; }
  inline bool ChannelLabelHasBeenSet() const { return m_channelLabelHasBeenSet; }
  template <typename ChannelLabelT = Aws::String>
  void SetChannelLabel(ChannelLabelT&& value) {
    m_channelLabelHasBeenSet = true;
    m_channelLabel = std::forward<ChannelLabelT>(value);
  }
  template <typename ChannelLabelT = Aws::String>
  SyncItem& WithChannelLabel(ChannelLabelT&& value) {
    SetChannelLabel(std::forward<ChannelLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The speaker of this item (for example, <code>spk_0</code>). Present if you
   * enabled <code>ShowSpeakerLabels</code>.</p>
   */
  inline const Aws::String& GetSpeakerLabel() const { return m_speakerLabel; }
  inline bool SpeakerLabelHasBeenSet() const { return m_speakerLabelHasBeenSet; }
  template <typename SpeakerLabelT = Aws::String>
  void SetSpeakerLabel(SpeakerLabelT&& value) {
    m_speakerLabelHasBeenSet = true;
    m_speakerLabel = std::forward<SpeakerLabelT>(value);
  }
  template <typename SpeakerLabelT = Aws::String>
  SyncItem& WithSpeakerLabel(SpeakerLabelT&& value) {
    SetSpeakerLabel(std::forward<SpeakerLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this item matched a word in your custom vocabulary filter.
   * Present if you included <code>VocabularyFilterSettings</code>.</p>
   */
  inline bool GetVocabularyFilterMatch() const { return m_vocabularyFilterMatch; }
  inline bool VocabularyFilterMatchHasBeenSet() const { return m_vocabularyFilterMatchHasBeenSet; }
  inline void SetVocabularyFilterMatch(bool value) {
    m_vocabularyFilterMatchHasBeenSet = true;
    m_vocabularyFilterMatch = value;
  }
  inline SyncItem& WithVocabularyFilterMatch(bool value) {
    SetVocabularyFilterMatch(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of personally identifiable information (PII) that Amazon Transcribe
   * redacted from this item. Present only on redacted items in
   * <code>RedactedResults</code>.</p>
   */
  inline const Aws::Vector<SyncRedaction>& GetRedactions() const { return m_redactions; }
  inline bool RedactionsHasBeenSet() const { return m_redactionsHasBeenSet; }
  template <typename RedactionsT = Aws::Vector<SyncRedaction>>
  void SetRedactions(RedactionsT&& value) {
    m_redactionsHasBeenSet = true;
    m_redactions = std::forward<RedactionsT>(value);
  }
  template <typename RedactionsT = Aws::Vector<SyncRedaction>>
  SyncItem& WithRedactions(RedactionsT&& value) {
    SetRedactions(std::forward<RedactionsT>(value));
    return *this;
  }
  template <typename RedactionsT = SyncRedaction>
  SyncItem& AddRedactions(RedactionsT&& value) {
    m_redactionsHasBeenSet = true;
    m_redactions.emplace_back(std::forward<RedactionsT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_id{0};

  Aws::String m_content;

  double m_startTime{0.0};

  double m_endTime{0.0};

  SyncLanguageCode m_languageCode{SyncLanguageCode::NOT_SET};

  Aws::String m_channelLabel;

  Aws::String m_speakerLabel;

  bool m_vocabularyFilterMatch{false};

  Aws::Vector<SyncRedaction> m_redactions;
  bool m_idHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_channelLabelHasBeenSet = false;
  bool m_speakerLabelHasBeenSet = false;
  bool m_vocabularyFilterMatchHasBeenSet = false;
  bool m_redactionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
