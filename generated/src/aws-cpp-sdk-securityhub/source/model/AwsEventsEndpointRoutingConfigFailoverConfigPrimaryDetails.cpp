/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails.h>
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

AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails::AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails() : 
    m_healthCheckHasBeenSet(false)
{
}

AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails::AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails(JsonView jsonValue) : 
    m_healthCheckHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails& AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HealthCheck"))
  {
    m_healthCheck = jsonValue.GetString("HealthCheck");

    m_healthCheckHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_healthCheckHasBeenSet)
  {
   payload.WithString("HealthCheck", m_healthCheck);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
