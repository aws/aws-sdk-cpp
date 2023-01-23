/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/SpeakerEnrollmentJobSummary.h>
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

SpeakerEnrollmentJobSummary::SpeakerEnrollmentJobSummary() : 
    m_createdAtHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobProgressHasBeenSet(false),
    m_jobStatus(SpeakerEnrollmentJobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false)
{
}

SpeakerEnrollmentJobSummary::SpeakerEnrollmentJobSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobProgressHasBeenSet(false),
    m_jobStatus(SpeakerEnrollmentJobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false)
{
  *this = jsonValue;
}

SpeakerEnrollmentJobSummary& SpeakerEnrollmentJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
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

  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");

    m_failureDetailsHasBeenSet = true;
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

  return *this;
}

JsonValue SpeakerEnrollmentJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithDouble("EndedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
