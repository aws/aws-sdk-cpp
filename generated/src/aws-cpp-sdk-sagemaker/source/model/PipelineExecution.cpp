/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineExecution.h>
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

PipelineExecution::PipelineExecution() : 
    m_pipelineArnHasBeenSet(false),
    m_pipelineExecutionArnHasBeenSet(false),
    m_pipelineExecutionDisplayNameHasBeenSet(false),
    m_pipelineExecutionStatus(PipelineExecutionStatus::NOT_SET),
    m_pipelineExecutionStatusHasBeenSet(false),
    m_pipelineExecutionDescriptionHasBeenSet(false),
    m_pipelineExperimentConfigHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_parallelismConfigurationHasBeenSet(false),
    m_pipelineParametersHasBeenSet(false)
{
}

PipelineExecution::PipelineExecution(JsonView jsonValue) : 
    m_pipelineArnHasBeenSet(false),
    m_pipelineExecutionArnHasBeenSet(false),
    m_pipelineExecutionDisplayNameHasBeenSet(false),
    m_pipelineExecutionStatus(PipelineExecutionStatus::NOT_SET),
    m_pipelineExecutionStatusHasBeenSet(false),
    m_pipelineExecutionDescriptionHasBeenSet(false),
    m_pipelineExperimentConfigHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_parallelismConfigurationHasBeenSet(false),
    m_pipelineParametersHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineExecution& PipelineExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PipelineArn"))
  {
    m_pipelineArn = jsonValue.GetString("PipelineArn");

    m_pipelineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineExecutionArn"))
  {
    m_pipelineExecutionArn = jsonValue.GetString("PipelineExecutionArn");

    m_pipelineExecutionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineExecutionDisplayName"))
  {
    m_pipelineExecutionDisplayName = jsonValue.GetString("PipelineExecutionDisplayName");

    m_pipelineExecutionDisplayNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("PipelineExperimentConfig"))
  {
    m_pipelineExperimentConfig = jsonValue.GetObject("PipelineExperimentConfig");

    m_pipelineExperimentConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelismConfiguration"))
  {
    m_parallelismConfiguration = jsonValue.GetObject("ParallelismConfiguration");

    m_parallelismConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineParameters"))
  {
    Aws::Utils::Array<JsonView> pipelineParametersJsonList = jsonValue.GetArray("PipelineParameters");
    for(unsigned pipelineParametersIndex = 0; pipelineParametersIndex < pipelineParametersJsonList.GetLength(); ++pipelineParametersIndex)
    {
      m_pipelineParameters.push_back(pipelineParametersJsonList[pipelineParametersIndex].AsObject());
    }
    m_pipelineParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineExecution::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineArnHasBeenSet)
  {
   payload.WithString("PipelineArn", m_pipelineArn);

  }

  if(m_pipelineExecutionArnHasBeenSet)
  {
   payload.WithString("PipelineExecutionArn", m_pipelineExecutionArn);

  }

  if(m_pipelineExecutionDisplayNameHasBeenSet)
  {
   payload.WithString("PipelineExecutionDisplayName", m_pipelineExecutionDisplayName);

  }

  if(m_pipelineExecutionStatusHasBeenSet)
  {
   payload.WithString("PipelineExecutionStatus", PipelineExecutionStatusMapper::GetNameForPipelineExecutionStatus(m_pipelineExecutionStatus));
  }

  if(m_pipelineExecutionDescriptionHasBeenSet)
  {
   payload.WithString("PipelineExecutionDescription", m_pipelineExecutionDescription);

  }

  if(m_pipelineExperimentConfigHasBeenSet)
  {
   payload.WithObject("PipelineExperimentConfig", m_pipelineExperimentConfig.Jsonize());

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithObject("LastModifiedBy", m_lastModifiedBy.Jsonize());

  }

  if(m_parallelismConfigurationHasBeenSet)
  {
   payload.WithObject("ParallelismConfiguration", m_parallelismConfiguration.Jsonize());

  }

  if(m_pipelineParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pipelineParametersJsonList(m_pipelineParameters.size());
   for(unsigned pipelineParametersIndex = 0; pipelineParametersIndex < pipelineParametersJsonList.GetLength(); ++pipelineParametersIndex)
   {
     pipelineParametersJsonList[pipelineParametersIndex].AsObject(m_pipelineParameters[pipelineParametersIndex].Jsonize());
   }
   payload.WithArray("PipelineParameters", std::move(pipelineParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
