/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartCallAnalyticsStreamTranscriptionInitialResponse.h>
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

StartCallAnalyticsStreamTranscriptionInitialResponse::StartCallAnalyticsStreamTranscriptionInitialResponse() : 
    m_requestIdHasBeenSet(false),
    m_languageCode(CallAnalyticsLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_mediaEncoding(MediaEncoding::NOT_SET),
    m_mediaEncodingHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false),
    m_languageModelNameHasBeenSet(false),
    m_enablePartialResultsStabilization(false),
    m_enablePartialResultsStabilizationHasBeenSet(false),
    m_partialResultsStability(PartialResultsStability::NOT_SET),
    m_partialResultsStabilityHasBeenSet(false),
    m_contentIdentificationType(ContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_contentRedactionType(ContentRedactionType::NOT_SET),
    m_contentRedactionTypeHasBeenSet(false),
    m_piiEntityTypesHasBeenSet(false)
{
}

StartCallAnalyticsStreamTranscriptionInitialResponse::StartCallAnalyticsStreamTranscriptionInitialResponse(JsonView jsonValue)
  : StartCallAnalyticsStreamTranscriptionInitialResponse()
{
  *this = jsonValue;
}

StartCallAnalyticsStreamTranscriptionInitialResponse& StartCallAnalyticsStreamTranscriptionInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

StartCallAnalyticsStreamTranscriptionInitialResponse::StartCallAnalyticsStreamTranscriptionInitialResponse(const Http::HeaderValueCollection& headers) : StartCallAnalyticsStreamTranscriptionInitialResponse()
{
  const auto& requestIdIter = headers.find("x-amzn-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  const auto& languageCodeIter = headers.find("x-amzn-transcribe-language-code");
  if(languageCodeIter != headers.end())
  {
    m_languageCode = CallAnalyticsLanguageCodeMapper::GetCallAnalyticsLanguageCodeForName(languageCodeIter->second);
  }

  const auto& mediaSampleRateHertzIter = headers.find("x-amzn-transcribe-sample-rate");
  if(mediaSampleRateHertzIter != headers.end())
  {
     m_mediaSampleRateHertz = StringUtils::ConvertToInt32(mediaSampleRateHertzIter->second.c_str());
  }

  const auto& mediaEncodingIter = headers.find("x-amzn-transcribe-media-encoding");
  if(mediaEncodingIter != headers.end())
  {
    m_mediaEncoding = MediaEncodingMapper::GetMediaEncodingForName(mediaEncodingIter->second);
  }

  const auto& vocabularyNameIter = headers.find("x-amzn-transcribe-vocabulary-name");
  if(vocabularyNameIter != headers.end())
  {
    m_vocabularyName = vocabularyNameIter->second;
  }

  const auto& sessionIdIter = headers.find("x-amzn-transcribe-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
  }

  const auto& vocabularyFilterNameIter = headers.find("x-amzn-transcribe-vocabulary-filter-name");
  if(vocabularyFilterNameIter != headers.end())
  {
    m_vocabularyFilterName = vocabularyFilterNameIter->second;
  }

  const auto& vocabularyFilterMethodIter = headers.find("x-amzn-transcribe-vocabulary-filter-method");
  if(vocabularyFilterMethodIter != headers.end())
  {
    m_vocabularyFilterMethod = VocabularyFilterMethodMapper::GetVocabularyFilterMethodForName(vocabularyFilterMethodIter->second);
  }

  const auto& languageModelNameIter = headers.find("x-amzn-transcribe-language-model-name");
  if(languageModelNameIter != headers.end())
  {
    m_languageModelName = languageModelNameIter->second;
  }

  const auto& enablePartialResultsStabilizationIter = headers.find("x-amzn-transcribe-enable-partial-results-stabilization");
  if(enablePartialResultsStabilizationIter != headers.end())
  {
     m_enablePartialResultsStabilization = StringUtils::ConvertToBool(enablePartialResultsStabilizationIter->second.c_str());
  }

  const auto& partialResultsStabilityIter = headers.find("x-amzn-transcribe-partial-results-stability");
  if(partialResultsStabilityIter != headers.end())
  {
    m_partialResultsStability = PartialResultsStabilityMapper::GetPartialResultsStabilityForName(partialResultsStabilityIter->second);
  }

  const auto& contentIdentificationTypeIter = headers.find("x-amzn-transcribe-content-identification-type");
  if(contentIdentificationTypeIter != headers.end())
  {
    m_contentIdentificationType = ContentIdentificationTypeMapper::GetContentIdentificationTypeForName(contentIdentificationTypeIter->second);
  }

  const auto& contentRedactionTypeIter = headers.find("x-amzn-transcribe-content-redaction-type");
  if(contentRedactionTypeIter != headers.end())
  {
    m_contentRedactionType = ContentRedactionTypeMapper::GetContentRedactionTypeForName(contentRedactionTypeIter->second);
  }

  const auto& piiEntityTypesIter = headers.find("x-amzn-transcribe-pii-entity-types");
  if(piiEntityTypesIter != headers.end())
  {
    m_piiEntityTypes = piiEntityTypesIter->second;
  }

}

JsonValue StartCallAnalyticsStreamTranscriptionInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
