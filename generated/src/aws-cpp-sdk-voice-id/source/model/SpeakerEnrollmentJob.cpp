/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/SpeakerEnrollmentJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VoiceID
{
namespace Model
{

SpeakerEnrollmentJob::SpeakerEnrollmentJob() : 
    m_createdAtHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_enrollmentConfigHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobProgressHasBeenSet(false),
    m_jobStatus(SpeakerEnrollmentJobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false)
{
}

SpeakerEnrollmentJob::SpeakerEnrollmentJob(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_enrollmentConfigHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobProgressHasBeenSet(false),
    m_jobStatus(SpeakerEnrollmentJobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false)
{
  *this = jsonValue;
}

SpeakerEnrollmentJob& SpeakerEnrollmentJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndedAt"))
  {
    m_endedAt = jsonValue.GetDouble("EndedAt");

    m_endedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnrollmentConfig"))
  {
    m_enrollmentConfig = jsonValue.GetObject("EnrollmentConfig");

    m_enrollmentConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");

    m_failureDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDataConfig"))
  {
    m_inputDataConfig = jsonValue.GetObject("InputDataConfig");

    m_inputDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobProgress"))
  {
    m_jobProgress = jsonValue.GetObject("JobProgress");

    m_jobProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = SpeakerEnrollmentJobStatusMapper::GetSpeakerEnrollmentJobStatusForName(jsonValue.GetString("JobStatus"));

    m_jobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("OutputDataConfig");

    m_outputDataConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue SpeakerEnrollmentJob::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithDouble("EndedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if(m_enrollmentConfigHasBeenSet)
  {
   payload.WithObject("EnrollmentConfig", m_enrollmentConfig.Jsonize());

  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

  }

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobProgressHasBeenSet)
  {
   payload.WithObject("JobProgress", m_jobProgress.Jsonize());

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", SpeakerEnrollmentJobStatusMapper::GetNameForSpeakerEnrollmentJobStatus(m_jobStatus));
  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
