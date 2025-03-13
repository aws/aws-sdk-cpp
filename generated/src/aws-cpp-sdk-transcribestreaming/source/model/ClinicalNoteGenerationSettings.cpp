/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/ClinicalNoteGenerationSettings.h>
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

ClinicalNoteGenerationSettings::ClinicalNoteGenerationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ClinicalNoteGenerationSettings& ClinicalNoteGenerationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputBucketName"))
  {
    m_outputBucketName = jsonValue.GetString("OutputBucketName");
    m_outputBucketNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NoteTemplate"))
  {
    m_noteTemplate = MedicalScribeNoteTemplateMapper::GetMedicalScribeNoteTemplateForName(jsonValue.GetString("NoteTemplate"));
    m_noteTemplateHasBeenSet = true;
  }
  return *this;
}

JsonValue ClinicalNoteGenerationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_outputBucketNameHasBeenSet)
  {
   payload.WithString("OutputBucketName", m_outputBucketName);

  }

  if(m_noteTemplateHasBeenSet)
  {
   payload.WithString("NoteTemplate", MedicalScribeNoteTemplateMapper::GetNameForMedicalScribeNoteTemplate(m_noteTemplate));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
