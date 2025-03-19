/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDestination.h>
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

InputDestination::InputDestination(JsonView jsonValue)
{
  *this = jsonValue;
}

InputDestination& InputDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ip"))
  {
    m_ip = jsonValue.GetString("ip");
    m_ipHasBeenSet = true;
  }
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetString("port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpc"))
  {
    m_vpc = jsonValue.GetObject("vpc");
    m_vpcHasBeenSet = true;
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
  return *this;
}

JsonValue InputDestination::Jsonize() const
{
  JsonValue payload;

  if(m_ipHasBeenSet)
  {
   payload.WithString("ip", m_ip);

  }

  if(m_portHasBeenSet)
  {
   payload.WithString("port", m_port);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_vpcHasBeenSet)
  {
   payload.WithObject("vpc", m_vpc.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
