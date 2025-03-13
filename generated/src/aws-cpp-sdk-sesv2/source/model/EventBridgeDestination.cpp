/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/EventBridgeDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

EventBridgeDestination::EventBridgeDestination(JsonView jsonValue)
{
  *this = jsonValue;
}

EventBridgeDestination& EventBridgeDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventBusArn"))
  {
    m_eventBusArn = jsonValue.GetString("EventBusArn");
    m_eventBusArnHasBeenSet = true;
  }
  return *this;
}

JsonValue EventBridgeDestination::Jsonize() const
{
  JsonValue payload;

  if(m_eventBusArnHasBeenSet)
  {
   payload.WithString("EventBusArn", m_eventBusArn);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
