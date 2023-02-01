/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ExportJobResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

ExportJobResponse::ExportJobResponse() : 
    m_applicationIdHasBeenSet(false),
    m_completedPieces(0),
    m_completedPiecesHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_failedPieces(0),
    m_failedPiecesHasBeenSet(false),
    m_failuresHasBeenSet(false),
    m_idHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_totalFailures(0),
    m_totalFailuresHasBeenSet(false),
    m_totalPieces(0),
    m_totalPiecesHasBeenSet(false),
    m_totalProcessed(0),
    m_totalProcessedHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

ExportJobResponse::ExportJobResponse(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_completedPieces(0),
    m_completedPiecesHasBeenSet(false),
    m_completionDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_failedPieces(0),
    m_failedPiecesHasBeenSet(false),
    m_failuresHasBeenSet(false),
    m_idHasBeenSet(false),
    m_jobStatus(JobStatus::NOT_SET),
    m_jobStatusHasBeenSet(false),
    m_totalFailures(0),
    m_totalFailuresHasBeenSet(false),
    m_totalPieces(0),
    m_totalPiecesHasBeenSet(false),
    m_totalProcessed(0),
    m_totalProcessedHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ExportJobResponse& ExportJobResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedPieces"))
  {
    m_completedPieces = jsonValue.GetInteger("CompletedPieces");

    m_completedPiecesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionDate"))
  {
    m_completionDate = jsonValue.GetString("CompletionDate");

    m_completionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Definition"))
  {
    m_definition = jsonValue.GetObject("Definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailedPieces"))
  {
    m_failedPieces = jsonValue.GetInteger("FailedPieces");

    m_failedPiecesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Failures"))
  {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("Failures");
    for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
    {
      m_failures.push_back(failuresJsonList[failuresIndex].AsString());
    }
    m_failuresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));

    m_jobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalFailures"))
  {
    m_totalFailures = jsonValue.GetInteger("TotalFailures");

    m_totalFailuresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalPieces"))
  {
    m_totalPieces = jsonValue.GetInteger("TotalPieces");

    m_totalPiecesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalProcessed"))
  {
    m_totalProcessed = jsonValue.GetInteger("TotalProcessed");

    m_totalProcessedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportJobResponse::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_completedPiecesHasBeenSet)
  {
   payload.WithInteger("CompletedPieces", m_completedPieces);

  }

  if(m_completionDateHasBeenSet)
  {
   payload.WithString("CompletionDate", m_completionDate);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("Definition", m_definition.Jsonize());

  }

  if(m_failedPiecesHasBeenSet)
  {
   payload.WithInteger("FailedPieces", m_failedPieces);

  }

  if(m_failuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failuresJsonList(m_failures.size());
   for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
   {
     failuresJsonList[failuresIndex].AsString(m_failures[failuresIndex]);
   }
   payload.WithArray("Failures", std::move(failuresJsonList));

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_jobStatusHasBeenSet)
  {
   payload.WithString("JobStatus", JobStatusMapper::GetNameForJobStatus(m_jobStatus));
  }

  if(m_totalFailuresHasBeenSet)
  {
   payload.WithInteger("TotalFailures", m_totalFailures);

  }

  if(m_totalPiecesHasBeenSet)
  {
   payload.WithInteger("TotalPieces", m_totalPieces);

  }

  if(m_totalProcessedHasBeenSet)
  {
   payload.WithInteger("TotalProcessed", m_totalProcessed);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
