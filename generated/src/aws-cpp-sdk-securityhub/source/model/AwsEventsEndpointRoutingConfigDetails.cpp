/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEventsEndpointRoutingConfigDetails.h>
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

AwsEventsEndpointRoutingConfigDetails::AwsEventsEndpointRoutingConfigDetails() : 
    m_failoverConfigHasBeenSet(false)
{
}

AwsEventsEndpointRoutingConfigDetails::AwsEventsEndpointRoutingConfigDetails(JsonView jsonValue) : 
    m_failoverConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEventsEndpointRoutingConfigDetails& AwsEventsEndpointRoutingConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailoverConfig"))
  {
    m_failoverConfig = jsonValue.GetObject("FailoverConfig");

    m_failoverConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEventsEndpointRoutingConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_failoverConfigHasBeenSet)
  {
   payload.WithObject("FailoverConfig", m_failoverConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
