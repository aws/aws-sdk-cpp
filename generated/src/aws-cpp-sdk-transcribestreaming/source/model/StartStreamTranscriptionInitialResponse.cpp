/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartStreamTranscriptionInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

StartStreamTranscriptionInitialResponse::StartStreamTranscriptionInitialResponse() : 
    m_vocabularyNamesHasBeenSet(false),
    m_identifyMultipleLanguages(false),
    m_identifyMultipleLanguagesHasBeenSet(false),
    m_languageModelNameHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_mediaEncoding(MediaEncoding::NOT_SET),
    m_mediaEncodingHasBeenSet(false),
    m_partialResultsStability(PartialResultsStability::NOT_SET),
    m_partialResultsStabilityHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_vocabularyFilterNamesHasBeenSet(false),
    m_enablePartialResultsStabilization(false),
    m_enablePartialResultsStabilizationHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_contentRedactionType(ContentRedactionType::NOT_SET),
    m_contentRedactionTypeHasBeenSet(false),
    m_showSpeakerLabel(false),
    m_showSpeakerLabelHasBeenSet(false),
    m_contentIdentificationType(ContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_preferredLanguage(LanguageCode::NOT_SET),
    m_preferredLanguageHasBeenSet(false),
    m_piiEntityTypesHasBeenSet(false),
    m_enableChannelIdentification(false),
    m_enableChannelIdentificationHasBeenSet(false),
    m_numberOfChannels(0),
    m_numberOfChannelsHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

StartStreamTranscriptionInitialResponse::StartStreamTranscriptionInitialResponse(JsonView jsonValue) : 
    m_vocabularyNamesHasBeenSet(false),
    m_identifyMultipleLanguages(false),
    m_identifyMultipleLanguagesHasBeenSet(false),
    m_languageModelNameHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_mediaEncoding(MediaEncoding::NOT_SET),
    m_mediaEncodingHasBeenSet(false),
    m_partialResultsStability(PartialResultsStability::NOT_SET),
    m_partialResultsStabilityHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_vocabularyFilterNamesHasBeenSet(false),
    m_enablePartialResultsStabilization(false),
    m_enablePartialResultsStabilizationHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_contentRedactionType(ContentRedactionType::NOT_SET),
    m_contentRedactionTypeHasBeenSet(false),
    m_showSpeakerLabel(false),
    m_showSpeakerLabelHasBeenSet(false),
    m_contentIdentificationType(ContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_preferredLanguage(LanguageCode::NOT_SET),
    m_preferredLanguageHasBeenSet(false),
    m_piiEntityTypesHasBeenSet(false),
    m_enableChannelIdentification(false),
    m_enableChannelIdentificationHasBeenSet(false),
    m_numberOfChannels(0),
    m_numberOfChannelsHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
  *this = jsonValue;
}

StartStreamTranscriptionInitialResponse& StartStreamTranscriptionInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue StartStreamTranscriptionInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
