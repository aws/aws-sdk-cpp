/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/LanguageCode.h>
#include <aws/transcribestreaming/model/MediaEncoding.h>
#include <aws/transcribestreaming/model/Specialty.h>
#include <aws/transcribestreaming/model/Type.h>
#include <aws/transcribestreaming/model/MedicalContentIdentificationType.h>
#include <aws/core/http/HttpTypes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TranscribeStreamingService
{
namespace Model
{

  class StartMedicalStreamTranscriptionInitialResponse
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionInitialResponse() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the identifier for your streaming request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartMedicalStreamTranscriptionInitialResponse& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the language code that you specified in your request. This must be
     * <code>en-US</code>.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline StartMedicalStreamTranscriptionInitialResponse& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the sample rate that you specified in your request.</p>
     */
    inline int GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline StartMedicalStreamTranscriptionInitialResponse& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the media encoding you specified in your request.</p>
     */
    inline MediaEncoding GetMediaEncoding() const { return m_mediaEncoding; }
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }
    inline void SetMediaEncoding(MediaEncoding value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }
    inline StartMedicalStreamTranscriptionInitialResponse& WithMediaEncoding(MediaEncoding value) { SetMediaEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the custom vocabulary that you specified in your
     * request.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    StartMedicalStreamTranscriptionInitialResponse& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the medical specialty that you specified in your request.</p>
     */
    inline Specialty GetSpecialty() const { return m_specialty; }
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }
    inline void SetSpecialty(Specialty value) { m_specialtyHasBeenSet = true; m_specialty = value; }
    inline StartMedicalStreamTranscriptionInitialResponse& WithSpecialty(Specialty value) { SetSpecialty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the type of audio you specified in your request.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline StartMedicalStreamTranscriptionInitialResponse& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows whether speaker partitioning was enabled for your transcription.</p>
     */
    inline bool GetShowSpeakerLabel() const { return m_showSpeakerLabel; }
    inline bool ShowSpeakerLabelHasBeenSet() const { return m_showSpeakerLabelHasBeenSet; }
    inline void SetShowSpeakerLabel(bool value) { m_showSpeakerLabelHasBeenSet = true; m_showSpeakerLabel = value; }
    inline StartMedicalStreamTranscriptionInitialResponse& WithShowSpeakerLabel(bool value) { SetShowSpeakerLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the identifier for your transcription session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    StartMedicalStreamTranscriptionInitialResponse& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows whether channel identification was enabled for your transcription.</p>
     */
    inline bool GetEnableChannelIdentification() const { return m_enableChannelIdentification; }
    inline bool EnableChannelIdentificationHasBeenSet() const { return m_enableChannelIdentificationHasBeenSet; }
    inline void SetEnableChannelIdentification(bool value) { m_enableChannelIdentificationHasBeenSet = true; m_enableChannelIdentification = value; }
    inline StartMedicalStreamTranscriptionInitialResponse& WithEnableChannelIdentification(bool value) { SetEnableChannelIdentification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the number of channels that you specified in your request.</p>
     */
    inline int GetNumberOfChannels() const { return m_numberOfChannels; }
    inline bool NumberOfChannelsHasBeenSet() const { return m_numberOfChannelsHasBeenSet; }
    inline void SetNumberOfChannels(int value) { m_numberOfChannelsHasBeenSet = true; m_numberOfChannels = value; }
    inline StartMedicalStreamTranscriptionInitialResponse& WithNumberOfChannels(int value) { SetNumberOfChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline MedicalContentIdentificationType GetContentIdentificationType() const { return m_contentIdentificationType; }
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }
    inline void SetContentIdentificationType(MedicalContentIdentificationType value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }
    inline StartMedicalStreamTranscriptionInitialResponse& WithContentIdentificationType(MedicalContentIdentificationType value) { SetContentIdentificationType(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz{0};
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaEncoding m_mediaEncoding{MediaEncoding::NOT_SET};
    bool m_mediaEncodingHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Specialty m_specialty{Specialty::NOT_SET};
    bool m_specialtyHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    bool m_showSpeakerLabel{false};
    bool m_showSpeakerLabelHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    bool m_enableChannelIdentification{false};
    bool m_enableChannelIdentificationHasBeenSet = false;

    int m_numberOfChannels{0};
    bool m_numberOfChannelsHasBeenSet = false;

    MedicalContentIdentificationType m_contentIdentificationType{MedicalContentIdentificationType::NOT_SET};
    bool m_contentIdentificationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
