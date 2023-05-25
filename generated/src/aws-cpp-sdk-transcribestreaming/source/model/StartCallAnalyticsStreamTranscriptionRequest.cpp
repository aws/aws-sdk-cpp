/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartCallAnalyticsStreamTranscriptionRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TranscribeStreamingService::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

StartCallAnalyticsStreamTranscriptionRequest::StartCallAnalyticsStreamTranscriptionRequest() : 
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
    m_piiEntityTypesHasBeenSet(false),
    m_handler(), m_decoder(Aws::Utils::Event::EventStreamDecoder(&m_handler))
{
}

std::shared_ptr<Aws::IOStream> StartCallAnalyticsStreamTranscriptionRequest::GetBody() const
{
    return m_audioStream;
}


Aws::Http::HeaderValueCollection StartCallAnalyticsStreamTranscriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_EVENTSTREAM_CONTENT_TYPE);
  Aws::StringStream ss;
  if(m_languageCodeHasBeenSet)
  {
    headers.emplace("x-amzn-transcribe-language-code", CallAnalyticsLanguageCodeMapper::GetNameForCallAnalyticsLanguageCode(m_languageCode));
  }

  if(m_mediaSampleRateHertzHasBeenSet)
  {
    ss << m_mediaSampleRateHertz;
    headers.emplace("x-amzn-transcribe-sample-rate",  ss.str());
    ss.str("");
  }

  if(m_mediaEncodingHasBeenSet)
  {
    headers.emplace("x-amzn-transcribe-media-encoding", MediaEncodingMapper::GetNameForMediaEncoding(m_mediaEncoding));
  }

  if(m_vocabularyNameHasBeenSet)
  {
    ss << m_vocabularyName;
    headers.emplace("x-amzn-transcribe-vocabulary-name",  ss.str());
    ss.str("");
  }

  if(m_sessionIdHasBeenSet)
  {
    ss << m_sessionId;
    headers.emplace("x-amzn-transcribe-session-id",  ss.str());
    ss.str("");
  }

  if(m_vocabularyFilterNameHasBeenSet)
  {
    ss << m_vocabularyFilterName;
    headers.emplace("x-amzn-transcribe-vocabulary-filter-name",  ss.str());
    ss.str("");
  }

  if(m_vocabularyFilterMethodHasBeenSet)
  {
    headers.emplace("x-amzn-transcribe-vocabulary-filter-method", VocabularyFilterMethodMapper::GetNameForVocabularyFilterMethod(m_vocabularyFilterMethod));
  }

  if(m_languageModelNameHasBeenSet)
  {
    ss << m_languageModelName;
    headers.emplace("x-amzn-transcribe-language-model-name",  ss.str());
    ss.str("");
  }

  if(m_enablePartialResultsStabilizationHasBeenSet)
  {
    ss << std::boolalpha << m_enablePartialResultsStabilization;
    headers.emplace("x-amzn-transcribe-enable-partial-results-stabilization", ss.str());
    ss.str("");
  }

  if(m_partialResultsStabilityHasBeenSet)
  {
    headers.emplace("x-amzn-transcribe-partial-results-stability", PartialResultsStabilityMapper::GetNameForPartialResultsStability(m_partialResultsStability));
  }

  if(m_contentIdentificationTypeHasBeenSet)
  {
    headers.emplace("x-amzn-transcribe-content-identification-type", ContentIdentificationTypeMapper::GetNameForContentIdentificationType(m_contentIdentificationType));
  }

  if(m_contentRedactionTypeHasBeenSet)
  {
    headers.emplace("x-amzn-transcribe-content-redaction-type", ContentRedactionTypeMapper::GetNameForContentRedactionType(m_contentRedactionType));
  }

  if(m_piiEntityTypesHasBeenSet)
  {
    ss << m_piiEntityTypes;
    headers.emplace("x-amzn-transcribe-pii-entity-types",  ss.str());
    ss.str("");
  }

  return headers;

}
