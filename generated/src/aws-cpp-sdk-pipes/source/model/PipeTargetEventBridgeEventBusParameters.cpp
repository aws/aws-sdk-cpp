/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetEventBridgeEventBusParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeTargetEventBridgeEventBusParameters::PipeTargetEventBridgeEventBusParameters() : 
    m_detailTypeHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_timeHasBeenSet(false)
{
}

PipeTargetEventBridgeEventBusParameters::PipeTargetEventBridgeEventBusParameters(JsonView jsonValue) : 
    m_detailTypeHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_timeHasBeenSet(false)
{
  *this = jsonValue;
}

PipeTargetEventBridgeEventBusParameters& PipeTargetEventBridgeEventBusParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DetailType"))
  {
    m_detailType = jsonValue.GetString("DetailType");

    m_detailTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointId"))
  {
    m_endpointId = jsonValue.GetString("EndpointId");

    m_endpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetString("Time");

    m_timeHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeTargetEventBridgeEventBusParameters::Jsonize() const
{
  JsonValue payload;

  if(m_detailTypeHasBeenSet)
  {
   payload.WithString("DetailType", m_detailType);

  }

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_timeHasBeenSet)
  {
   payload.WithString("Time", m_time);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
