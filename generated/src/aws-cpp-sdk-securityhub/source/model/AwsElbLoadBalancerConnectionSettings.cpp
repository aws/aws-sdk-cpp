/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerConnectionSettings.h>
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

AwsElbLoadBalancerConnectionSettings::AwsElbLoadBalancerConnectionSettings() : 
    m_idleTimeout(0),
    m_idleTimeoutHasBeenSet(false)
{
}

AwsElbLoadBalancerConnectionSettings::AwsElbLoadBalancerConnectionSettings(JsonView jsonValue) : 
    m_idleTimeout(0),
    m_idleTimeoutHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLoadBalancerConnectionSettings& AwsElbLoadBalancerConnectionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdleTimeout"))
  {
    m_idleTimeout = jsonValue.GetInteger("IdleTimeout");

    m_idleTimeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbLoadBalancerConnectionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_idleTimeoutHasBeenSet)
  {
   payload.WithInteger("IdleTimeout", m_idleTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
