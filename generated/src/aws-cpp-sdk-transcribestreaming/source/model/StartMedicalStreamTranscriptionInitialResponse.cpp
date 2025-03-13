/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartMedicalStreamTranscriptionInitialResponse.h>
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

StartMedicalStreamTranscriptionInitialResponse::StartMedicalStreamTranscriptionInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

StartMedicalStreamTranscriptionInitialResponse& StartMedicalStreamTranscriptionInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

StartMedicalStreamTranscriptionInitialResponse::StartMedicalStreamTranscriptionInitialResponse(const Http::HeaderValueCollection& headers) : StartMedicalStreamTranscriptionInitialResponse()
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

  const auto& specialtyIter = headers.find("x-amzn-transcribe-specialty");
  if(specialtyIter != headers.end())
  {
    m_specialty = SpecialtyMapper::GetSpecialtyForName(specialtyIter->second);
    m_specialtyHasBeenSet = true;
  }

  const auto& typeIter = headers.find("x-amzn-transcribe-type");
  if(typeIter != headers.end())
  {
    m_type = TypeMapper::GetTypeForName(typeIter->second);
    m_typeHasBeenSet = true;
  }

  const auto& showSpeakerLabelIter = headers.find("x-amzn-transcribe-show-speaker-label");
  if(showSpeakerLabelIter != headers.end())
  {
    m_showSpeakerLabel = StringUtils::ConvertToBool(showSpeakerLabelIter->second.c_str());
    m_showSpeakerLabelHasBeenSet = true;
  }

  const auto& sessionIdIter = headers.find("x-amzn-transcribe-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
    m_sessionIdHasBeenSet = true;
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

  const auto& contentIdentificationTypeIter = headers.find("x-amzn-transcribe-content-identification-type");
  if(contentIdentificationTypeIter != headers.end())
  {
    m_contentIdentificationType = MedicalContentIdentificationTypeMapper::GetMedicalContentIdentificationTypeForName(contentIdentificationTypeIter->second);
    m_contentIdentificationTypeHasBeenSet = true;
  }

}

JsonValue StartMedicalStreamTranscriptionInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
