/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ScalingPolicyMetric.h>
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

ScalingPolicyMetric::ScalingPolicyMetric() : 
    m_invocationsPerInstance(0),
    m_invocationsPerInstanceHasBeenSet(false),
    m_modelLatency(0),
    m_modelLatencyHasBeenSet(false)
{
}

ScalingPolicyMetric::ScalingPolicyMetric(JsonView jsonValue) : 
    m_invocationsPerInstance(0),
    m_invocationsPerInstanceHasBeenSet(false),
    m_modelLatency(0),
    m_modelLatencyHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingPolicyMetric& ScalingPolicyMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvocationsPerInstance"))
  {
    m_invocationsPerInstance = jsonValue.GetInteger("InvocationsPerInstance");

    m_invocationsPerInstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelLatency"))
  {
    m_modelLatency = jsonValue.GetInteger("ModelLatency");

    m_modelLatencyHasBeenSet = true;
  }

  return *this;
}

JsonValue ScalingPolicyMetric::Jsonize() const
{
  JsonValue payload;

  if(m_invocationsPerInstanceHasBeenSet)
  {
   payload.WithInteger("InvocationsPerInstance", m_invocationsPerInstance);

  }

  if(m_modelLatencyHasBeenSet)
  {
   payload.WithInteger("ModelLatency", m_modelLatency);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
