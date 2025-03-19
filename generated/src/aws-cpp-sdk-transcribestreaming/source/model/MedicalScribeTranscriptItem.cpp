/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeTranscriptItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

MedicalScribeTranscriptItem::MedicalScribeTranscriptItem(JsonView jsonValue)
{
  *this = jsonValue;
}

MedicalScribeTranscriptItem& MedicalScribeTranscriptItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BeginAudioTime"))
  {
    m_beginAudioTime = jsonValue.GetDouble("BeginAudioTime");
    m_beginAudioTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndAudioTime"))
  {
    m_endAudioTime = jsonValue.GetDouble("EndAudioTime");
    m_endAudioTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = MedicalScribeTranscriptItemTypeMapper::GetMedicalScribeTranscriptItemTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");
    m_confidenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VocabularyFilterMatch"))
  {
    m_vocabularyFilterMatch = jsonValue.GetBool("VocabularyFilterMatch");
    m_vocabularyFilterMatchHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeTranscriptItem::Jsonize() const
{
  JsonValue payload;

  if(m_beginAudioTimeHasBeenSet)
  {
   payload.WithDouble("BeginAudioTime", m_beginAudioTime);

  }

  if(m_endAudioTimeHasBeenSet)
  {
   payload.WithDouble("EndAudioTime", m_endAudioTime);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", MedicalScribeTranscriptItemTypeMapper::GetNameForMedicalScribeTranscriptItemType(m_type));
  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_vocabularyFilterMatchHasBeenSet)
  {
   payload.WithBool("VocabularyFilterMatch", m_vocabularyFilterMatch);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
