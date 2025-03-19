/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationMetrics.h>
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

RecommendationMetrics::RecommendationMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

RecommendationMetrics& RecommendationMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CostPerHour"))
  {
    m_costPerHour = jsonValue.GetDouble("CostPerHour");
    m_costPerHourHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CostPerInference"))
  {
    m_costPerInference = jsonValue.GetDouble("CostPerInference");
    m_costPerInferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxInvocations"))
  {
    m_maxInvocations = jsonValue.GetInteger("MaxInvocations");
    m_maxInvocationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelLatency"))
  {
    m_modelLatency = jsonValue.GetInteger("ModelLatency");
    m_modelLatencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CpuUtilization"))
  {
    m_cpuUtilization = jsonValue.GetDouble("CpuUtilization");
    m_cpuUtilizationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MemoryUtilization"))
  {
    m_memoryUtilization = jsonValue.GetDouble("MemoryUtilization");
    m_memoryUtilizationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelSetupTime"))
  {
    m_modelSetupTime = jsonValue.GetInteger("ModelSetupTime");
    m_modelSetupTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_costPerHourHasBeenSet)
  {
   payload.WithDouble("CostPerHour", m_costPerHour);

  }

  if(m_costPerInferenceHasBeenSet)
  {
   payload.WithDouble("CostPerInference", m_costPerInference);

  }

  if(m_maxInvocationsHasBeenSet)
  {
   payload.WithInteger("MaxInvocations", m_maxInvocations);

  }

  if(m_modelLatencyHasBeenSet)
  {
   payload.WithInteger("ModelLatency", m_modelLatency);

  }

  if(m_cpuUtilizationHasBeenSet)
  {
   payload.WithDouble("CpuUtilization", m_cpuUtilization);

  }

  if(m_memoryUtilizationHasBeenSet)
  {
   payload.WithDouble("MemoryUtilization", m_memoryUtilization);

  }

  if(m_modelSetupTimeHasBeenSet)
  {
   payload.WithInteger("ModelSetupTime", m_modelSetupTime);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
