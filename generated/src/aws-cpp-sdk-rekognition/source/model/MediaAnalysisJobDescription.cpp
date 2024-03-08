/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/MediaAnalysisJobDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

MediaAnalysisJobDescription::MediaAnalysisJobDescription() : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_operationsConfigHasBeenSet(false),
    m_status(MediaAnalysisJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_completionTimestampHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_resultsHasBeenSet(false),
    m_manifestSummaryHasBeenSet(false)
{
}

MediaAnalysisJobDescription::MediaAnalysisJobDescription(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_operationsConfigHasBeenSet(false),
    m_status(MediaAnalysisJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureDetailsHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_completionTimestampHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_resultsHasBeenSet(false),
    m_manifestSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

MediaAnalysisJobDescription& MediaAnalysisJobDescription::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("OperationsConfig"))
  {
    m_operationsConfig = jsonValue.GetObject("OperationsConfig");

    m_operationsConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MediaAnalysisJobStatusMapper::GetMediaAnalysisJobStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureDetails"))
  {
    m_failureDetails = jsonValue.GetObject("FailureDetails");

    m_failureDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionTimestamp"))
  {
    m_completionTimestamp = jsonValue.GetDouble("CompletionTimestamp");

    m_completionTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetObject("Input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

    m_outputConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Results"))
  {
    m_results = jsonValue.GetObject("Results");

    m_resultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManifestSummary"))
  {
    m_manifestSummary = jsonValue.GetObject("ManifestSummary");

    m_manifestSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaAnalysisJobDescription::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_operationsConfigHasBeenSet)
  {
   payload.WithObject("OperationsConfig", m_operationsConfig.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MediaAnalysisJobStatusMapper::GetNameForMediaAnalysisJobStatus(m_status));
  }

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("FailureDetails", m_failureDetails.Jsonize());

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_completionTimestampHasBeenSet)
  {
   payload.WithDouble("CompletionTimestamp", m_completionTimestamp.SecondsWithMSPrecision());
  }

  if(m_inputHasBeenSet)
  {
   payload.WithObject("Input", m_input.Jsonize());

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_resultsHasBeenSet)
  {
   payload.WithObject("Results", m_results.Jsonize());

  }

  if(m_manifestSummaryHasBeenSet)
  {
   payload.WithObject("ManifestSummary", m_manifestSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
