/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ClinicalNoteGenerationSettings.h>
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

ClinicalNoteGenerationSettings::ClinicalNoteGenerationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ClinicalNoteGenerationSettings& ClinicalNoteGenerationSettings::operator =(JsonView jsonValue)
{
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

  if(m_noteTemplateHasBeenSet)
  {
   payload.WithString("NoteTemplate", MedicalScribeNoteTemplateMapper::GetNameForMedicalScribeNoteTemplate(m_noteTemplate));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
