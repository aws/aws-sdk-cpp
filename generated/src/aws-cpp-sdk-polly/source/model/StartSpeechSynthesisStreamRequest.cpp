/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/polly/model/StartSpeechSynthesisStreamRequest.h>

#include <numeric>
#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

std::shared_ptr<Aws::IOStream> StartSpeechSynthesisStreamRequest::GetBody() const { return m_actionStream; }

Aws::Http::HeaderValueCollection StartSpeechSynthesisStreamRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_EVENTSTREAM_CONTENT_TYPE);
  Aws::StringStream ss;
  if (m_engineHasBeenSet && m_engine != Engine::NOT_SET) {
    headers.emplace("x-amzn-engine", EngineMapper::GetNameForEngine(m_engine));
  }

  if (m_languageCodeHasBeenSet && m_languageCode != LanguageCode::NOT_SET) {
    headers.emplace("x-amzn-languagecode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if (m_lexiconNamesHasBeenSet) {
    headers.emplace("x-amzn-lexiconnames", std::accumulate(std::begin(m_lexiconNames), std::end(m_lexiconNames), Aws::String{},
                                                           [](const Aws::String &acc, const Aws::String &item) -> Aws::String {
                                                             const auto headerValue = item;
                                                             return acc.empty() ? headerValue : acc + "," + headerValue;
                                                           }));
  }

  if (m_outputFormatHasBeenSet && m_outputFormat != OutputFormat::NOT_SET) {
    headers.emplace("x-amzn-outputformat", OutputFormatMapper::GetNameForOutputFormat(m_outputFormat));
  }

  if (m_sampleRateHasBeenSet) {
    ss << m_sampleRate;
    headers.emplace("x-amzn-samplerate", ss.str());
    ss.str("");
  }

  if (m_voiceIdHasBeenSet && m_voiceId != VoiceId::NOT_SET) {
    headers.emplace("x-amzn-voiceid", VoiceIdMapper::GetNameForVoiceId(m_voiceId));
  }

  return headers;
}
