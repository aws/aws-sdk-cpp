/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ScalingPolicyObjective.h>
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

ScalingPolicyObjective::ScalingPolicyObjective(JsonView jsonValue)
{
  *this = jsonValue;
}

ScalingPolicyObjective& ScalingPolicyObjective::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinInvocationsPerMinute"))
  {
    m_minInvocationsPerMinute = jsonValue.GetInteger("MinInvocationsPerMinute");
    m_minInvocationsPerMinuteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxInvocationsPerMinute"))
  {
    m_maxInvocationsPerMinute = jsonValue.GetInteger("MaxInvocationsPerMinute");
    m_maxInvocationsPerMinuteHasBeenSet = true;
  }
  return *this;
}

JsonValue ScalingPolicyObjective::Jsonize() const
{
  JsonValue payload;

  if(m_minInvocationsPerMinuteHasBeenSet)
  {
   payload.WithInteger("MinInvocationsPerMinute", m_minInvocationsPerMinute);

  }

  if(m_maxInvocationsPerMinuteHasBeenSet)
  {
   payload.WithInteger("MaxInvocationsPerMinute", m_maxInvocationsPerMinute);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
