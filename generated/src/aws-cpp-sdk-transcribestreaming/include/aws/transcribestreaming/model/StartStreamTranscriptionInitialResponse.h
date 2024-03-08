/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/MediaEncoding.h>
#include <aws/transcribestreaming/model/PartialResultsStability.h>
#include <aws/transcribestreaming/model/LanguageCode.h>
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

  class StartStreamTranscriptionInitialResponse
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionInitialResponse();
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartStreamTranscriptionInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides the names of the custom vocabularies that you specified in your
     * request.</p>
     */
    inline const Aws::String& GetVocabularyNames() const{ return m_vocabularyNames; }

    /**
     * <p>Provides the names of the custom vocabularies that you specified in your
     * request.</p>
     */
    inline bool VocabularyNamesHasBeenSet() const { return m_vocabularyNamesHasBeenSet; }

    /**
     * <p>Provides the names of the custom vocabularies that you specified in your
     * request.</p>
     */
    inline void SetVocabularyNames(const Aws::String& value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames = value; }

    /**
     * <p>Provides the names of the custom vocabularies that you specified in your
     * request.</p>
     */
    inline void SetVocabularyNames(Aws::String&& value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames = std::move(value); }

    /**
     * <p>Provides the names of the custom vocabularies that you specified in your
     * request.</p>
     */
    inline void SetVocabularyNames(const char* value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames.assign(value); }

    /**
     * <p>Provides the names of the custom vocabularies that you specified in your
     * request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyNames(const Aws::String& value) { SetVocabularyNames(value); return *this;}

    /**
     * <p>Provides the names of the custom vocabularies that you specified in your
     * request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyNames(Aws::String&& value) { SetVocabularyNames(std::move(value)); return *this;}

    /**
     * <p>Provides the names of the custom vocabularies that you specified in your
     * request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyNames(const char* value) { SetVocabularyNames(value); return *this;}


    /**
     * <p>Shows whether automatic multi-language identification was enabled for your
     * transcription.</p>
     */
    inline bool GetIdentifyMultipleLanguages() const{ return m_identifyMultipleLanguages; }

    /**
     * <p>Shows whether automatic multi-language identification was enabled for your
     * transcription.</p>
     */
    inline bool IdentifyMultipleLanguagesHasBeenSet() const { return m_identifyMultipleLanguagesHasBeenSet; }

    /**
     * <p>Shows whether automatic multi-language identification was enabled for your
     * transcription.</p>
     */
    inline void SetIdentifyMultipleLanguages(bool value) { m_identifyMultipleLanguagesHasBeenSet = true; m_identifyMultipleLanguages = value; }

    /**
     * <p>Shows whether automatic multi-language identification was enabled for your
     * transcription.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithIdentifyMultipleLanguages(bool value) { SetIdentifyMultipleLanguages(value); return *this;}


    /**
     * <p>Provides the name of the custom language model that you specified in your
     * request.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * request.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * request.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * request.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * request.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the custom language model that you specified in your
     * request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}


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
    inline StartStreamTranscriptionInitialResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>Provides the identifier for your streaming request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier for your streaming request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * request.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * request.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * request.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * request.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * request.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the custom vocabulary filter that you specified in your
     * request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


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
    inline StartStreamTranscriptionInitialResponse& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>Shows whether automatic language identification was enabled for your
     * transcription.</p>
     */
    inline bool GetIdentifyLanguage() const{ return m_identifyLanguage; }

    /**
     * <p>Shows whether automatic language identification was enabled for your
     * transcription.</p>
     */
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }

    /**
     * <p>Shows whether automatic language identification was enabled for your
     * transcription.</p>
     */
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }

    /**
     * <p>Shows whether automatic language identification was enabled for your
     * transcription.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}


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
    inline StartStreamTranscriptionInitialResponse& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}

    /**
     * <p>Provides the media encoding you specified in your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithMediaEncoding(MediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}


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
    inline StartStreamTranscriptionInitialResponse& WithPartialResultsStability(const PartialResultsStability& value) { SetPartialResultsStability(value); return *this;}

    /**
     * <p>Provides the stabilization level used for your transcription.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithPartialResultsStability(PartialResultsStability&& value) { SetPartialResultsStability(std::move(value)); return *this;}


    /**
     * <p>Provides the language codes that you specified in your request.</p>
     */
    inline const Aws::String& GetLanguageOptions() const{ return m_languageOptions; }

    /**
     * <p>Provides the language codes that you specified in your request.</p>
     */
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }

    /**
     * <p>Provides the language codes that you specified in your request.</p>
     */
    inline void SetLanguageOptions(const Aws::String& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = value; }

    /**
     * <p>Provides the language codes that you specified in your request.</p>
     */
    inline void SetLanguageOptions(Aws::String&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::move(value); }

    /**
     * <p>Provides the language codes that you specified in your request.</p>
     */
    inline void SetLanguageOptions(const char* value) { m_languageOptionsHasBeenSet = true; m_languageOptions.assign(value); }

    /**
     * <p>Provides the language codes that you specified in your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithLanguageOptions(const Aws::String& value) { SetLanguageOptions(value); return *this;}

    /**
     * <p>Provides the language codes that you specified in your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithLanguageOptions(Aws::String&& value) { SetLanguageOptions(std::move(value)); return *this;}

    /**
     * <p>Provides the language codes that you specified in your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithLanguageOptions(const char* value) { SetLanguageOptions(value); return *this;}


    /**
     * <p>Provides the names of the custom vocabulary filters that you specified in
     * your request.</p>
     */
    inline const Aws::String& GetVocabularyFilterNames() const{ return m_vocabularyFilterNames; }

    /**
     * <p>Provides the names of the custom vocabulary filters that you specified in
     * your request.</p>
     */
    inline bool VocabularyFilterNamesHasBeenSet() const { return m_vocabularyFilterNamesHasBeenSet; }

    /**
     * <p>Provides the names of the custom vocabulary filters that you specified in
     * your request.</p>
     */
    inline void SetVocabularyFilterNames(const Aws::String& value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames = value; }

    /**
     * <p>Provides the names of the custom vocabulary filters that you specified in
     * your request.</p>
     */
    inline void SetVocabularyFilterNames(Aws::String&& value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames = std::move(value); }

    /**
     * <p>Provides the names of the custom vocabulary filters that you specified in
     * your request.</p>
     */
    inline void SetVocabularyFilterNames(const char* value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames.assign(value); }

    /**
     * <p>Provides the names of the custom vocabulary filters that you specified in
     * your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyFilterNames(const Aws::String& value) { SetVocabularyFilterNames(value); return *this;}

    /**
     * <p>Provides the names of the custom vocabulary filters that you specified in
     * your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyFilterNames(Aws::String&& value) { SetVocabularyFilterNames(std::move(value)); return *this;}

    /**
     * <p>Provides the names of the custom vocabulary filters that you specified in
     * your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyFilterNames(const char* value) { SetVocabularyFilterNames(value); return *this;}


    /**
     * <p>Shows whether partial results stabilization was enabled for your
     * transcription.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const{ return m_enablePartialResultsStabilization; }

    /**
     * <p>Shows whether partial results stabilization was enabled for your
     * transcription.</p>
     */
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }

    /**
     * <p>Shows whether partial results stabilization was enabled for your
     * transcription.</p>
     */
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }

    /**
     * <p>Shows whether partial results stabilization was enabled for your
     * transcription.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}


    /**
     * <p>Provides the language code that you specified in your request.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Provides the language code that you specified in your request.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Provides the language code that you specified in your request.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Provides the language code that you specified in your request.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Provides the language code that you specified in your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Provides the language code that you specified in your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


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
    inline StartStreamTranscriptionInitialResponse& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your
     * request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the custom vocabulary that you specified in your
     * request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>Shows whether content redaction was enabled for your transcription.</p>
     */
    inline const ContentRedactionType& GetContentRedactionType() const{ return m_contentRedactionType; }

    /**
     * <p>Shows whether content redaction was enabled for your transcription.</p>
     */
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }

    /**
     * <p>Shows whether content redaction was enabled for your transcription.</p>
     */
    inline void SetContentRedactionType(const ContentRedactionType& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }

    /**
     * <p>Shows whether content redaction was enabled for your transcription.</p>
     */
    inline void SetContentRedactionType(ContentRedactionType&& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = std::move(value); }

    /**
     * <p>Shows whether content redaction was enabled for your transcription.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithContentRedactionType(const ContentRedactionType& value) { SetContentRedactionType(value); return *this;}

    /**
     * <p>Shows whether content redaction was enabled for your transcription.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithContentRedactionType(ContentRedactionType&& value) { SetContentRedactionType(std::move(value)); return *this;}


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
    inline StartStreamTranscriptionInitialResponse& WithShowSpeakerLabel(bool value) { SetShowSpeakerLabel(value); return *this;}


    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline const ContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline void SetContentIdentificationType(const ContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline void SetContentIdentificationType(ContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithContentIdentificationType(const ContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Shows whether content identification was enabled for your transcription.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithContentIdentificationType(ContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Provides the preferred language that you specified in your request.</p>
     */
    inline const LanguageCode& GetPreferredLanguage() const{ return m_preferredLanguage; }

    /**
     * <p>Provides the preferred language that you specified in your request.</p>
     */
    inline bool PreferredLanguageHasBeenSet() const { return m_preferredLanguageHasBeenSet; }

    /**
     * <p>Provides the preferred language that you specified in your request.</p>
     */
    inline void SetPreferredLanguage(const LanguageCode& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = value; }

    /**
     * <p>Provides the preferred language that you specified in your request.</p>
     */
    inline void SetPreferredLanguage(LanguageCode&& value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = std::move(value); }

    /**
     * <p>Provides the preferred language that you specified in your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithPreferredLanguage(const LanguageCode& value) { SetPreferredLanguage(value); return *this;}

    /**
     * <p>Provides the preferred language that you specified in your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithPreferredLanguage(LanguageCode&& value) { SetPreferredLanguage(std::move(value)); return *this;}


    /**
     * <p>Lists the PII entity types you specified in your request.</p>
     */
    inline const Aws::String& GetPiiEntityTypes() const{ return m_piiEntityTypes; }

    /**
     * <p>Lists the PII entity types you specified in your request.</p>
     */
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }

    /**
     * <p>Lists the PII entity types you specified in your request.</p>
     */
    inline void SetPiiEntityTypes(const Aws::String& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = value; }

    /**
     * <p>Lists the PII entity types you specified in your request.</p>
     */
    inline void SetPiiEntityTypes(Aws::String&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::move(value); }

    /**
     * <p>Lists the PII entity types you specified in your request.</p>
     */
    inline void SetPiiEntityTypes(const char* value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.assign(value); }

    /**
     * <p>Lists the PII entity types you specified in your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithPiiEntityTypes(const Aws::String& value) { SetPiiEntityTypes(value); return *this;}

    /**
     * <p>Lists the PII entity types you specified in your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithPiiEntityTypes(Aws::String&& value) { SetPiiEntityTypes(std::move(value)); return *this;}

    /**
     * <p>Lists the PII entity types you specified in your request.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithPiiEntityTypes(const char* value) { SetPiiEntityTypes(value); return *this;}


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
    inline StartStreamTranscriptionInitialResponse& WithEnableChannelIdentification(bool value) { SetEnableChannelIdentification(value); return *this;}


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
    inline StartStreamTranscriptionInitialResponse& WithNumberOfChannels(int value) { SetNumberOfChannels(value); return *this;}


    /**
     * <p>Provides the vocabulary filtering method used in your transcription.</p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>Provides the vocabulary filtering method used in your transcription.</p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>Provides the vocabulary filtering method used in your transcription.</p>
     */
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>Provides the vocabulary filtering method used in your transcription.</p>
     */
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>Provides the vocabulary filtering method used in your transcription.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>Provides the vocabulary filtering method used in your transcription.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


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
    inline StartStreamTranscriptionInitialResponse& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>Provides the identifier for your transcription session.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier for your transcription session.</p>
     */
    inline StartStreamTranscriptionInitialResponse& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::String m_vocabularyNames;
    bool m_vocabularyNamesHasBeenSet = false;

    bool m_identifyMultipleLanguages;
    bool m_identifyMultipleLanguagesHasBeenSet = false;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet = false;

    bool m_identifyLanguage;
    bool m_identifyLanguageHasBeenSet = false;

    MediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet = false;

    PartialResultsStability m_partialResultsStability;
    bool m_partialResultsStabilityHasBeenSet = false;

    Aws::String m_languageOptions;
    bool m_languageOptionsHasBeenSet = false;

    Aws::String m_vocabularyFilterNames;
    bool m_vocabularyFilterNamesHasBeenSet = false;

    bool m_enablePartialResultsStabilization;
    bool m_enablePartialResultsStabilizationHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    ContentRedactionType m_contentRedactionType;
    bool m_contentRedactionTypeHasBeenSet = false;

    bool m_showSpeakerLabel;
    bool m_showSpeakerLabelHasBeenSet = false;

    ContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;

    LanguageCode m_preferredLanguage;
    bool m_preferredLanguageHasBeenSet = false;

    Aws::String m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;

    bool m_enableChannelIdentification;
    bool m_enableChannelIdentificationHasBeenSet = false;

    int m_numberOfChannels;
    bool m_numberOfChannelsHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
