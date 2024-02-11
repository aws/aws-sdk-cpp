/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/DICOMImportJobProperties.h>
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

DICOMImportJobProperties::DICOMImportJobProperties() : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_datastoreIdHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_submittedAtHasBeenSet(false),
    m_inputS3UriHasBeenSet(false),
    m_outputS3UriHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

DICOMImportJobProperties::DICOMImportJobProperties(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_datastoreIdHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_submittedAtHasBeenSet(false),
    m_inputS3UriHasBeenSet(false),
    m_outputS3UriHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

DICOMImportJobProperties& DICOMImportJobProperties::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("inputS3Uri"))
  {
    m_inputS3Uri = jsonValue.GetString("inputS3Uri");

    m_inputS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputS3Uri"))
  {
    m_outputS3Uri = jsonValue.GetString("outputS3Uri");

    m_outputS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue DICOMImportJobProperties::Jsonize() const
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

  if(m_inputS3UriHasBeenSet)
  {
   payload.WithString("inputS3Uri", m_inputS3Uri);

  }

  if(m_outputS3UriHasBeenSet)
  {
   payload.WithString("outputS3Uri", m_outputS3Uri);

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
