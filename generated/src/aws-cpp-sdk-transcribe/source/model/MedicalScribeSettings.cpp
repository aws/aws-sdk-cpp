/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/MedicalScribeSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

MedicalScribeSettings::MedicalScribeSettings() : 
    m_showSpeakerLabels(false),
    m_showSpeakerLabelsHasBeenSet(false),
    m_maxSpeakerLabels(0),
    m_maxSpeakerLabelsHasBeenSet(false),
    m_channelIdentification(false),
    m_channelIdentificationHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false)
{
}

MedicalScribeSettings::MedicalScribeSettings(JsonView jsonValue) : 
    m_showSpeakerLabels(false),
    m_showSpeakerLabelsHasBeenSet(false),
    m_maxSpeakerLabels(0),
    m_maxSpeakerLabelsHasBeenSet(false),
    m_channelIdentification(false),
    m_channelIdentificationHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false)
{
  *this = jsonValue;
}

MedicalScribeSettings& MedicalScribeSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShowSpeakerLabels"))
  {
    m_showSpeakerLabels = jsonValue.GetBool("ShowSpeakerLabels");

    m_showSpeakerLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxSpeakerLabels"))
  {
    m_maxSpeakerLabels = jsonValue.GetInteger("MaxSpeakerLabels");

    m_maxSpeakerLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelIdentification"))
  {
    m_channelIdentification = jsonValue.GetBool("ChannelIdentification");

    m_channelIdentificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");

    m_vocabularyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyFilterName"))
  {
    m_vocabularyFilterName = jsonValue.GetString("VocabularyFilterName");

    m_vocabularyFilterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyFilterMethod"))
  {
    m_vocabularyFilterMethod = VocabularyFilterMethodMapper::GetVocabularyFilterMethodForName(jsonValue.GetString("VocabularyFilterMethod"));

    m_vocabularyFilterMethodHasBeenSet = true;
  }

  return *this;
}

JsonValue MedicalScribeSettings::Jsonize() const
{
  JsonValue payload;

  if(m_showSpeakerLabelsHasBeenSet)
  {
   payload.WithBool("ShowSpeakerLabels", m_showSpeakerLabels);

  }

  if(m_maxSpeakerLabelsHasBeenSet)
  {
   payload.WithInteger("MaxSpeakerLabels", m_maxSpeakerLabels);

  }

  if(m_channelIdentificationHasBeenSet)
  {
   payload.WithBool("ChannelIdentification", m_channelIdentification);

  }

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  if(m_vocabularyFilterMethodHasBeenSet)
  {
   payload.WithString("VocabularyFilterMethod", VocabularyFilterMethodMapper::GetNameForVocabularyFilterMethod(m_vocabularyFilterMethod));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
