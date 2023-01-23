/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineExecutionSummary.h>
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

PipelineExecutionSummary::PipelineExecutionSummary() : 
    m_pipelineExecutionArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_pipelineExecutionStatus(PipelineExecutionStatus::NOT_SET),
    m_pipelineExecutionStatusHasBeenSet(false),
    m_pipelineExecutionDescriptionHasBeenSet(false),
    m_pipelineExecutionDisplayNameHasBeenSet(false),
    m_pipelineExecutionFailureReasonHasBeenSet(false)
{
}

PipelineExecutionSummary::PipelineExecutionSummary(JsonView jsonValue) : 
    m_pipelineExecutionArnHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_pipelineExecutionStatus(PipelineExecutionStatus::NOT_SET),
    m_pipelineExecutionStatusHasBeenSet(false),
    m_pipelineExecutionDescriptionHasBeenSet(false),
    m_pipelineExecutionDisplayNameHasBeenSet(false),
    m_pipelineExecutionFailureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineExecutionSummary& PipelineExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PipelineExecutionArn"))
  {
    m_pipelineExecutionArn = jsonValue.GetString("PipelineExecutionArn");

    m_pipelineExecutionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineExecutionStatus"))
  {
    m_pipelineExecutionStatus = PipelineExecutionStatusMapper::GetPipelineExecutionStatusForName(jsonValue.GetString("PipelineExecutionStatus"));

    m_pipelineExecutionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineExecutionDescription"))
  {
    m_pipelineExecutionDescription = jsonValue.GetString("PipelineExecutionDescription");

    m_pipelineExecutionDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineExecutionDisplayName"))
  {
    m_pipelineExecutionDisplayName = jsonValue.GetString("PipelineExecutionDisplayName");

    m_pipelineExecutionDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineExecutionFailureReason"))
  {
    m_pipelineExecutionFailureReason = jsonValue.GetString("PipelineExecutionFailureReason");

    m_pipelineExecutionFailureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineExecutionArnHasBeenSet)
  {
   payload.WithString("PipelineExecutionArn", m_pipelineExecutionArn);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_pipelineExecutionStatusHasBeenSet)
  {
   payload.WithString("PipelineExecutionStatus", PipelineExecutionStatusMapper::GetNameForPipelineExecutionStatus(m_pipelineExecutionStatus));
  }

  if(m_pipelineExecutionDescriptionHasBeenSet)
  {
   payload.WithString("PipelineExecutionDescription", m_pipelineExecutionDescription);

  }

  if(m_pipelineExecutionDisplayNameHasBeenSet)
  {
   payload.WithString("PipelineExecutionDisplayName", m_pipelineExecutionDisplayName);

  }

  if(m_pipelineExecutionFailureReasonHasBeenSet)
  {
   payload.WithString("PipelineExecutionFailureReason", m_pipelineExecutionFailureReason);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
