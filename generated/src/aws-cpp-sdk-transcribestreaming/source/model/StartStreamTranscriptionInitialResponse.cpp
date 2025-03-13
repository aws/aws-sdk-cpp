/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartStreamTranscriptionInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
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

StartStreamTranscriptionInitialResponse::StartStreamTranscriptionInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

StartStreamTranscriptionInitialResponse& StartStreamTranscriptionInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

StartStreamTranscriptionInitialResponse::StartStreamTranscriptionInitialResponse(const Http::HeaderValueCollection& headers) : StartStreamTranscriptionInitialResponse()
{
  const auto& requestIdIter = headers.find("x-amzn-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  const auto& languageCodeIter = headers.find("x-amzn-transcribe-language-code");
  if(languageCodeIter != headers.end())
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(languageCodeIter->second);
    m_languageCodeHasBeenSet = true;
  }

  const auto& mediaSampleRateHertzIter = headers.find("x-amzn-transcribe-sample-rate");
  if(mediaSampleRateHertzIter != headers.end())
  {
    m_mediaSampleRateHertz = StringUtils::ConvertToInt32(mediaSampleRateHertzIter->second.c_str());
    m_mediaSampleRateHertzHasBeenSet = true;
  }

  const auto& mediaEncodingIter = headers.find("x-amzn-transcribe-media-encoding");
  if(mediaEncodingIter != headers.end())
  {
    m_mediaEncoding = MediaEncodingMapper::GetMediaEncodingForName(mediaEncodingIter->second);
    m_mediaEncodingHasBeenSet = true;
  }

  const auto& vocabularyNameIter = headers.find("x-amzn-transcribe-vocabulary-name");
  if(vocabularyNameIter != headers.end())
  {
    m_vocabularyName = vocabularyNameIter->second;
    m_vocabularyNameHasBeenSet = true;
  }

  const auto& sessionIdIter = headers.find("x-amzn-transcribe-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
    m_sessionIdHasBeenSet = true;
  }

  const auto& vocabularyFilterNameIter = headers.find("x-amzn-transcribe-vocabulary-filter-name");
  if(vocabularyFilterNameIter != headers.end())
  {
    m_vocabularyFilterName = vocabularyFilterNameIter->second;
    m_vocabularyFilterNameHasBeenSet = true;
  }

  const auto& vocabularyFilterMethodIter = headers.find("x-amzn-transcribe-vocabulary-filter-method");
  if(vocabularyFilterMethodIter != headers.end())
  {
    m_vocabularyFilterMethod = VocabularyFilterMethodMapper::GetVocabularyFilterMethodForName(vocabularyFilterMethodIter->second);
    m_vocabularyFilterMethodHasBeenSet = true;
  }

  const auto& showSpeakerLabelIter = headers.find("x-amzn-transcribe-show-speaker-label");
  if(showSpeakerLabelIter != headers.end())
  {
    m_showSpeakerLabel = StringUtils::ConvertToBool(showSpeakerLabelIter->second.c_str());
    m_showSpeakerLabelHasBeenSet = true;
  }

  const auto& enableChannelIdentificationIter = headers.find("x-amzn-transcribe-enable-channel-identification");
  if(enableChannelIdentificationIter != headers.end())
  {
    m_enableChannelIdentification = StringUtils::ConvertToBool(enableChannelIdentificationIter->second.c_str());
    m_enableChannelIdentificationHasBeenSet = true;
  }

  const auto& numberOfChannelsIter = headers.find("x-amzn-transcribe-number-of-channels");
  if(numberOfChannelsIter != headers.end())
  {
    m_numberOfChannels = StringUtils::ConvertToInt32(numberOfChannelsIter->second.c_str());
    m_numberOfChannelsHasBeenSet = true;
  }

  const auto& enablePartialResultsStabilizationIter = headers.find("x-amzn-transcribe-enable-partial-results-stabilization");
  if(enablePartialResultsStabilizationIter != headers.end())
  {
    m_enablePartialResultsStabilization = StringUtils::ConvertToBool(enablePartialResultsStabilizationIter->second.c_str());
    m_enablePartialResultsStabilizationHasBeenSet = true;
  }

  const auto& partialResultsStabilityIter = headers.find("x-amzn-transcribe-partial-results-stability");
  if(partialResultsStabilityIter != headers.end())
  {
    m_partialResultsStability = PartialResultsStabilityMapper::GetPartialResultsStabilityForName(partialResultsStabilityIter->second);
    m_partialResultsStabilityHasBeenSet = true;
  }

  const auto& contentIdentificationTypeIter = headers.find("x-amzn-transcribe-content-identification-type");
  if(contentIdentificationTypeIter != headers.end())
  {
    m_contentIdentificationType = ContentIdentificationTypeMapper::GetContentIdentificationTypeForName(contentIdentificationTypeIter->second);
    m_contentIdentificationTypeHasBeenSet = true;
  }

  const auto& contentRedactionTypeIter = headers.find("x-amzn-transcribe-content-redaction-type");
  if(contentRedactionTypeIter != headers.end())
  {
    m_contentRedactionType = ContentRedactionTypeMapper::GetContentRedactionTypeForName(contentRedactionTypeIter->second);
    m_contentRedactionTypeHasBeenSet = true;
  }

  const auto& piiEntityTypesIter = headers.find("x-amzn-transcribe-pii-entity-types");
  if(piiEntityTypesIter != headers.end())
  {
    m_piiEntityTypes = piiEntityTypesIter->second;
    m_piiEntityTypesHasBeenSet = true;
  }

  const auto& languageModelNameIter = headers.find("x-amzn-transcribe-language-model-name");
  if(languageModelNameIter != headers.end())
  {
    m_languageModelName = languageModelNameIter->second;
    m_languageModelNameHasBeenSet = true;
  }

  const auto& identifyLanguageIter = headers.find("x-amzn-transcribe-identify-language");
  if(identifyLanguageIter != headers.end())
  {
    m_identifyLanguage = StringUtils::ConvertToBool(identifyLanguageIter->second.c_str());
    m_identifyLanguageHasBeenSet = true;
  }

  const auto& languageOptionsIter = headers.find("x-amzn-transcribe-language-options");
  if(languageOptionsIter != headers.end())
  {
    m_languageOptions = languageOptionsIter->second;
    m_languageOptionsHasBeenSet = true;
  }

  const auto& preferredLanguageIter = headers.find("x-amzn-transcribe-preferred-language");
  if(preferredLanguageIter != headers.end())
  {
    m_preferredLanguage = LanguageCodeMapper::GetLanguageCodeForName(preferredLanguageIter->second);
    m_preferredLanguageHasBeenSet = true;
  }

  const auto& identifyMultipleLanguagesIter = headers.find("x-amzn-transcribe-identify-multiple-languages");
  if(identifyMultipleLanguagesIter != headers.end())
  {
    m_identifyMultipleLanguages = StringUtils::ConvertToBool(identifyMultipleLanguagesIter->second.c_str());
    m_identifyMultipleLanguagesHasBeenSet = true;
  }

  const auto& vocabularyNamesIter = headers.find("x-amzn-transcribe-vocabulary-names");
  if(vocabularyNamesIter != headers.end())
  {
    m_vocabularyNames = vocabularyNamesIter->second;
    m_vocabularyNamesHasBeenSet = true;
  }

  const auto& vocabularyFilterNamesIter = headers.find("x-amzn-transcribe-vocabulary-filter-names");
  if(vocabularyFilterNamesIter != headers.end())
  {
    m_vocabularyFilterNames = vocabularyFilterNamesIter->second;
    m_vocabularyFilterNamesHasBeenSet = true;
  }

}

JsonValue StartStreamTranscriptionInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
