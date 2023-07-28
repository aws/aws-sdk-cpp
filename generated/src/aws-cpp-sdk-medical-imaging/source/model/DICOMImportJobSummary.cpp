/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/DICOMImportJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

DICOMImportJobSummary::DICOMImportJobSummary() : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_datastoreIdHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_submittedAtHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

DICOMImportJobSummary::DICOMImportJobSummary(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_datastoreIdHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_submittedAtHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

DICOMImportJobSummary& DICOMImportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("jobStatus"));

    m_jobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datastoreId"))
  {
    m_datastoreId = jsonValue.GetString("datastoreId");

    m_datastoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("dataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetDouble("endedAt");

    m_endedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("submittedAt"))
  {
    m_submittedAt = jsonValue.GetDouble("submittedAt");

    m_submittedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue DICOMImportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("jobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_datastoreIdHasBeenSet)
  {
   payload.WithString("datastoreId", m_datastoreId);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("dataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithDouble("endedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if(m_submittedAtHasBeenSet)
  {
   payload.WithDouble("submittedAt", m_submittedAt.SecondsWithMSPrecision());
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
