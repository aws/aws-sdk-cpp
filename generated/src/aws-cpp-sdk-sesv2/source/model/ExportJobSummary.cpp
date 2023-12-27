/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ExportJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ExportJobSummary::ExportJobSummary() : 
    m_jobIdHasBeenSet(false),
    m_exportSourceType(ExportSourceType::NOT_SET),
    m_exportSourceTypeHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_completedTimestampHasBeenSet(false)
{
}

ExportJobSummary::ExportJobSummary(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_exportSourceType(ExportSourceType::NOT_SET),
    m_exportSourceTypeHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_completedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ExportJobSummary& ExportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportSourceType"))
  {
    m_exportSourceType = ExportSourceTypeMapper::GetExportSourceTypeForName(jsonValue.GetString("ExportSourceType"));

    m_exportSourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));

    m_jobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedTimestamp"))
  {
    m_completedTimestamp = jsonValue.GetDouble("CompletedTimestamp");

    m_completedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_exportSourceTypeHasBeenSet)
  {
   payload.WithString("ExportSourceType", ExportSourceTypeMapper::GetNameForExportSourceType(m_exportSourceType));
  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_completedTimestampHasBeenSet)
  {
   payload.WithDouble("CompletedTimestamp", m_completedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
