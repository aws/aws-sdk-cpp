/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/MediaEncoding.h>
#include <aws/transcribestreaming/model/PartialResultsStability.h>
#include <aws/transcribestreaming/model/CallAnalyticsLanguageCode.h>
#include <aws/transcribestreaming/model/ContentRedactionType.h>
#include <aws/transcribestreaming/model/ContentIdentificationType.h>
#include <aws/transcribestreaming/model/VocabularyFilterMethod.h>
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

  class StartCallAnalyticsStreamTranscriptionInitialResponse
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionInitialResponse();
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides the name of the custom language model that you specified in your
     * Call Analytics request.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * Call Analytics request.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * Call Analytics request.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * Call Analytics request.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * Call Analytics request.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * Call Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * Call Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * Call Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}


    /**
     * <p>Provides the identifier for your Call Analytics streaming request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>Provides the identifier for your Call Analytics streaming request.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>Provides the identifier for your Call Analytics streaming request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>Provides the identifier for your Call Analytics streaming request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>Provides the identifier for your Call Analytics streaming request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>Provides the identifier for your Call Analytics streaming request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>Provides the identifier for your Call Analytics streaming request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier for your Call Analytics streaming request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * Call Analytics request.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * Call Analytics request.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * Call Analytics request.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * Call Analytics request.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * Call Analytics request.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * Call Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * Call Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * Call Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>Provides the sample rate that you specified in your Call Analytics
     * request.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>Provides the sample rate that you specified in your Call Analytics
     * request.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>Provides the sample rate that you specified in your Call Analytics
     * request.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>Provides the sample rate that you specified in your Call Analytics
     * request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>Provides the media encoding you specified in your Call Analytics request.</p>
     */
    inline const MediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }

    /**
     * <p>Provides the media encoding you specified in your Call Analytics request.</p>
     */
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }

    /**
     * <p>Provides the media encoding you specified in your Call Analytics request.</p>
     */
    inline void SetMediaEncoding(const MediaEncoding& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }

    /**
     * <p>Provides the media encoding you specified in your Call Analytics request.</p>
     */
    inline void SetMediaEncoding(MediaEncoding&& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = std::move(value); }

    /**
     * <p>Provides the media encoding you specified in your Call Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}

    /**
     * <p>Provides the media encoding you specified in your Call Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithMediaEncoding(MediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}


    /**
     * <p>Provides the stabilization level used for your transcription.</p>
     */
    inline const PartialResultsStability& GetPartialResultsStability() const{ return m_partialResultsStability; }

    /**
     * <p>Provides the stabilization level used for your transcription.</p>
     */
    inline bool PartialResultsStabilityHasBeenSet() const { return m_partialResultsStabilityHasBeenSet; }

    /**
     * <p>Provides the stabilization level used for your transcription.</p>
     */
    inline void SetPartialResultsStability(const PartialResultsStability& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = value; }

    /**
     * <p>Provides the stabilization level used for your transcription.</p>
     */
    inline void SetPartialResultsStability(PartialResultsStability&& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = std::move(value); }

    /**
     * <p>Provides the stabilization level used for your transcription.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPartialResultsStability(const PartialResultsStability& value) { SetPartialResultsStability(value); return *this;}

    /**
     * <p>Provides the stabilization level used for your transcription.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPartialResultsStability(PartialResultsStability&& value) { SetPartialResultsStability(std::move(value)); return *this;}


    /**
     * <p>Shows whether partial results stabilization was enabled for your Call
     * Analytics transcription.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const{ return m_enablePartialResultsStabilization; }

    /**
     * <p>Shows whether partial results stabilization was enabled for your Call
     * Analytics transcription.</p>
     */
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }

    /**
     * <p>Shows whether partial results stabilization was enabled for your Call
     * Analytics transcription.</p>
     */
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }

    /**
     * <p>Shows whether partial results stabilization was enabled for your Call
     * Analytics transcription.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}


    /**
     * <p>Provides the language code that you specified in your Call Analytics
     * request.</p>
     */
    inline const CallAnalyticsLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Provides the language code that you specified in your Call Analytics
     * request.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Provides the language code that you specified in your Call Analytics
     * request.</p>
     */
    inline void SetLanguageCode(const CallAnalyticsLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Provides the language code that you specified in your Call Analytics
     * request.</p>
     */
    inline void SetLanguageCode(CallAnalyticsLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Provides the language code that you specified in your Call Analytics
     * request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageCode(const CallAnalyticsLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Provides the language code that you specified in your Call Analytics
     * request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageCode(CallAnalyticsLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Provides the name of the custom vocabulary that you specified in your Call
     * Analytics request.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your Call
     * Analytics request.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your Call
     * Analytics request.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your Call
     * Analytics request.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your Call
     * Analytics request.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your Call
     * Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your Call
     * Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your Call
     * Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>Shows whether content redaction was enabled for your Call Analytics
     * transcription.</p>
     */
    inline const ContentRedactionType& GetContentRedactionType() const{ return m_contentRedactionType; }

    /**
     * <p>Shows whether content redaction was enabled for your Call Analytics
     * transcription.</p>
     */
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }

    /**
     * <p>Shows whether content redaction was enabled for your Call Analytics
     * transcription.</p>
     */
    inline void SetContentRedactionType(const ContentRedactionType& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }

    /**
     * <p>Shows whether content redaction was enabled for your Call Analytics
     * transcription.</p>
     */
    inline void SetContentRedactionType(ContentRedactionType&& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = std::move(value); }

    /**
     * <p>Shows whether content redaction was enabled for your Call Analytics
     * transcription.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithContentRedactionType(const ContentRedactionType& value) { SetContentRedactionType(value); return *this;}

    /**
     * <p>Shows whether content redaction was enabled for your Call Analytics
     * transcription.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithContentRedactionType(ContentRedactionType&& value) { SetContentRedactionType(std::move(value)); return *this;}


    /**
     * <p>Shows whether content identification was enabled for your Call Analytics
     * transcription.</p>
     */
    inline const ContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Shows whether content identification was enabled for your Call Analytics
     * transcription.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Shows whether content identification was enabled for your Call Analytics
     * transcription.</p>
     */
    inline void SetContentIdentificationType(const ContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Shows whether content identification was enabled for your Call Analytics
     * transcription.</p>
     */
    inline void SetContentIdentificationType(ContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Shows whether content identification was enabled for your Call Analytics
     * transcription.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithContentIdentificationType(const ContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Shows whether content identification was enabled for your Call Analytics
     * transcription.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithContentIdentificationType(ContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Lists the PII entity types you specified in your Call Analytics request.</p>
     */
    inline const Aws::String& GetPiiEntityTypes() const{ return m_piiEntityTypes; }

    /**
     * <p>Lists the PII entity types you specified in your Call Analytics request.</p>
     */
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }

    /**
     * <p>Lists the PII entity types you specified in your Call Analytics request.</p>
     */
    inline void SetPiiEntityTypes(const Aws::String& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = value; }

    /**
     * <p>Lists the PII entity types you specified in your Call Analytics request.</p>
     */
    inline void SetPiiEntityTypes(Aws::String&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::move(value); }

    /**
     * <p>Lists the PII entity types you specified in your Call Analytics request.</p>
     */
    inline void SetPiiEntityTypes(const char* value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.assign(value); }

    /**
     * <p>Lists the PII entity types you specified in your Call Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPiiEntityTypes(const Aws::String& value) { SetPiiEntityTypes(value); return *this;}

    /**
     * <p>Lists the PII entity types you specified in your Call Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPiiEntityTypes(Aws::String&& value) { SetPiiEntityTypes(std::move(value)); return *this;}

    /**
     * <p>Lists the PII entity types you specified in your Call Analytics request.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPiiEntityTypes(const char* value) { SetPiiEntityTypes(value); return *this;}


    /**
     * <p>Provides the vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>Provides the vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>Provides the vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>Provides the vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>Provides the vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>Provides the vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


    /**
     * <p>Provides the identifier for your Call Analytics transcription session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>Provides the identifier for your Call Analytics transcription session.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>Provides the identifier for your Call Analytics transcription session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>Provides the identifier for your Call Analytics transcription session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>Provides the identifier for your Call Analytics transcription session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>Provides the identifier for your Call Analytics transcription session.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>Provides the identifier for your Call Analytics transcription session.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier for your Call Analytics transcription session.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet = false;

    PartialResultsStability m_partialResultsStability;
    bool m_partialResultsStabilityHasBeenSet = false;

    bool m_enablePartialResultsStabilization;
    bool m_enablePartialResultsStabilizationHasBeenSet = false;

    CallAnalyticsLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    ContentRedactionType m_contentRedactionType;
    bool m_contentRedactionTypeHasBeenSet = false;

    ContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;

    Aws::String m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
