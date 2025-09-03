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
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionInitialResponse() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the identifier for your real-time Call Analytics request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartCallAnalyticsStreamTranscriptionInitialResponse& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the language code that you specified in your Call Analytics
     * request.</p>
     */
    inline CallAnalyticsLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(CallAnalyticsLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageCode(CallAnalyticsLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the sample rate that you specified in your Call Analytics
     * request.</p>
     */
    inline int GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the media encoding you specified in your Call Analytics request.</p>
     */
    inline MediaEncoding GetMediaEncoding() const { return m_mediaEncoding; }
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }
    inline void SetMediaEncoding(MediaEncoding value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithMediaEncoding(MediaEncoding value) { SetMediaEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the custom vocabulary that you specified in your Call
     * Analytics request.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the identifier for your Call Analytics transcription session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    StartCallAnalyticsStreamTranscriptionInitialResponse& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * Call Analytics request.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const { return m_vocabularyFilterName; }
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }
    template<typename VocabularyFilterNameT = Aws::String>
    void SetVocabularyFilterName(VocabularyFilterNameT&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::forward<VocabularyFilterNameT>(value); }
    template<typename VocabularyFilterNameT = Aws::String>
    StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterName(VocabularyFilterNameT&& value) { SetVocabularyFilterName(std::forward<VocabularyFilterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the vocabulary filtering method used in your Call Analytics
     * transcription.</p>
     */
    inline VocabularyFilterMethod GetVocabularyFilterMethod() const { return m_vocabularyFilterMethod; }
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterMethod(VocabularyFilterMethod value) { SetVocabularyFilterMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the custom language model that you specified in your
     * Call Analytics request.</p>
     */
    inline const Aws::String& GetLanguageModelName() const { return m_languageModelName; }
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }
    template<typename LanguageModelNameT = Aws::String>
    void SetLanguageModelName(LanguageModelNameT&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::forward<LanguageModelNameT>(value); }
    template<typename LanguageModelNameT = Aws::String>
    StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageModelName(LanguageModelNameT&& value) { SetLanguageModelName(std::forward<LanguageModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows whether automatic language identification was enabled for your Call
     * Analytics transcription.</p>
     */
    inline bool GetIdentifyLanguage() const { return m_identifyLanguage; }
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the language codes that you specified in your Call Analytics
     * request.</p>
     */
    inline const Aws::String& GetLanguageOptions() const { return m_languageOptions; }
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }
    template<typename LanguageOptionsT = Aws::String>
    void SetLanguageOptions(LanguageOptionsT&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::forward<LanguageOptionsT>(value); }
    template<typename LanguageOptionsT = Aws::String>
    StartCallAnalyticsStreamTranscriptionInitialResponse& WithLanguageOptions(LanguageOptionsT&& value) { SetLanguageOptions(std::forward<LanguageOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the preferred language that you specified in your Call Analytics
     * request.</p>
     */
    inline CallAnalyticsLanguageCode GetPreferredLanguage() const { return m_preferredLanguage; }
    inline bool PreferredLanguageHasBeenSet() const { return m_preferredLanguageHasBeenSet; }
    inline void SetPreferredLanguage(CallAnalyticsLanguageCode value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPreferredLanguage(CallAnalyticsLanguageCode value) { SetPreferredLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the names of the custom vocabularies that you specified in your Call
     * Analytics request.</p>
     */
    inline const Aws::String& GetVocabularyNames() const { return m_vocabularyNames; }
    inline bool VocabularyNamesHasBeenSet() const { return m_vocabularyNamesHasBeenSet; }
    template<typename VocabularyNamesT = Aws::String>
    void SetVocabularyNames(VocabularyNamesT&& value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames = std::forward<VocabularyNamesT>(value); }
    template<typename VocabularyNamesT = Aws::String>
    StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyNames(VocabularyNamesT&& value) { SetVocabularyNames(std::forward<VocabularyNamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the names of the custom vocabulary filters that you specified in
     * your Call Analytics request.</p>
     */
    inline const Aws::String& GetVocabularyFilterNames() const { return m_vocabularyFilterNames; }
    inline bool VocabularyFilterNamesHasBeenSet() const { return m_vocabularyFilterNamesHasBeenSet; }
    template<typename VocabularyFilterNamesT = Aws::String>
    void SetVocabularyFilterNames(VocabularyFilterNamesT&& value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames = std::forward<VocabularyFilterNamesT>(value); }
    template<typename VocabularyFilterNamesT = Aws::String>
    StartCallAnalyticsStreamTranscriptionInitialResponse& WithVocabularyFilterNames(VocabularyFilterNamesT&& value) { SetVocabularyFilterNames(std::forward<VocabularyFilterNamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows whether partial results stabilization was enabled for your Call
     * Analytics transcription.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const { return m_enablePartialResultsStabilization; }
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the stabilization level used for your transcription.</p>
     */
    inline PartialResultsStability GetPartialResultsStability() const { return m_partialResultsStability; }
    inline bool PartialResultsStabilityHasBeenSet() const { return m_partialResultsStabilityHasBeenSet; }
    inline void SetPartialResultsStability(PartialResultsStability value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithPartialResultsStability(PartialResultsStability value) { SetPartialResultsStability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows whether content identification was enabled for your Call Analytics
     * transcription.</p>
     */
    inline ContentIdentificationType GetContentIdentificationType() const { return m_contentIdentificationType; }
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }
    inline void SetContentIdentificationType(ContentIdentificationType value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithContentIdentificationType(ContentIdentificationType value) { SetContentIdentificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows whether content redaction was enabled for your Call Analytics
     * transcription.</p>
     */
    inline ContentRedactionType GetContentRedactionType() const { return m_contentRedactionType; }
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }
    inline void SetContentRedactionType(ContentRedactionType value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }
    inline StartCallAnalyticsStreamTranscriptionInitialResponse& WithContentRedactionType(ContentRedactionType value) { SetContentRedactionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the PII entity types you specified in your Call Analytics request.</p>
     */
    inline const Aws::String& GetPiiEntityTypes() const { return m_piiEntityTypes; }
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }
    template<typename PiiEntityTypesT = Aws::String>
    void SetPiiEntityTypes(PiiEntityTypesT&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::forward<PiiEntityTypesT>(value); }
    template<typename PiiEntityTypesT = Aws::String>
    StartCallAnalyticsStreamTranscriptionInitialResponse& WithPiiEntityTypes(PiiEntityTypesT&& value) { SetPiiEntityTypes(std::forward<PiiEntityTypesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    CallAnalyticsLanguageCode m_languageCode{CallAnalyticsLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz{0};
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaEncoding m_mediaEncoding{MediaEncoding::NOT_SET};
    bool m_mediaEncodingHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod{VocabularyFilterMethod::NOT_SET};
    bool m_vocabularyFilterMethodHasBeenSet = false;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    bool m_identifyLanguage{false};
    bool m_identifyLanguageHasBeenSet = false;

    Aws::String m_languageOptions;
    bool m_languageOptionsHasBeenSet = false;

    CallAnalyticsLanguageCode m_preferredLanguage{CallAnalyticsLanguageCode::NOT_SET};
    bool m_preferredLanguageHasBeenSet = false;

    Aws::String m_vocabularyNames;
    bool m_vocabularyNamesHasBeenSet = false;

    Aws::String m_vocabularyFilterNames;
    bool m_vocabularyFilterNamesHasBeenSet = false;

    bool m_enablePartialResultsStabilization{false};
    bool m_enablePartialResultsStabilizationHasBeenSet = false;

    PartialResultsStability m_partialResultsStability{PartialResultsStability::NOT_SET};
    bool m_partialResultsStabilityHasBeenSet = false;

    ContentIdentificationType m_contentIdentificationType{ContentIdentificationType::NOT_SET};
    bool m_contentIdentificationTypeHasBeenSet = false;

    ContentRedactionType m_contentRedactionType{ContentRedactionType::NOT_SET};
    bool m_contentRedactionTypeHasBeenSet = false;

    Aws::String m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
