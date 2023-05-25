/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeTargetParameters::PipeTargetParameters() : 
    m_batchJobParametersHasBeenSet(false),
    m_cloudWatchLogsParametersHasBeenSet(false),
    m_ecsTaskParametersHasBeenSet(false),
    m_eventBridgeEventBusParametersHasBeenSet(false),
    m_httpParametersHasBeenSet(false),
    m_inputTemplateHasBeenSet(false),
    m_kinesisStreamParametersHasBeenSet(false),
    m_lambdaFunctionParametersHasBeenSet(false),
    m_redshiftDataParametersHasBeenSet(false),
    m_sageMakerPipelineParametersHasBeenSet(false),
    m_sqsQueueParametersHasBeenSet(false),
    m_stepFunctionStateMachineParametersHasBeenSet(false)
{
}

PipeTargetParameters::PipeTargetParameters(JsonView jsonValue) : 
    m_batchJobParametersHasBeenSet(false),
    m_cloudWatchLogsParametersHasBeenSet(false),
    m_ecsTaskParametersHasBeenSet(false),
    m_eventBridgeEventBusParametersHasBeenSet(false),
    m_httpParametersHasBeenSet(false),
    m_inputTemplateHasBeenSet(false),
    m_kinesisStreamParametersHasBeenSet(false),
    m_lambdaFunctionParametersHasBeenSet(false),
    m_redshiftDataParametersHasBeenSet(false),
    m_sageMakerPipelineParametersHasBeenSet(false),
    m_sqsQueueParametersHasBeenSet(false),
    m_stepFunctionStateMachineParametersHasBeenSet(false)
{
  *this = jsonValue;
}

PipeTargetParameters& PipeTargetParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BatchJobParameters"))
  {
    m_batchJobParameters = jsonValue.GetObject("BatchJobParameters");

    m_batchJobParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLogsParameters"))
  {
    m_cloudWatchLogsParameters = jsonValue.GetObject("CloudWatchLogsParameters");

    m_cloudWatchLogsParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EcsTaskParameters"))
  {
    m_ecsTaskParameters = jsonValue.GetObject("EcsTaskParameters");

    m_ecsTaskParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventBridgeEventBusParameters"))
  {
    m_eventBridgeEventBusParameters = jsonValue.GetObject("EventBridgeEventBusParameters");

    m_eventBridgeEventBusParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpParameters"))
  {
    m_httpParameters = jsonValue.GetObject("HttpParameters");

    m_httpParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputTemplate"))
  {
    m_inputTemplate = jsonValue.GetString("InputTemplate");

    m_inputTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisStreamParameters"))
  {
    m_kinesisStreamParameters = jsonValue.GetObject("KinesisStreamParameters");

    m_kinesisStreamParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaFunctionParameters"))
  {
    m_lambdaFunctionParameters = jsonValue.GetObject("LambdaFunctionParameters");

    m_lambdaFunctionParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftDataParameters"))
  {
    m_redshiftDataParameters = jsonValue.GetObject("RedshiftDataParameters");

    m_redshiftDataParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SageMakerPipelineParameters"))
  {
    m_sageMakerPipelineParameters = jsonValue.GetObject("SageMakerPipelineParameters");

    m_sageMakerPipelineParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqsQueueParameters"))
  {
    m_sqsQueueParameters = jsonValue.GetObject("SqsQueueParameters");

    m_sqsQueueParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepFunctionStateMachineParameters"))
  {
    m_stepFunctionStateMachineParameters = jsonValue.GetObject("StepFunctionStateMachineParameters");

    m_stepFunctionStateMachineParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeTargetParameters::Jsonize() const
{
  JsonValue payload;

  if(m_batchJobParametersHasBeenSet)
  {
   payload.WithObject("BatchJobParameters", m_batchJobParameters.Jsonize());

  }

  if(m_cloudWatchLogsParametersHasBeenSet)
  {
   payload.WithObject("CloudWatchLogsParameters", m_cloudWatchLogsParameters.Jsonize());

  }

  if(m_ecsTaskParametersHasBeenSet)
  {
   payload.WithObject("EcsTaskParameters", m_ecsTaskParameters.Jsonize());

  }

  if(m_eventBridgeEventBusParametersHasBeenSet)
  {
   payload.WithObject("EventBridgeEventBusParameters", m_eventBridgeEventBusParameters.Jsonize());

  }

  if(m_httpParametersHasBeenSet)
  {
   payload.WithObject("HttpParameters", m_httpParameters.Jsonize());

  }

  if(m_inputTemplateHasBeenSet)
  {
   payload.WithString("InputTemplate", m_inputTemplate);

  }

  if(m_kinesisStreamParametersHasBeenSet)
  {
   payload.WithObject("KinesisStreamParameters", m_kinesisStreamParameters.Jsonize());

  }

  if(m_lambdaFunctionParametersHasBeenSet)
  {
   payload.WithObject("LambdaFunctionParameters", m_lambdaFunctionParameters.Jsonize());

  }

  if(m_redshiftDataParametersHasBeenSet)
  {
   payload.WithObject("RedshiftDataParameters", m_redshiftDataParameters.Jsonize());

  }

  if(m_sageMakerPipelineParametersHasBeenSet)
  {
   payload.WithObject("SageMakerPipelineParameters", m_sageMakerPipelineParameters.Jsonize());

  }

  if(m_sqsQueueParametersHasBeenSet)
  {
   payload.WithObject("SqsQueueParameters", m_sqsQueueParameters.Jsonize());

  }

  if(m_stepFunctionStateMachineParametersHasBeenSet)
  {
   payload.WithObject("StepFunctionStateMachineParameters", m_stepFunctionStateMachineParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
