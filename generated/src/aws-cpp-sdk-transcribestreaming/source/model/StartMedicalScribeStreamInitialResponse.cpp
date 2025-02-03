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

StartMedicalScribeStreamInitialResponse::StartMedicalScribeStreamInitialResponse() : 
    m_sessionIdHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_languageCode(MedicalScribeLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_mediaEncoding(MedicalScribeMediaEncoding::NOT_SET),
    m_mediaEncodingHasBeenSet(false)
{
}

StartMedicalScribeStreamInitialResponse::StartMedicalScribeStreamInitialResponse(JsonView jsonValue)
  : StartMedicalScribeStreamInitialResponse()
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
  }

  const auto& requestIdIter = headers.find("x-amzn-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  const auto& languageCodeIter = headers.find("x-amzn-transcribe-language-code");
  if(languageCodeIter != headers.end())
  {
    m_languageCode = MedicalScribeLanguageCodeMapper::GetMedicalScribeLanguageCodeForName(languageCodeIter->second);
  }

  const auto& mediaSampleRateHertzIter = headers.find("x-amzn-transcribe-sample-rate");
  if(mediaSampleRateHertzIter != headers.end())
  {
     m_mediaSampleRateHertz = StringUtils::ConvertToInt32(mediaSampleRateHertzIter->second.c_str());
  }

  const auto& mediaEncodingIter = headers.find("x-amzn-transcribe-media-encoding");
  if(mediaEncodingIter != headers.end())
  {
    m_mediaEncoding = MedicalScribeMediaEncodingMapper::GetMedicalScribeMediaEncodingForName(mediaEncodingIter->second);
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
