/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartMedicalStreamTranscriptionRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TranscribeStreamingService::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

StartMedicalStreamTranscriptionRequest::StartMedicalStreamTranscriptionRequest() : 
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_mediaEncoding(MediaEncoding::NOT_SET),
    m_mediaEncodingHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_specialty(Specialty::NOT_SET),
    m_specialtyHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_showSpeakerLabel(false),
    m_showSpeakerLabelHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_enableChannelIdentification(false),
    m_enableChannelIdentificationHasBeenSet(false),
    m_numberOfChannels(0),
    m_numberOfChannelsHasBeenSet(false),
    m_contentIdentificationType(MedicalContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_handler(), m_decoder(Aws::Utils::Event::EventStreamDecoder(&m_handler))
{
}

std::shared_ptr<Aws::IOStream> StartMedicalStreamTranscriptionRequest::GetBody() const
{
    return m_audioStream;
}


Aws::Http::HeaderValueCollection StartMedicalStreamTranscriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_EVENTSTREAM_CONTENT_TYPE);
  Aws::StringStream ss;
  if(m_languageCodeHasBeenSet)
  {
    headers.emplace("x-amzn-transcribe-language-code", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
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

  if(m_specialtyHasBeenSet)
  {
    headers.emplace("x-amzn-transcribe-specialty", SpecialtyMapper::GetNameForSpecialty(m_specialty));
  }

  if(m_typeHasBeenSet)
  {
    headers.emplace("x-amzn-transcribe-type", TypeMapper::GetNameForType(m_type));
  }

  if(m_showSpeakerLabelHasBeenSet)
  {
    ss << std::boolalpha << m_showSpeakerLabel;
    headers.emplace("x-amzn-transcribe-show-speaker-label", ss.str());
    ss.str("");
  }

  if(m_sessionIdHasBeenSet)
  {
    ss << m_sessionId;
    headers.emplace("x-amzn-transcribe-session-id",  ss.str());
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

  if(m_contentIdentificationTypeHasBeenSet)
  {
    headers.emplace("x-amzn-transcribe-content-identification-type", MedicalContentIdentificationTypeMapper::GetNameForMedicalContentIdentificationType(m_contentIdentificationType));
  }

  return headers;

}
