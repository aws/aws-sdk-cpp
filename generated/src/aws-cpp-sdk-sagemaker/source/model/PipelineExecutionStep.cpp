/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineExecutionStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

PipelineExecutionStep::PipelineExecutionStep() : 
    m_stepNameHasBeenSet(false),
    m_stepDisplayNameHasBeenSet(false),
    m_stepDescriptionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_stepStatus(StepStatus::NOT_SET),
    m_stepStatusHasBeenSet(false),
    m_cacheHitResultHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_attemptCount(0),
    m_attemptCountHasBeenSet(false),
    m_selectiveExecutionResultHasBeenSet(false)
{
}

PipelineExecutionStep::PipelineExecutionStep(JsonView jsonValue) : 
    m_stepNameHasBeenSet(false),
    m_stepDisplayNameHasBeenSet(false),
    m_stepDescriptionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_stepStatus(StepStatus::NOT_SET),
    m_stepStatusHasBeenSet(false),
    m_cacheHitResultHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_attemptCount(0),
    m_attemptCountHasBeenSet(false),
    m_selectiveExecutionResultHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineExecutionStep& PipelineExecutionStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StepName"))
  {
    m_stepName = jsonValue.GetString("StepName");

    m_stepNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepDisplayName"))
  {
    m_stepDisplayName = jsonValue.GetString("StepDisplayName");

    m_stepDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepDescription"))
  {
    m_stepDescription = jsonValue.GetString("StepDescription");

    m_stepDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepStatus"))
  {
    m_stepStatus = StepStatusMapper::GetStepStatusForName(jsonValue.GetString("StepStatus"));

    m_stepStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CacheHitResult"))
  {
    m_cacheHitResult = jsonValue.GetObject("CacheHitResult");

    m_cacheHitResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetObject("Metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttemptCount"))
  {
    m_attemptCount = jsonValue.GetInteger("AttemptCount");

    m_attemptCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectiveExecutionResult"))
  {
    m_selectiveExecutionResult = jsonValue.GetObject("SelectiveExecutionResult");

    m_selectiveExecutionResultHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineExecutionStep::Jsonize() const
{
  JsonValue payload;

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("StepName", m_stepName);

  }

  if(m_stepDisplayNameHasBeenSet)
  {
   payload.WithString("StepDisplayName", m_stepDisplayName);

  }

  if(m_stepDescriptionHasBeenSet)
  {
   payload.WithString("StepDescription", m_stepDescription);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_stepStatusHasBeenSet)
  {
   payload.WithString("StepStatus", StepStatusMapper::GetNameForStepStatus(m_stepStatus));
  }

  if(m_cacheHitResultHasBeenSet)
  {
   payload.WithObject("CacheHitResult", m_cacheHitResult.Jsonize());

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("Metadata", m_metadata.Jsonize());

  }

  if(m_attemptCountHasBeenSet)
  {
   payload.WithInteger("AttemptCount", m_attemptCount);

  }

  if(m_selectiveExecutionResultHasBeenSet)
  {
   payload.WithObject("SelectiveExecutionResult", m_selectiveExecutionResult.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
