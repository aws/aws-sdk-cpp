﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartMedicalScribeStreamRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TranscribeStreamingService::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

StartMedicalScribeStreamRequest::StartMedicalScribeStreamRequest() : 
    m_sessionIdHasBeenSet(false),
    m_languageCode(MedicalScribeLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_mediaEncoding(MedicalScribeMediaEncoding::NOT_SET),
    m_mediaEncodingHasBeenSet(false),
    m_handler(), m_decoder(Aws::Utils::Event::EventStreamDecoder(&m_handler))
{
    AmazonWebServiceRequest::SetHeadersReceivedEventHandler([this](const Http::HttpRequest*, Http::HttpResponse* response)
    {
        auto& initialResponseHandler = m_handler.GetInitialResponseCallbackEx();
        if (initialResponseHandler) {
            initialResponseHandler(StartMedicalScribeStreamInitialResponse(response->GetHeaders()), Utils::Event::InitialResponseType::ON_RESPONSE);
        }
    });
}

std::shared_ptr<Aws::IOStream> StartMedicalScribeStreamRequest::GetBody() const
{
    return m_inputStream;
}


Aws::Http::HeaderValueCollection StartMedicalScribeStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_EVENTSTREAM_CONTENT_TYPE);
  Aws::StringStream ss;
  if(m_sessionIdHasBeenSet)
  {
    ss << m_sessionId;
    headers.emplace("x-amzn-transcribe-session-id",  ss.str());
    ss.str("");
  }

  if(m_languageCodeHasBeenSet && m_languageCode != MedicalScribeLanguageCode::NOT_SET)
  {
    headers.emplace("x-amzn-transcribe-language-code", MedicalScribeLanguageCodeMapper::GetNameForMedicalScribeLanguageCode(m_languageCode));
  }

  if(m_mediaSampleRateHertzHasBeenSet)
  {
    ss << m_mediaSampleRateHertz;
    headers.emplace("x-amzn-transcribe-sample-rate",  ss.str());
    ss.str("");
  }

  if(m_mediaEncodingHasBeenSet && m_mediaEncoding != MedicalScribeMediaEncoding::NOT_SET)
  {
    headers.emplace("x-amzn-transcribe-media-encoding", MedicalScribeMediaEncodingMapper::GetNameForMedicalScribeMediaEncoding(m_mediaEncoding));
  }

  return headers;

}
