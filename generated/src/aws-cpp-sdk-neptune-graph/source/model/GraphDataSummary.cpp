/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GraphDataSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

GraphDataSummary::GraphDataSummary() : 
    m_numNodes(0),
    m_numNodesHasBeenSet(false),
    m_numEdges(0),
    m_numEdgesHasBeenSet(false),
    m_numNodeLabels(0),
    m_numNodeLabelsHasBeenSet(false),
    m_numEdgeLabels(0),
    m_numEdgeLabelsHasBeenSet(false),
    m_nodeLabelsHasBeenSet(false),
    m_edgeLabelsHasBeenSet(false),
    m_numNodeProperties(0),
    m_numNodePropertiesHasBeenSet(false),
    m_numEdgeProperties(0),
    m_numEdgePropertiesHasBeenSet(false),
    m_nodePropertiesHasBeenSet(false),
    m_edgePropertiesHasBeenSet(false),
    m_totalNodePropertyValues(0),
    m_totalNodePropertyValuesHasBeenSet(false),
    m_totalEdgePropertyValues(0),
    m_totalEdgePropertyValuesHasBeenSet(false),
    m_nodeStructuresHasBeenSet(false),
    m_edgeStructuresHasBeenSet(false)
{
}

GraphDataSummary::GraphDataSummary(JsonView jsonValue) : 
    m_numNodes(0),
    m_numNodesHasBeenSet(false),
    m_numEdges(0),
    m_numEdgesHasBeenSet(false),
    m_numNodeLabels(0),
    m_numNodeLabelsHasBeenSet(false),
    m_numEdgeLabels(0),
    m_numEdgeLabelsHasBeenSet(false),
    m_nodeLabelsHasBeenSet(false),
    m_edgeLabelsHasBeenSet(false),
    m_numNodeProperties(0),
    m_numNodePropertiesHasBeenSet(false),
    m_numEdgeProperties(0),
    m_numEdgePropertiesHasBeenSet(false),
    m_nodePropertiesHasBeenSet(false),
    m_edgePropertiesHasBeenSet(false),
    m_totalNodePropertyValues(0),
    m_totalNodePropertyValuesHasBeenSet(false),
    m_totalEdgePropertyValues(0),
    m_totalEdgePropertyValuesHasBeenSet(false),
    m_nodeStructuresHasBeenSet(false),
    m_edgeStructuresHasBeenSet(false)
{
  *this = jsonValue;
}

