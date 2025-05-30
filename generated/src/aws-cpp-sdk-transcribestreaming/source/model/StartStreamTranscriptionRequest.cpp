﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartStreamTranscriptionRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TranscribeStreamingService::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

std::shared_ptr<Aws::IOStream> StartStreamTranscriptionRequest::GetBody() const
{
    return m_audioStream;
}


Aws::Http::HeaderValueCollection StartStreamTranscriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_EVENTSTREAM_CONTENT_TYPE);
  Aws::StringStream ss;
  if(m_languageCodeHasBeenSet && m_languageCode != LanguageCode::NOT_SET)
  {
    headers.emplace("x-amzn-transcribe-language-code", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_mediaSampleRateHertzHasBeenSet)
  {
    ss << m_mediaSampleRateHertz;
    headers.emplace("x-amzn-transcribe-sample-rate",  ss.str());
    ss.str("");
  }

  if(m_mediaEncodingHasBeenSet && m_mediaEncoding != MediaEncoding::NOT_SET)
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

  if(m_vocabularyFilterMethodHasBeenSet && m_vocabularyFilterMethod != VocabularyFilterMethod::NOT_SET)
  {
    headers.emplace("x-amzn-transcribe-vocabulary-filter-method", VocabularyFilterMethodMapper::GetNameForVocabularyFilterMethod(m_vocabularyFilterMethod));
  }

  if(m_showSpeakerLabelHasBeenSet)
  {
    ss << std::boolalpha << m_showSpeakerLabel;
    headers.emplace("x-amzn-transcribe-show-speaker-label", ss.str());
    ss.str("");
  }

  if(m_enableChannelIdentificationHasBeenSet)
  {
    ss << std::boolalpha << m_enableChannelIdentification;
    headers.emplace("x-amzn-transcribe-enable-channel-identification", ss.str());
    ss.str("");
  }

  if(m_numberOfChannelsHasBeenSet)
  {
    ss << m_numberOfChannels;
    headers.emplace("x-amzn-transcribe-number-of-channels",  ss.str());
    ss.str("");
  }

  if(m_enablePartialResultsStabilizationHasBeenSet)
  {
    ss << std::boolalpha << m_enablePartialResultsStabilization;
    headers.emplace("x-amzn-transcribe-enable-partial-results-stabilization", ss.str());
    ss.str("");
  }

  if(m_partialResultsStabilityHasBeenSet && m_partialResultsStability != PartialResultsStability::NOT_SET)
  {
    headers.emplace("x-amzn-transcribe-partial-results-stability", PartialResultsStabilityMapper::GetNameForPartialResultsStability(m_partialResultsStability));
  }

  if(m_contentIdentificationTypeHasBeenSet && m_contentIdentificationType != ContentIdentificationType::NOT_SET)
  {
    headers.emplace("x-amzn-transcribe-content-identification-type", ContentIdentificationTypeMapper::GetNameForContentIdentificationType(m_contentIdentificationType));
  }

  if(m_contentRedactionTypeHasBeenSet && m_contentRedactionType != ContentRedactionType::NOT_SET)
  {
    headers.emplace("x-amzn-transcribe-content-redaction-type", ContentRedactionTypeMapper::GetNameForContentRedactionType(m_contentRedactionType));
  }

  if(m_piiEntityTypesHasBeenSet)
  {
    ss << m_piiEntityTypes;
    headers.emplace("x-amzn-transcribe-pii-entity-types",  ss.str());
    ss.str("");
  }

  if(m_languageModelNameHasBeenSet)
  {
    ss << m_languageModelName;
    headers.emplace("x-amzn-transcribe-language-model-name",  ss.str());
    ss.str("");
  }

  if(m_identifyLanguageHasBeenSet)
  {
    ss << std::boolalpha << m_identifyLanguage;
    headers.emplace("x-amzn-transcribe-identify-language", ss.str());
    ss.str("");
  }

  if(m_languageOptionsHasBeenSet)
  {
    ss << m_languageOptions;
    headers.emplace("x-amzn-transcribe-language-options",  ss.str());
    ss.str("");
  }

  if(m_preferredLanguageHasBeenSet && m_preferredLanguage != LanguageCode::NOT_SET)
  {
    headers.emplace("x-amzn-transcribe-preferred-language", LanguageCodeMapper::GetNameForLanguageCode(m_preferredLanguage));
  }

  if(m_identifyMultipleLanguagesHasBeenSet)
  {
    ss << std::boolalpha << m_identifyMultipleLanguages;
    headers.emplace("x-amzn-transcribe-identify-multiple-languages", ss.str());
    ss.str("");
  }

  if(m_vocabularyNamesHasBeenSet)
  {
    ss << m_vocabularyNames;
    headers.emplace("x-amzn-transcribe-vocabulary-names",  ss.str());
    ss.str("");
  }

  if(m_vocabularyFilterNamesHasBeenSet)
  {
    ss << m_vocabularyFilterNames;
    headers.emplace("x-amzn-transcribe-vocabulary-filter-names",  ss.str());
    ss.str("");
  }

  return headers;

}
