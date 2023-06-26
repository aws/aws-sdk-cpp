/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/Target.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Scheduler
{
namespace Model
{

Target::Target() : 
    m_arnHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_ecsParametersHasBeenSet(false),
    m_eventBridgeParametersHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_kinesisParametersHasBeenSet(false),
    m_retryPolicyHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_sageMakerPipelineParametersHasBeenSet(false),
    m_sqsParametersHasBeenSet(false)
{
}

Target::Target(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_ecsParametersHasBeenSet(false),
    m_eventBridgeParametersHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_kinesisParametersHasBeenSet(false),
    m_retryPolicyHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_sageMakerPipelineParametersHasBeenSet(false),
    m_sqsParametersHasBeenSet(false)
{
  *this = jsonValue;
}

Target& Target::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeadLetterConfig"))
  {
    m_deadLetterConfig = jsonValue.GetObject("DeadLetterConfig");

    m_deadLetterConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EcsParameters"))
  {
    m_ecsParameters = jsonValue.GetObject("EcsParameters");

    m_ecsParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventBridgeParameters"))
  {
    m_eventBridgeParameters = jsonValue.GetObject("EventBridgeParameters");

    m_eventBridgeParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetString("Input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisParameters"))
  {
    m_kinesisParameters = jsonValue.GetObject("KinesisParameters");

    m_kinesisParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryPolicy"))
  {
    m_retryPolicy = jsonValue.GetObject("RetryPolicy");

    m_retryPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SageMakerPipelineParameters"))
  {
    m_sageMakerPipelineParameters = jsonValue.GetObject("SageMakerPipelineParameters");

    m_sageMakerPipelineParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqsParameters"))
  {
    m_sqsParameters = jsonValue.GetObject("SqsParameters");

    m_sqsParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue Target::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_deadLetterConfigHasBeenSet)
  {
   payload.WithObject("DeadLetterConfig", m_deadLetterConfig.Jsonize());

  }

  if(m_ecsParametersHasBeenSet)
  {
   payload.WithObject("EcsParameters", m_ecsParameters.Jsonize());

  }

  if(m_eventBridgeParametersHasBeenSet)
  {
   payload.WithObject("EventBridgeParameters", m_eventBridgeParameters.Jsonize());

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("Input", m_input);

  }

  if(m_kinesisParametersHasBeenSet)
  {
   payload.WithObject("KinesisParameters", m_kinesisParameters.Jsonize());

  }

  if(m_retryPolicyHasBeenSet)
  {
   payload.WithObject("RetryPolicy", m_retryPolicy.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_sageMakerPipelineParametersHasBeenSet)
  {
   payload.WithObject("SageMakerPipelineParameters", m_sageMakerPipelineParameters.Jsonize());

  }

  if(m_sqsParametersHasBeenSet)
  {
   payload.WithObject("SqsParameters", m_sqsParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Scheduler
} // namespace Aws
