/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TargetTrackingScalingPolicyConfiguration.h>
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

TargetTrackingScalingPolicyConfiguration::TargetTrackingScalingPolicyConfiguration() : 
    m_metricSpecificationHasBeenSet(false),
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false)
{
}

TargetTrackingScalingPolicyConfiguration::TargetTrackingScalingPolicyConfiguration(JsonView jsonValue) : 
    m_metricSpecificationHasBeenSet(false),
    m_targetValue(0.0),
    m_targetValueHasBeenSet(false)
{
  *this = jsonValue;
}

TargetTrackingScalingPolicyConfiguration& TargetTrackingScalingPolicyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricSpecification"))
  {
    m_metricSpecification = jsonValue.GetObject("MetricSpecification");

    m_metricSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetValue"))
  {
    m_targetValue = jsonValue.GetDouble("TargetValue");

    m_targetValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetTrackingScalingPolicyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_metricSpecificationHasBeenSet)
  {
   payload.WithObject("MetricSpecification", m_metricSpecification.Jsonize());

  }

  if(m_targetValueHasBeenSet)
  {
   payload.WithDouble("TargetValue", m_targetValue);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
