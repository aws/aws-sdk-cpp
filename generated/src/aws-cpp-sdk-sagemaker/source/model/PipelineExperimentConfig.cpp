/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineExperimentConfig.h>
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

PipelineExperimentConfig::PipelineExperimentConfig() : 
    m_experimentNameHasBeenSet(false),
    m_trialNameHasBeenSet(false)
{
}

PipelineExperimentConfig::PipelineExperimentConfig(JsonView jsonValue) : 
    m_experimentNameHasBeenSet(false),
    m_trialNameHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineExperimentConfig& PipelineExperimentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExperimentName"))
  {
    m_experimentName = jsonValue.GetString("ExperimentName");

    m_experimentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialName"))
  {
    m_trialName = jsonValue.GetString("TrialName");

    m_trialNameHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineExperimentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_experimentNameHasBeenSet)
  {
   payload.WithString("ExperimentName", m_experimentName);

  }

  if(m_trialNameHasBeenSet)
  {
   payload.WithString("TrialName", m_trialName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