GraphDataSummary& GraphDataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numNodes"))
  {
    m_numNodes = jsonValue.GetInt64("numNodes");

    m_numNodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numEdges"))
  {
    m_numEdges = jsonValue.GetInt64("numEdges");

    m_numEdgesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numNodeLabels"))
  {
    m_numNodeLabels = jsonValue.GetInt64("numNodeLabels");

    m_numNodeLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numEdgeLabels"))
  {
    m_numEdgeLabels = jsonValue.GetInt64("numEdgeLabels");

    m_numEdgeLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeLabels"))
  {
    Aws::Utils::Array<JsonView> nodeLabelsJsonList = jsonValue.GetArray("nodeLabels");
    for(unsigned nodeLabelsIndex = 0; nodeLabelsIndex < nodeLabelsJsonList.GetLength(); ++nodeLabelsIndex)
    {
      m_nodeLabels.push_back(nodeLabelsJsonList[nodeLabelsIndex].AsString());
    }
    m_nodeLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("edgeLabels"))
  {
    Aws::Utils::Array<JsonView> edgeLabelsJsonList = jsonValue.GetArray("edgeLabels");
    for(unsigned edgeLabelsIndex = 0; edgeLabelsIndex < edgeLabelsJsonList.GetLength(); ++edgeLabelsIndex)
    {
      m_edgeLabels.push_back(edgeLabelsJsonList[edgeLabelsIndex].AsString());
    }
    m_edgeLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numNodeProperties"))
  {
    m_numNodeProperties = jsonValue.GetInt64("numNodeProperties");

    m_numNodePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numEdgeProperties"))
  {
    m_numEdgeProperties = jsonValue.GetInt64("numEdgeProperties");

    m_numEdgePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeProperties"))
  {
    Aws::Utils::Array<JsonView> nodePropertiesJsonList = jsonValue.GetArray("nodeProperties");
    for(unsigned nodePropertiesIndex = 0; nodePropertiesIndex < nodePropertiesJsonList.GetLength(); ++nodePropertiesIndex)
    {
      Aws::Map<Aws::String, JsonView> longValuedMapJsonMap = nodePropertiesJsonList[nodePropertiesIndex].GetAllObjects();
      Aws::Map<Aws::String, long long> longValuedMapMap;
      for(auto& longValuedMapItem : longValuedMapJsonMap)
      {
        longValuedMapMap[longValuedMapItem.first] = longValuedMapItem.second.AsInt64();
      }
      m_nodeProperties.push_back(std::move(longValuedMapMap));
    }
    m_nodePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("edgeProperties"))
  {
    Aws::Utils::Array<JsonView> edgePropertiesJsonList = jsonValue.GetArray("edgeProperties");
    for(unsigned edgePropertiesIndex = 0; edgePropertiesIndex < edgePropertiesJsonList.GetLength(); ++edgePropertiesIndex)
    {
      Aws::Map<Aws::String, JsonView> longValuedMapJsonMap = edgePropertiesJsonList[edgePropertiesIndex].GetAllObjects();
      Aws::Map<Aws::String, long long> longValuedMapMap;
      for(auto& longValuedMapItem : longValuedMapJsonMap)
      {
        longValuedMapMap[longValuedMapItem.first] = longValuedMapItem.second.AsInt64();
      }
      m_edgeProperties.push_back(std::move(longValuedMapMap));
    }
    m_edgePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalNodePropertyValues"))
  {
    m_totalNodePropertyValues = jsonValue.GetInt64("totalNodePropertyValues");

    m_totalNodePropertyValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalEdgePropertyValues"))
  {
    m_totalEdgePropertyValues = jsonValue.GetInt64("totalEdgePropertyValues");

    m_totalEdgePropertyValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeStructures"))
  {
    Aws::Utils::Array<JsonView> nodeStructuresJsonList = jsonValue.GetArray("nodeStructures");
    for(unsigned nodeStructuresIndex = 0; nodeStructuresIndex < nodeStructuresJsonList.GetLength(); ++nodeStructuresIndex)
    {
      m_nodeStructures.push_back(nodeStructuresJsonList[nodeStructuresIndex].AsObject());
    }
    m_nodeStructuresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("edgeStructures"))
  {
    Aws::Utils::Array<JsonView> edgeStructuresJsonList = jsonValue.GetArray("edgeStructures");
    for(unsigned edgeStructuresIndex = 0; edgeStructuresIndex < edgeStructuresJsonList.GetLength(); ++edgeStructuresIndex)
    {
      m_edgeStructures.push_back(edgeStructuresJsonList[edgeStructuresIndex].AsObject());
    }
    m_edgeStructuresHasBeenSet = true;
  }

  return *this;
}

JsonValue GraphDataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_numNodesHasBeenSet)
  {
   payload.WithInt64("numNodes", m_numNodes);

  }

  if(m_numEdgesHasBeenSet)
  {
   payload.WithInt64("numEdges", m_numEdges);

  }

  if(m_numNodeLabelsHasBeenSet)
  {
   payload.WithInt64("numNodeLabels", m_numNodeLabels);

  }

  if(m_numEdgeLabelsHasBeenSet)
  {
   payload.WithInt64("numEdgeLabels", m_numEdgeLabels);

  }

  if(m_nodeLabelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeLabelsJsonList(m_nodeLabels.size());
   for(unsigned nodeLabelsIndex = 0; nodeLabelsIndex < nodeLabelsJsonList.GetLength(); ++nodeLabelsIndex)
   {
     nodeLabelsJsonList[nodeLabelsIndex].AsString(m_nodeLabels[nodeLabelsIndex]);
   }
   payload.WithArray("nodeLabels", std::move(nodeLabelsJsonList));

  }

  if(m_edgeLabelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> edgeLabelsJsonList(m_edgeLabels.size());
   for(unsigned edgeLabelsIndex = 0; edgeLabelsIndex < edgeLabelsJsonList.GetLength(); ++edgeLabelsIndex)
   {
     edgeLabelsJsonList[edgeLabelsIndex].AsString(m_edgeLabels[edgeLabelsIndex]);
   }
   payload.WithArray("edgeLabels", std::move(edgeLabelsJsonList));

  }

  if(m_numNodePropertiesHasBeenSet)
  {
   payload.WithInt64("numNodeProperties", m_numNodeProperties);

  }

  if(m_numEdgePropertiesHasBeenSet)
  {
   payload.WithInt64("numEdgeProperties", m_numEdgeProperties);

  }

  if(m_nodePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodePropertiesJsonList(m_nodeProperties.size());
   for(unsigned nodePropertiesIndex = 0; nodePropertiesIndex < nodePropertiesJsonList.GetLength(); ++nodePropertiesIndex)
   {
     JsonValue longValuedMapJsonMap;
     for(auto& longValuedMapItem : m_nodeProperties[nodePropertiesIndex])
     {
       longValuedMapJsonMap.WithInt64(longValuedMapItem.first, longValuedMapItem.second);
     }
     nodePropertiesJsonList[nodePropertiesIndex].AsObject(std::move(longValuedMapJsonMap));
   }
   payload.WithArray("nodeProperties", std::move(nodePropertiesJsonList));

  }

  if(m_edgePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> edgePropertiesJsonList(m_edgeProperties.size());
   for(unsigned edgePropertiesIndex = 0; edgePropertiesIndex < edgePropertiesJsonList.GetLength(); ++edgePropertiesIndex)
   {
     JsonValue longValuedMapJsonMap;
     for(auto& longValuedMapItem : m_edgeProperties[edgePropertiesIndex])
     {
       longValuedMapJsonMap.WithInt64(longValuedMapItem.first, longValuedMapItem.second);
     }
     edgePropertiesJsonList[edgePropertiesIndex].AsObject(std::move(longValuedMapJsonMap));
   }
   payload.WithArray("edgeProperties", std::move(edgePropertiesJsonList));

  }

  if(m_totalNodePropertyValuesHasBeenSet)
  {
   payload.WithInt64("totalNodePropertyValues", m_totalNodePropertyValues);

  }

  if(m_totalEdgePropertyValuesHasBeenSet)
  {
   payload.WithInt64("totalEdgePropertyValues", m_totalEdgePropertyValues);

  }

  if(m_nodeStructuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeStructuresJsonList(m_nodeStructures.size());
   for(unsigned nodeStructuresIndex = 0; nodeStructuresIndex < nodeStructuresJsonList.GetLength(); ++nodeStructuresIndex)
   {
     nodeStructuresJsonList[nodeStructuresIndex].AsObject(m_nodeStructures[nodeStructuresIndex].Jsonize());
   }
   payload.WithArray("nodeStructures", std::move(nodeStructuresJsonList));

  }

  if(m_edgeStructuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> edgeStructuresJsonList(m_edgeStructures.size());
   for(unsigned edgeStructuresIndex = 0; edgeStructuresIndex < edgeStructuresJsonList.GetLength(); ++edgeStructuresIndex)
   {
     edgeStructuresJsonList[edgeStructuresIndex].AsObject(m_edgeStructures[edgeStructuresIndex].Jsonize());
   }
   payload.WithArray("edgeStructures", std::move(edgeStructuresJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
