/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribePostStreamAnalyticsSettings.h>
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

MedicalScribePostStreamAnalyticsSettings::MedicalScribePostStreamAnalyticsSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MedicalScribePostStreamAnalyticsSettings& MedicalScribePostStreamAnalyticsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClinicalNoteGenerationSettings"))
  {
    m_clinicalNoteGenerationSettings = jsonValue.GetObject("ClinicalNoteGenerationSettings");
    m_clinicalNoteGenerationSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribePostStreamAnalyticsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_clinicalNoteGenerationSettingsHasBeenSet)
  {
   payload.WithObject("ClinicalNoteGenerationSettings", m_clinicalNoteGenerationSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
