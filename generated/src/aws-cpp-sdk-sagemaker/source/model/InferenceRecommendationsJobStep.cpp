/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceRecommendationsJobStep.h>
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

InferenceRecommendationsJobStep::InferenceRecommendationsJobStep() : 
    m_stepType(RecommendationStepType::NOT_SET),
    m_stepTypeHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_status(RecommendationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_inferenceBenchmarkHasBeenSet(false)
{
}

InferenceRecommendationsJobStep::InferenceRecommendationsJobStep(JsonView jsonValue) : 
    m_stepType(RecommendationStepType::NOT_SET),
    m_stepTypeHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_status(RecommendationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_inferenceBenchmarkHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceRecommendationsJobStep& InferenceRecommendationsJobStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StepType"))
  {
    m_stepType = RecommendationStepTypeMapper::GetRecommendationStepTypeForName(jsonValue.GetString("StepType"));

    m_stepTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RecommendationJobStatusMapper::GetRecommendationJobStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceBenchmark"))
  {
    m_inferenceBenchmark = jsonValue.GetObject("InferenceBenchmark");

    m_inferenceBenchmarkHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceRecommendationsJobStep::Jsonize() const
{
  JsonValue payload;

  if(m_stepTypeHasBeenSet)
  {
   payload.WithString("StepType", RecommendationStepTypeMapper::GetNameForRecommendationStepType(m_stepType));
  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RecommendationJobStatusMapper::GetNameForRecommendationJobStatus(m_status));
  }

  if(m_inferenceBenchmarkHasBeenSet)
  {
   payload.WithObject("InferenceBenchmark", m_inferenceBenchmark.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
