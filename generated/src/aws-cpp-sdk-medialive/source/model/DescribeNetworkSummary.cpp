/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeNetworkSummary.h>
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

DescribeNetworkSummary::DescribeNetworkSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribeNetworkSummary& DescribeNetworkSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associatedClusterIds"))
  {
    Aws::Utils::Array<JsonView> associatedClusterIdsJsonList = jsonValue.GetArray("associatedClusterIds");
    for(unsigned associatedClusterIdsIndex = 0; associatedClusterIdsIndex < associatedClusterIdsJsonList.GetLength(); ++associatedClusterIdsIndex)
    {
      m_associatedClusterIds.push_back(associatedClusterIdsJsonList[associatedClusterIdsIndex].AsString());
    }
    m_associatedClusterIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipPools"))
  {
    Aws::Utils::Array<JsonView> ipPoolsJsonList = jsonValue.GetArray("ipPools");
    for(unsigned ipPoolsIndex = 0; ipPoolsIndex < ipPoolsJsonList.GetLength(); ++ipPoolsIndex)
    {
      m_ipPools.push_back(ipPoolsJsonList[ipPoolsIndex].AsObject());
    }
    m_ipPoolsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("routes"))
  {
    Aws::Utils::Array<JsonView> routesJsonList = jsonValue.GetArray("routes");
    for(unsigned routesIndex = 0; routesIndex < routesJsonList.GetLength(); ++routesIndex)
    {
      m_routes.push_back(routesJsonList[routesIndex].AsObject());
    }
    m_routesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = NetworkStateMapper::GetNetworkStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeNetworkSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_associatedClusterIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedClusterIdsJsonList(m_associatedClusterIds.size());
   for(unsigned associatedClusterIdsIndex = 0; associatedClusterIdsIndex < associatedClusterIdsJsonList.GetLength(); ++associatedClusterIdsIndex)
   {
     associatedClusterIdsJsonList[associatedClusterIdsIndex].AsString(m_associatedClusterIds[associatedClusterIdsIndex]);
   }
   payload.WithArray("associatedClusterIds", std::move(associatedClusterIdsJsonList));

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_ipPoolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipPoolsJsonList(m_ipPools.size());
   for(unsigned ipPoolsIndex = 0; ipPoolsIndex < ipPoolsJsonList.GetLength(); ++ipPoolsIndex)
   {
     ipPoolsJsonList[ipPoolsIndex].AsObject(m_ipPools[ipPoolsIndex].Jsonize());
   }
   payload.WithArray("ipPools", std::move(ipPoolsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_routesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routesJsonList(m_routes.size());
   for(unsigned routesIndex = 0; routesIndex < routesJsonList.GetLength(); ++routesIndex)
   {
     routesJsonList[routesIndex].AsObject(m_routes[routesIndex].Jsonize());
   }
   payload.WithArray("routes", std::move(routesJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", NetworkStateMapper::GetNameForNetworkState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
