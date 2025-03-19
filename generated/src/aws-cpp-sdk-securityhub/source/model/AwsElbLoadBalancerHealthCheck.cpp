/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerHealthCheck.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsElbLoadBalancerHealthCheck::AwsElbLoadBalancerHealthCheck(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsElbLoadBalancerHealthCheck& AwsElbLoadBalancerHealthCheck::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HealthyThreshold"))
  {
    m_healthyThreshold = jsonValue.GetInteger("HealthyThreshold");
    m_healthyThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Interval"))
  {
    m_interval = jsonValue.GetInteger("Interval");
    m_intervalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");
    m_targetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");
    m_timeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UnhealthyThreshold"))
  {
    m_unhealthyThreshold = jsonValue.GetInteger("UnhealthyThreshold");
    m_unhealthyThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsElbLoadBalancerHealthCheck::Jsonize() const
{
  JsonValue payload;

  if(m_healthyThresholdHasBeenSet)
  {
   payload.WithInteger("HealthyThreshold", m_healthyThreshold);

  }

  if(m_intervalHasBeenSet)
  {
   payload.WithInteger("Interval", m_interval);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_unhealthyThresholdHasBeenSet)
  {
   payload.WithInteger("UnhealthyThreshold", m_unhealthyThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
