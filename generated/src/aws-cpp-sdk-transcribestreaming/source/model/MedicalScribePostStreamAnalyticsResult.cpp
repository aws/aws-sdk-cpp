/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribePostStreamAnalyticsResult.h>
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

MedicalScribePostStreamAnalyticsResult::MedicalScribePostStreamAnalyticsResult(JsonView jsonValue)
{
  *this = jsonValue;
}

MedicalScribePostStreamAnalyticsResult& MedicalScribePostStreamAnalyticsResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClinicalNoteGenerationResult"))
  {
    m_clinicalNoteGenerationResult = jsonValue.GetObject("ClinicalNoteGenerationResult");
    m_clinicalNoteGenerationResultHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribePostStreamAnalyticsResult::Jsonize() const
{
  JsonValue payload;

  if(m_clinicalNoteGenerationResultHasBeenSet)
  {
   payload.WithObject("ClinicalNoteGenerationResult", m_clinicalNoteGenerationResult.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
