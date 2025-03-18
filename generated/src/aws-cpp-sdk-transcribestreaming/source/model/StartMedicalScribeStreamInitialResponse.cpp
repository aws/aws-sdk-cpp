/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartMedicalScribeStreamInitialResponse.h>
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

StartMedicalScribeStreamInitialResponse::StartMedicalScribeStreamInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

StartMedicalScribeStreamInitialResponse& StartMedicalScribeStreamInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

StartMedicalScribeStreamInitialResponse::StartMedicalScribeStreamInitialResponse(const Http::HeaderValueCollection& headers) : StartMedicalScribeStreamInitialResponse()
{
  const auto& sessionIdIter = headers.find("x-amzn-transcribe-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
    m_sessionIdHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  const auto& languageCodeIter = headers.find("x-amzn-transcribe-language-code");
  if(languageCodeIter != headers.end())
  {
    m_languageCode = MedicalScribeLanguageCodeMapper::GetMedicalScribeLanguageCodeForName(languageCodeIter->second);
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
    m_mediaEncoding = MedicalScribeMediaEncodingMapper::GetMedicalScribeMediaEncodingForName(mediaEncodingIter->second);
    m_mediaEncodingHasBeenSet = true;
  }

}

JsonValue StartMedicalScribeStreamInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
