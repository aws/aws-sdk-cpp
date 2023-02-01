/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineExecutionStepMetadata.h>
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

PipelineExecutionStepMetadata::PipelineExecutionStepMetadata() : 
    m_trainingJobHasBeenSet(false),
    m_processingJobHasBeenSet(false),
    m_transformJobHasBeenSet(false),
    m_tuningJobHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_registerModelHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_lambdaHasBeenSet(false),
    m_qualityCheckHasBeenSet(false),
    m_clarifyCheckHasBeenSet(false),
    m_eMRHasBeenSet(false),
    m_failHasBeenSet(false),
    m_autoMLJobHasBeenSet(false)
{
}

PipelineExecutionStepMetadata::PipelineExecutionStepMetadata(JsonView jsonValue) : 
    m_trainingJobHasBeenSet(false),
    m_processingJobHasBeenSet(false),
    m_transformJobHasBeenSet(false),
    m_tuningJobHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_registerModelHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_lambdaHasBeenSet(false),
    m_qualityCheckHasBeenSet(false),
    m_clarifyCheckHasBeenSet(false),
    m_eMRHasBeenSet(false),
    m_failHasBeenSet(false),
    m_autoMLJobHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineExecutionStepMetadata& PipelineExecutionStepMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingJob"))
  {
    m_trainingJob = jsonValue.GetObject("TrainingJob");

    m_trainingJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingJob"))
  {
    m_processingJob = jsonValue.GetObject("ProcessingJob");

    m_processingJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformJob"))
  {
    m_transformJob = jsonValue.GetObject("TransformJob");

    m_transformJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TuningJob"))
  {
    m_tuningJob = jsonValue.GetObject("TuningJob");

    m_tuningJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetObject("Model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegisterModel"))
  {
    m_registerModel = jsonValue.GetObject("RegisterModel");

    m_registerModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = jsonValue.GetObject("Condition");

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Callback"))
  {
    m_callback = jsonValue.GetObject("Callback");

    m_callbackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lambda"))
  {
    m_lambda = jsonValue.GetObject("Lambda");

    m_lambdaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QualityCheck"))
  {
    m_qualityCheck = jsonValue.GetObject("QualityCheck");

    m_qualityCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClarifyCheck"))
  {
    m_clarifyCheck = jsonValue.GetObject("ClarifyCheck");

    m_clarifyCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EMR"))
  {
    m_eMR = jsonValue.GetObject("EMR");

    m_eMRHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Fail"))
  {
    m_fail = jsonValue.GetObject("Fail");

    m_failHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMLJob"))
  {
    m_autoMLJob = jsonValue.GetObject("AutoMLJob");

    m_autoMLJobHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineExecutionStepMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_trainingJobHasBeenSet)
  {
   payload.WithObject("TrainingJob", m_trainingJob.Jsonize());

  }

  if(m_processingJobHasBeenSet)
  {
   payload.WithObject("ProcessingJob", m_processingJob.Jsonize());

  }

  if(m_transformJobHasBeenSet)
  {
   payload.WithObject("TransformJob", m_transformJob.Jsonize());

  }

  if(m_tuningJobHasBeenSet)
  {
   payload.WithObject("TuningJob", m_tuningJob.Jsonize());

  }

  if(m_modelHasBeenSet)
  {
   payload.WithObject("Model", m_model.Jsonize());

  }

  if(m_registerModelHasBeenSet)
  {
   payload.WithObject("RegisterModel", m_registerModel.Jsonize());

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("Condition", m_condition.Jsonize());

  }

  if(m_callbackHasBeenSet)
  {
   payload.WithObject("Callback", m_callback.Jsonize());

  }

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("Lambda", m_lambda.Jsonize());

  }

  if(m_qualityCheckHasBeenSet)
  {
   payload.WithObject("QualityCheck", m_qualityCheck.Jsonize());

  }

  if(m_clarifyCheckHasBeenSet)
  {
   payload.WithObject("ClarifyCheck", m_clarifyCheck.Jsonize());

  }

  if(m_eMRHasBeenSet)
  {
   payload.WithObject("EMR", m_eMR.Jsonize());

  }

  if(m_failHasBeenSet)
  {
   payload.WithObject("Fail", m_fail.Jsonize());

  }

  if(m_autoMLJobHasBeenSet)
  {
   payload.WithObject("AutoMLJob", m_autoMLJob.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
