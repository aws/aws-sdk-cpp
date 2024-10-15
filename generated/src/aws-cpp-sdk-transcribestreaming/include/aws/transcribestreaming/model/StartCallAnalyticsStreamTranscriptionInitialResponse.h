/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/CallAnalyticsLanguageCode.h>
#include <aws/transcribestreaming/model/MediaEncoding.h>
#include <aws/transcribestreaming/model/VocabularyFilterMethod.h>
#include <aws/transcribestreaming/model/PartialResultsStability.h>
#include <aws/transcribestreaming/model/ContentIdentificationType.h>
#include <aws/transcribestreaming/model/ContentRedactionType.h>
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

  class StartCallAnalyticsStreamTranscriptionInitialResponse
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionInitialResponse();
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the identifier for your real-time Call Analytics request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the language code that you specified in your Call Analytics
     * request.</p>
     */
    inline const CallAnalyticsLanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const CallAnalyticsLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(CallAnalyticsLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageCode(const CallAnalyticsLanguageCode& value) { SetLanguageCode(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageCode(CallAnalyticsLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the sample rate that you specified in your Call Analytics
     * request.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the media encoding you specified in your Call Analytics request.</p>
     */
    inline const MediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }
    inline void SetMediaEncoding(const MediaEncoding& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }
    inline void SetMediaEncoding(MediaEncoding&& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = std::move(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithMediaEncoding(MediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the custom vocabulary that you specified in your Call
     * Analytics request.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the identifier for your Call Analytics transcription session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * Call Analytics request.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the custom language model that you specified in your
     * Call Analytics request.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows whether partial results stabilization was enabled for your Call
     * Analytics transcription.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const{ return m_enablePartialResultsStabilization; }
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the stabilization level used for your transcription.</p>
     */
    inline const PartialResultsStability& GetPartialResultsStability() const{ return m_partialResultsStability; }
    inline bool PartialResultsStabilityHasBeenSet() const { return m_partialResultsStabilityHasBeenSet; }
    inline void SetPartialResultsStability(const PartialResultsStability& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = value; }
    inline void SetPartialResultsStability(PartialResultsStability&& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = std::move(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPartialResultsStability(const PartialResultsStability& value) { SetPartialResultsStability(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPartialResultsStability(PartialResultsStability&& value) { SetPartialResultsStability(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows whether content identification was enabled for your Call Analytics
     * transcription.</p>
     */
    inline const ContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }
    inline void SetContentIdentificationType(const ContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }
    inline void SetContentIdentificationType(ContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithContentIdentificationType(const ContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithContentIdentificationType(ContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows whether content redaction was enabled for your Call Analytics
     * transcription.</p>
     */
    inline const ContentRedactionType& GetContentRedactionType() const{ return m_contentRedactionType; }
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }
    inline void SetContentRedactionType(const ContentRedactionType& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }
    inline void SetContentRedactionType(ContentRedactionType&& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = std::move(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithContentRedactionType(const ContentRedactionType& value) { SetContentRedactionType(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithContentRedactionType(ContentRedactionType&& value) { SetContentRedactionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the PII entity types you specified in your Call Analytics request.</p>
     */
    inline const Aws::String& GetPiiEntityTypes() const{ return m_piiEntityTypes; }
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }
    inline void SetPiiEntityTypes(const Aws::String& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = value; }
    inline void SetPiiEntityTypes(Aws::String&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::move(value); }
    inline void SetPiiEntityTypes(const char* value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.assign(value); }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPiiEntityTypes(const Aws::String& value) { SetPiiEntityTypes(value); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPiiEntityTypes(Aws::String&& value) { SetPiiEntityTypes(std::move(value)); return *this;}
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPiiEntityTypes(const char* value) { SetPiiEntityTypes(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    CallAnalyticsLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet = false;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    bool m_enablePartialResultsStabilization;
    bool m_enablePartialResultsStabilizationHasBeenSet = false;

    PartialResultsStability m_partialResultsStability;
    bool m_partialResultsStabilityHasBeenSet = false;

    ContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;

    ContentRedactionType m_contentRedactionType;
    bool m_contentRedactionTypeHasBeenSet = false;

    Aws::String m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
