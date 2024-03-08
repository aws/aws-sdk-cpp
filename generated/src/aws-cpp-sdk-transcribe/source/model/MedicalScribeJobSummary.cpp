/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/MedicalScribeJobSummary.h>
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

MedicalScribeJobSummary::MedicalScribeJobSummary() : 
    m_medicalScribeJobNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_languageCode(MedicalScribeLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_medicalScribeJobStatus(MedicalScribeJobStatus::NOT_SET),
    m_medicalScribeJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

MedicalScribeJobSummary::MedicalScribeJobSummary(JsonView jsonValue) : 
    m_medicalScribeJobNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_languageCode(MedicalScribeLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_medicalScribeJobStatus(MedicalScribeJobStatus::NOT_SET),
    m_medicalScribeJobStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

MedicalScribeJobSummary& MedicalScribeJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MedicalScribeJobName"))
  {
    m_medicalScribeJobName = jsonValue.GetString("MedicalScribeJobName");

    m_medicalScribeJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = MedicalScribeLanguageCodeMapper::GetMedicalScribeLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MedicalScribeJobStatus"))
  {
    m_medicalScribeJobStatus = MedicalScribeJobStatusMapper::GetMedicalScribeJobStatusForName(jsonValue.GetString("MedicalScribeJobStatus"));

    m_medicalScribeJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue MedicalScribeJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_medicalScribeJobNameHasBeenSet)
  {
   payload.WithString("MedicalScribeJobName", m_medicalScribeJobName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("CompletionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", MedicalScribeLanguageCodeMapper::GetNameForMedicalScribeLanguageCode(m_languageCode));
  }

  if(m_medicalScribeJobStatusHasBeenSet)
  {
   payload.WithString("MedicalScribeJobStatus", MedicalScribeJobStatusMapper::GetNameForMedicalScribeJobStatus(m_medicalScribeJobStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
