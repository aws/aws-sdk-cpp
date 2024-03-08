/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEventsEndpointEventBusesDetails.h>
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

AwsEventsEndpointEventBusesDetails::AwsEventsEndpointEventBusesDetails() : 
    m_eventBusArnHasBeenSet(false)
{
}

AwsEventsEndpointEventBusesDetails::AwsEventsEndpointEventBusesDetails(JsonView jsonValue) : 
    m_eventBusArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEventsEndpointEventBusesDetails& AwsEventsEndpointEventBusesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventBusArn"))
  {
    m_eventBusArn = jsonValue.GetString("EventBusArn");

    m_eventBusArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEventsEndpointEventBusesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_eventBusArnHasBeenSet)
  {
   payload.WithString("EventBusArn", m_eventBusArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
