/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ClusterPendingUpdates.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ClusterPendingUpdates::ClusterPendingUpdates() : 
    m_reshardingHasBeenSet(false),
    m_aCLsHasBeenSet(false),
    m_serviceUpdatesHasBeenSet(false)
{
}

ClusterPendingUpdates::ClusterPendingUpdates(JsonView jsonValue) : 
    m_reshardingHasBeenSet(false),
    m_aCLsHasBeenSet(false),
    m_serviceUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterPendingUpdates& ClusterPendingUpdates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Resharding"))
  {
    m_resharding = jsonValue.GetObject("Resharding");

    m_reshardingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ACLs"))
  {
    m_aCLs = jsonValue.GetObject("ACLs");

    m_aCLsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceUpdates"))
  {
    Aws::Utils::Array<JsonView> serviceUpdatesJsonList = jsonValue.GetArray("ServiceUpdates");
    for(unsigned serviceUpdatesIndex = 0; serviceUpdatesIndex < serviceUpdatesJsonList.GetLength(); ++serviceUpdatesIndex)
    {
      m_serviceUpdates.push_back(serviceUpdatesJsonList[serviceUpdatesIndex].AsObject());
    }
    m_serviceUpdatesHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterPendingUpdates::Jsonize() const
{
  JsonValue payload;

  if(m_reshardingHasBeenSet)
  {
   payload.WithObject("Resharding", m_resharding.Jsonize());

  }

  if(m_aCLsHasBeenSet)
  {
   payload.WithObject("ACLs", m_aCLs.Jsonize());

  }

  if(m_serviceUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceUpdatesJsonList(m_serviceUpdates.size());
   for(unsigned serviceUpdatesIndex = 0; serviceUpdatesIndex < serviceUpdatesJsonList.GetLength(); ++serviceUpdatesIndex)
   {
     serviceUpdatesJsonList[serviceUpdatesIndex].AsObject(m_serviceUpdates[serviceUpdatesIndex].Jsonize());
   }
   payload.WithArray("ServiceUpdates", std::move(serviceUpdatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
