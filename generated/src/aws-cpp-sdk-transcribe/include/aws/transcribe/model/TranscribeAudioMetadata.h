/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/MediaFormat.h>
#include <aws/transcribe/model/SyncLanguageCode.h>
#include <aws/transcribe/model/SyncLanguageCodeItem.h>

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
 * <p>Information about your audio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscribeAudioMetadata">AWS
 * API Reference</a></p>
 */
class TranscribeAudioMetadata {
 public:
  AWS_TRANSCRIBESERVICE_API TranscribeAudioMetadata() = default;
  AWS_TRANSCRIBESERVICE_API TranscribeAudioMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API TranscribeAudioMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TRANSCRIBESERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The language of your transcript, as a locale (for example,
   * <code>en-US</code>). Present if you used <code>LanguageDetectionMode</code>.</p>
   */
  inline SyncLanguageCode GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  inline void SetLanguageCode(SyncLanguageCode value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = value;
  }
  inline TranscribeAudioMetadata& WithLanguageCode(SyncLanguageCode value) {
    SetLanguageCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language identified in your audio, and how long it's spoken. Present if
   * you used <code>LanguageDetectionMode</code>.</p>
   */
  inline const Aws::Vector<SyncLanguageCodeItem>& GetLanguageCodes() const { return m_languageCodes; }
  inline bool LanguageCodesHasBeenSet() const { return m_languageCodesHasBeenSet; }
  template <typename LanguageCodesT = Aws::Vector<SyncLanguageCodeItem>>
  void SetLanguageCodes(LanguageCodesT&& value) {
    m_languageCodesHasBeenSet = true;
    m_languageCodes = std::forward<LanguageCodesT>(value);
  }
  template <typename LanguageCodesT = Aws::Vector<SyncLanguageCodeItem>>
  TranscribeAudioMetadata& WithLanguageCodes(LanguageCodesT&& value) {
    SetLanguageCodes(std::forward<LanguageCodesT>(value));
    return *this;
  }
  template <typename LanguageCodesT = SyncLanguageCodeItem>
  TranscribeAudioMetadata& AddLanguageCodes(LanguageCodesT&& value) {
    m_languageCodesHasBeenSet = true;
    m_languageCodes.emplace_back(std::forward<LanguageCodesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of your audio, as detected by Amazon Transcribe.</p>
   */
  inline MediaFormat GetMediaFormat() const { return m_mediaFormat; }
  inline bool MediaFormatHasBeenSet() const { return m_mediaFormatHasBeenSet; }
  inline void SetMediaFormat(MediaFormat value) {
    m_mediaFormatHasBeenSet = true;
    m_mediaFormat = value;
  }
  inline TranscribeAudioMetadata& WithMediaFormat(MediaFormat value) {
    SetMediaFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sample rate of your audio, in hertz, as detected by Amazon
   * Transcribe.</p>
   */
  inline int64_t GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
  inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
  inline void SetMediaSampleRateHertz(int64_t value) {
    m_mediaSampleRateHertzHasBeenSet = true;
    m_mediaSampleRateHertz = value;
  }
  inline TranscribeAudioMetadata& WithMediaSampleRateHertz(int64_t value) {
    SetMediaSampleRateHertz(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of speakers identified in your audio. Present if you enabled
   * <code>ShowSpeakerLabels</code>.</p>
   */
  inline int64_t GetSpeakersCount() const { return m_speakersCount; }
  inline bool SpeakersCountHasBeenSet() const { return m_speakersCountHasBeenSet; }
  inline void SetSpeakersCount(int64_t value) {
    m_speakersCountHasBeenSet = true;
    m_speakersCount = value;
  }
  inline TranscribeAudioMetadata& WithSpeakersCount(int64_t value) {
    SetSpeakersCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of audio channels in your media. Present if you enabled
   * <code>ChannelIdentification</code>.</p>
   */
  inline int64_t GetNumberOfChannels() const { return m_numberOfChannels; }
  inline bool NumberOfChannelsHasBeenSet() const { return m_numberOfChannelsHasBeenSet; }
  inline void SetNumberOfChannels(int64_t value) {
    m_numberOfChannelsHasBeenSet = true;
    m_numberOfChannels = value;
  }
  inline TranscribeAudioMetadata& WithNumberOfChannels(int64_t value) {
    SetNumberOfChannels(value);
    return *this;
  }
  ///@}
 private:
  SyncLanguageCode m_languageCode{SyncLanguageCode::NOT_SET};

  Aws::Vector<SyncLanguageCodeItem> m_languageCodes;

  MediaFormat m_mediaFormat{MediaFormat::NOT_SET};

  int64_t m_mediaSampleRateHertz{0};

  int64_t m_speakersCount{0};

  int64_t m_numberOfChannels{0};
  bool m_languageCodeHasBeenSet = false;
  bool m_languageCodesHasBeenSet = false;
  bool m_mediaFormatHasBeenSet = false;
  bool m_mediaSampleRateHertzHasBeenSet = false;
  bool m_speakersCountHasBeenSet = false;
  bool m_numberOfChannelsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
