/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/Shard.h>
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

Shard::Shard() : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false)
{
}

Shard::Shard(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false)
{
  *this = jsonValue;
}

Shard& Shard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Slots"))
  {
    m_slots = jsonValue.GetString("Slots");

    m_slotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Nodes"))
  {
    Aws::Utils::Array<JsonView> nodesJsonList = jsonValue.GetArray("Nodes");
    for(unsigned nodesIndex = 0; nodesIndex < nodesJsonList.GetLength(); ++nodesIndex)
    {
      m_nodes.push_back(nodesJsonList[nodesIndex].AsObject());
    }
    m_nodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfNodes"))
  {
    m_numberOfNodes = jsonValue.GetInteger("NumberOfNodes");

    m_numberOfNodesHasBeenSet = true;
  }

  return *this;
}

JsonValue Shard::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_slotsHasBeenSet)
  {
   payload.WithString("Slots", m_slots);

  }

  if(m_nodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodesJsonList(m_nodes.size());
   for(unsigned nodesIndex = 0; nodesIndex < nodesJsonList.GetLength(); ++nodesIndex)
   {
     nodesJsonList[nodesIndex].AsObject(m_nodes[nodesIndex].Jsonize());
   }
   payload.WithArray("Nodes", std::move(nodesJsonList));

  }

  if(m_numberOfNodesHasBeenSet)
  {
   payload.WithInteger("NumberOfNodes", m_numberOfNodes);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
