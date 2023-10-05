/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails.h>
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

AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails::AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails() : 
    m_routeHasBeenSet(false)
{
}

AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails::AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails(JsonView jsonValue) : 
    m_routeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails& AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Route"))
  {
    m_route = jsonValue.GetString("Route");

    m_routeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_routeHasBeenSet)
  {
   payload.WithString("Route", m_route);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
