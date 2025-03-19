/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputDestinationRequest::InputDestinationRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

InputDestinationRequest& InputDestinationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamName"))
  {
    m_streamName = jsonValue.GetString("streamName");
    m_streamNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("network"))
  {
    m_network = jsonValue.GetString("network");
    m_networkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkRoutes"))
  {
    Aws::Utils::Array<JsonView> networkRoutesJsonList = jsonValue.GetArray("networkRoutes");
    for(unsigned networkRoutesIndex = 0; networkRoutesIndex < networkRoutesJsonList.GetLength(); ++networkRoutesIndex)
    {
      m_networkRoutes.push_back(networkRoutesJsonList[networkRoutesIndex].AsObject());
    }
    m_networkRoutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("staticIpAddress"))
  {
    m_staticIpAddress = jsonValue.GetString("staticIpAddress");
    m_staticIpAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue InputDestinationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("streamName", m_streamName);

  }

  if(m_networkHasBeenSet)
  {
   payload.WithString("network", m_network);

  }

  if(m_networkRoutesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkRoutesJsonList(m_networkRoutes.size());
   for(unsigned networkRoutesIndex = 0; networkRoutesIndex < networkRoutesJsonList.GetLength(); ++networkRoutesIndex)
   {
     networkRoutesJsonList[networkRoutesIndex].AsObject(m_networkRoutes[networkRoutesIndex].Jsonize());
   }
   payload.WithArray("networkRoutes", std::move(networkRoutesJsonList));

  }

  if(m_staticIpAddressHasBeenSet)
  {
   payload.WithString("staticIpAddress", m_staticIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
