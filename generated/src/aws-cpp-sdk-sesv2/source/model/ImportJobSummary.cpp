/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ImportJobSummary.h>
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

ImportJobSummary::ImportJobSummary() : 
    m_jobIdHasBeenSet(false),
    m_importDestinationHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_processedRecordsCount(0),
    m_processedRecordsCountHasBeenSet(false),
    m_failedRecordsCount(0),
    m_failedRecordsCountHasBeenSet(false)
{
}

ImportJobSummary::ImportJobSummary(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_importDestinationHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_processedRecordsCount(0),
    m_processedRecordsCountHasBeenSet(false),
    m_failedRecordsCount(0),
    m_failedRecordsCountHasBeenSet(false)
{
  *this = jsonValue;
}

ImportJobSummary& ImportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportDestination"))
  {
    m_importDestination = jsonValue.GetObject("ImportDestination");

    m_importDestinationHasBeenSet = true;
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

  if(jsonValue.ValueExists("ProcessedRecordsCount"))
  {
    m_processedRecordsCount = jsonValue.GetInteger("ProcessedRecordsCount");

    m_processedRecordsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailedRecordsCount"))
  {
    m_failedRecordsCount = jsonValue.GetInteger("FailedRecordsCount");

    m_failedRecordsCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_importDestinationHasBeenSet)
  {
   payload.WithObject("ImportDestination", m_importDestination.Jsonize());

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_processedRecordsCountHasBeenSet)
  {
   payload.WithInteger("ProcessedRecordsCount", m_processedRecordsCount);

  }

  if(m_failedRecordsCountHasBeenSet)
  {
   payload.WithInteger("FailedRecordsCount", m_failedRecordsCount);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
