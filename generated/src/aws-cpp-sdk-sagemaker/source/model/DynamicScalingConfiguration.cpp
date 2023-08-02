/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DynamicScalingConfiguration.h>
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

DynamicScalingConfiguration::DynamicScalingConfiguration() : 
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_scaleInCooldown(0),
    m_scaleInCooldownHasBeenSet(false),
    m_scaleOutCooldown(0),
    m_scaleOutCooldownHasBeenSet(false),
    m_scalingPoliciesHasBeenSet(false)
{
}

DynamicScalingConfiguration::DynamicScalingConfiguration(JsonView jsonValue) : 
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_scaleInCooldown(0),
    m_scaleInCooldownHasBeenSet(false),
    m_scaleOutCooldown(0),
    m_scaleOutCooldownHasBeenSet(false),
    m_scalingPoliciesHasBeenSet(false)
{
  *this = jsonValue;
}

DynamicScalingConfiguration& DynamicScalingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinCapacity"))
  {
    m_minCapacity = jsonValue.GetInteger("MinCapacity");

    m_minCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxCapacity"))
  {
    m_maxCapacity = jsonValue.GetInteger("MaxCapacity");

    m_maxCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScaleInCooldown"))
  {
    m_scaleInCooldown = jsonValue.GetInteger("ScaleInCooldown");

    m_scaleInCooldownHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScaleOutCooldown"))
  {
    m_scaleOutCooldown = jsonValue.GetInteger("ScaleOutCooldown");

    m_scaleOutCooldownHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingPolicies"))
  {
    Aws::Utils::Array<JsonView> scalingPoliciesJsonList = jsonValue.GetArray("ScalingPolicies");
    for(unsigned scalingPoliciesIndex = 0; scalingPoliciesIndex < scalingPoliciesJsonList.GetLength(); ++scalingPoliciesIndex)
    {
      m_scalingPolicies.push_back(scalingPoliciesJsonList[scalingPoliciesIndex].AsObject());
    }
    m_scalingPoliciesHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamicScalingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_minCapacityHasBeenSet)
  {
   payload.WithInteger("MinCapacity", m_minCapacity);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithInteger("MaxCapacity", m_maxCapacity);

  }

  if(m_scaleInCooldownHasBeenSet)
  {
   payload.WithInteger("ScaleInCooldown", m_scaleInCooldown);

  }

  if(m_scaleOutCooldownHasBeenSet)
  {
   payload.WithInteger("ScaleOutCooldown", m_scaleOutCooldown);

  }

  if(m_scalingPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scalingPoliciesJsonList(m_scalingPolicies.size());
   for(unsigned scalingPoliciesIndex = 0; scalingPoliciesIndex < scalingPoliciesJsonList.GetLength(); ++scalingPoliciesIndex)
   {
     scalingPoliciesJsonList[scalingPoliciesIndex].AsObject(m_scalingPolicies[scalingPoliciesIndex].Jsonize());
   }
   payload.WithArray("ScalingPolicies", std::move(scalingPoliciesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
