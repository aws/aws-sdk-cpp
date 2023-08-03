/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ScalingPolicy.h>
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

ScalingPolicy::ScalingPolicy() : 
    m_targetTrackingHasBeenSet(false)
{
}

ScalingPolicy::ScalingPolicy(JsonView jsonValue) : 
    m_targetTrackingHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingPolicy& ScalingPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetTracking"))
  {
    m_targetTracking = jsonValue.GetObject("TargetTracking");

    m_targetTrackingHasBeenSet = true;
  }

  return *this;
}

JsonValue ScalingPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_targetTrackingHasBeenSet)
  {
   payload.WithObject("TargetTracking", m_targetTracking.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
