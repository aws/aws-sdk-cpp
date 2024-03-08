/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/Specialty.h>
#include <aws/transcribestreaming/model/LanguageCode.h>
#include <aws/transcribestreaming/model/Type.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/MedicalContentIdentificationType.h>
#include <aws/transcribestreaming/model/MediaEncoding.h>
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
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionInitialResponse();
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides the medical specialty that you specified in your request.</p>
     */
    inline const Specialty& GetSpecialty() const{ return m_specialty; }

    /**
     * <p>Provides the medical specialty that you specified in your request.</p>
     */
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }

    /**
     * <p>Provides the medical specialty that you specified in your request.</p>
     */
    inline void SetSpecialty(const Specialty& value) { m_specialtyHasBeenSet = true; m_specialty = value; }

    /**
     * <p>Provides the medical specialty that you specified in your request.</p>
     */
    inline void SetSpecialty(Specialty&& value) { m_specialtyHasBeenSet = true; m_specialty = std::move(value); }

    /**
     * <p>Provides the medical specialty that you specified in your request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithSpecialty(const Specialty& value) { SetSpecialty(value); return *this;}

    /**
     * <p>Provides the medical specialty that you specified in your request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithSpecialty(Specialty&& value) { SetSpecialty(std::move(value)); return *this;}


    /**
     * <p>Provides the language code that you specified in your request. This must be
     * <code>en-US</code>.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Provides the language code that you specified in your request. This must be
     * <code>en-US</code>.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Provides the language code that you specified in your request. This must be
     * <code>en-US</code>.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Provides the language code that you specified in your request. This must be
     * <code>en-US</code>.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Provides the language code that you specified in your request. This must be
     * <code>en-US</code>.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Provides the language code that you specified in your request. This must be
     * <code>en-US</code>.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Provides the type of audio you specified in your request.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>Provides the type of audio you specified in your request.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Provides the type of audio you specified in your request.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Provides the type of audio you specified in your request.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Provides the type of audio you specified in your request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>Provides the type of audio you specified in your request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithType(Type&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Provides the name of the custom vocabulary that you specified in your
     * request.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your
     * request.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your
     * request.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your
     * request.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your
     * request.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your
     * request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your
     * request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your
     * request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>Provides the identifier for your streaming request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>Provides the identifier for your streaming request.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>Provides the identifier for your streaming request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>Provides the identifier for your streaming request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>Provides the identifier for your streaming request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>Provides the identifier for your streaming request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>Provides the identifier for your streaming request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier for your streaming request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>Shows whether speaker partitioning was enabled for your transcription.</p>
     */
    inline bool GetShowSpeakerLabel() const{ return m_showSpeakerLabel; }

    /**
     * <p>Shows whether speaker partitioning was enabled for your transcription.</p>
     */
    inline bool ShowSpeakerLabelHasBeenSet() const { return m_showSpeakerLabelHasBeenSet; }

    /**
     * <p>Shows whether speaker partitioning was enabled for your transcription.</p>
     */
    inline void SetShowSpeakerLabel(bool value) { m_showSpeakerLabelHasBeenSet = true; m_showSpeakerLabel = value; }

    /**
     * <p>Shows whether speaker partitioning was enabled for your transcription.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithShowSpeakerLabel(bool value) { SetShowSpeakerLabel(value); return *this;}


    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline const MedicalContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline void SetContentIdentificationType(const MedicalContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline void SetContentIdentificationType(MedicalContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithContentIdentificationType(const MedicalContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithContentIdentificationType(MedicalContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Shows whether channel identification was enabled for your transcription.</p>
     */
    inline bool GetEnableChannelIdentification() const{ return m_enableChannelIdentification; }

    /**
     * <p>Shows whether channel identification was enabled for your transcription.</p>
     */
    inline bool EnableChannelIdentificationHasBeenSet() const { return m_enableChannelIdentificationHasBeenSet; }

    /**
     * <p>Shows whether channel identification was enabled for your transcription.</p>
     */
    inline void SetEnableChannelIdentification(bool value) { m_enableChannelIdentificationHasBeenSet = true; m_enableChannelIdentification = value; }

    /**
     * <p>Shows whether channel identification was enabled for your transcription.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithEnableChannelIdentification(bool value) { SetEnableChannelIdentification(value); return *this;}


    /**
     * <p>Provides the sample rate that you specified in your request.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>Provides the sample rate that you specified in your request.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>Provides the sample rate that you specified in your request.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>Provides the sample rate that you specified in your request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>Provides the number of channels that you specified in your request.</p>
     */
    inline int GetNumberOfChannels() const{ return m_numberOfChannels; }

    /**
     * <p>Provides the number of channels that you specified in your request.</p>
     */
    inline bool NumberOfChannelsHasBeenSet() const { return m_numberOfChannelsHasBeenSet; }

    /**
     * <p>Provides the number of channels that you specified in your request.</p>
     */
    inline void SetNumberOfChannels(int value) { m_numberOfChannelsHasBeenSet = true; m_numberOfChannels = value; }

    /**
     * <p>Provides the number of channels that you specified in your request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithNumberOfChannels(int value) { SetNumberOfChannels(value); return *this;}


    /**
     * <p>Provides the media encoding you specified in your request.</p>
     */
    inline const MediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }

    /**
     * <p>Provides the media encoding you specified in your request.</p>
     */
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }

    /**
     * <p>Provides the media encoding you specified in your request.</p>
     */
    inline void SetMediaEncoding(const MediaEncoding& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }

    /**
     * <p>Provides the media encoding you specified in your request.</p>
     */
    inline void SetMediaEncoding(MediaEncoding&& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = std::move(value); }

    /**
     * <p>Provides the media encoding you specified in your request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}

    /**
     * <p>Provides the media encoding you specified in your request.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithMediaEncoding(MediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}


    /**
     * <p>Provides the identifier for your transcription session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>Provides the identifier for your transcription session.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>Provides the identifier for your transcription session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>Provides the identifier for your transcription session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>Provides the identifier for your transcription session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>Provides the identifier for your transcription session.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>Provides the identifier for your transcription session.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier for your transcription session.</p>
     */
    inline StartMedicalStreamTranscriptionInitialResponse& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Specialty m_specialty;
    bool m_specialtyHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    bool m_showSpeakerLabel;
    bool m_showSpeakerLabelHasBeenSet = false;

    MedicalContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;

    bool m_enableChannelIdentification;
    bool m_enableChannelIdentificationHasBeenSet = false;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet = false;

    int m_numberOfChannels;
    bool m_numberOfChannelsHasBeenSet = false;

    MediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
