/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/NodeStructure.h>
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

NodeStructure::NodeStructure() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_nodePropertiesHasBeenSet(false),
    m_distinctOutgoingEdgeLabelsHasBeenSet(false)
{
}

NodeStructure::NodeStructure(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_nodePropertiesHasBeenSet(false),
    m_distinctOutgoingEdgeLabelsHasBeenSet(false)
{
  *this = jsonValue;
}

NodeStructure& NodeStructure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeProperties"))
  {
    Aws::Utils::Array<JsonView> nodePropertiesJsonList = jsonValue.GetArray("nodeProperties");
    for(unsigned nodePropertiesIndex = 0; nodePropertiesIndex < nodePropertiesJsonList.GetLength(); ++nodePropertiesIndex)
    {
      m_nodeProperties.push_back(nodePropertiesJsonList[nodePropertiesIndex].AsString());
    }
    m_nodePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("distinctOutgoingEdgeLabels"))
  {
    Aws::Utils::Array<JsonView> distinctOutgoingEdgeLabelsJsonList = jsonValue.GetArray("distinctOutgoingEdgeLabels");
    for(unsigned distinctOutgoingEdgeLabelsIndex = 0; distinctOutgoingEdgeLabelsIndex < distinctOutgoingEdgeLabelsJsonList.GetLength(); ++distinctOutgoingEdgeLabelsIndex)
    {
      m_distinctOutgoingEdgeLabels.push_back(distinctOutgoingEdgeLabelsJsonList[distinctOutgoingEdgeLabelsIndex].AsString());
    }
    m_distinctOutgoingEdgeLabelsHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeStructure::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  if(m_nodePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodePropertiesJsonList(m_nodeProperties.size());
   for(unsigned nodePropertiesIndex = 0; nodePropertiesIndex < nodePropertiesJsonList.GetLength(); ++nodePropertiesIndex)
   {
     nodePropertiesJsonList[nodePropertiesIndex].AsString(m_nodeProperties[nodePropertiesIndex]);
   }
   payload.WithArray("nodeProperties", std::move(nodePropertiesJsonList));

  }

  if(m_distinctOutgoingEdgeLabelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> distinctOutgoingEdgeLabelsJsonList(m_distinctOutgoingEdgeLabels.size());
   for(unsigned distinctOutgoingEdgeLabelsIndex = 0; distinctOutgoingEdgeLabelsIndex < distinctOutgoingEdgeLabelsJsonList.GetLength(); ++distinctOutgoingEdgeLabelsIndex)
   {
     distinctOutgoingEdgeLabelsJsonList[distinctOutgoingEdgeLabelsIndex].AsString(m_distinctOutgoingEdgeLabels[distinctOutgoingEdgeLabelsIndex]);
   }
   payload.WithArray("distinctOutgoingEdgeLabels", std::move(distinctOutgoingEdgeLabelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
