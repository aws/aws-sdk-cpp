/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/ClinicalNoteGenerationResult.h>
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

ClinicalNoteGenerationResult::ClinicalNoteGenerationResult(JsonView jsonValue)
{
  *this = jsonValue;
}

ClinicalNoteGenerationResult& ClinicalNoteGenerationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClinicalNoteOutputLocation"))
  {
    m_clinicalNoteOutputLocation = jsonValue.GetString("ClinicalNoteOutputLocation");
    m_clinicalNoteOutputLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TranscriptOutputLocation"))
  {
    m_transcriptOutputLocation = jsonValue.GetString("TranscriptOutputLocation");
    m_transcriptOutputLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ClinicalNoteGenerationStatusMapper::GetClinicalNoteGenerationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ClinicalNoteGenerationResult::Jsonize() const
{
  JsonValue payload;

  if(m_clinicalNoteOutputLocationHasBeenSet)
  {
   payload.WithString("ClinicalNoteOutputLocation", m_clinicalNoteOutputLocation);

  }

  if(m_transcriptOutputLocationHasBeenSet)
  {
   payload.WithString("TranscriptOutputLocation", m_transcriptOutputLocation);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ClinicalNoteGenerationStatusMapper::GetNameForClinicalNoteGenerationStatus(m_status));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
