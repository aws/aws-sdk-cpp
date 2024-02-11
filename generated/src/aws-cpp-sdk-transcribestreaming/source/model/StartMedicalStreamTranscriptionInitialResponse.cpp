/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartMedicalStreamTranscriptionInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
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

StartMedicalStreamTranscriptionInitialResponse::StartMedicalStreamTranscriptionInitialResponse() : 
    m_specialty(Specialty::NOT_SET),
    m_specialtyHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_showSpeakerLabel(false),
    m_showSpeakerLabelHasBeenSet(false),
    m_contentIdentificationType(MedicalContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_enableChannelIdentification(false),
    m_enableChannelIdentificationHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_numberOfChannels(0),
    m_numberOfChannelsHasBeenSet(false),
    m_mediaEncoding(MediaEncoding::NOT_SET),
    m_mediaEncodingHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

StartMedicalStreamTranscriptionInitialResponse::StartMedicalStreamTranscriptionInitialResponse(JsonView jsonValue) : 
    m_specialty(Specialty::NOT_SET),
    m_specialtyHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_showSpeakerLabel(false),
    m_showSpeakerLabelHasBeenSet(false),
    m_contentIdentificationType(MedicalContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_enableChannelIdentification(false),
    m_enableChannelIdentificationHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_numberOfChannels(0),
    m_numberOfChannelsHasBeenSet(false),
    m_mediaEncoding(MediaEncoding::NOT_SET),
    m_mediaEncodingHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
  *this = jsonValue;
}

StartMedicalStreamTranscriptionInitialResponse& StartMedicalStreamTranscriptionInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue StartMedicalStreamTranscriptionInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
