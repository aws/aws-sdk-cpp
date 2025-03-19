/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/NodeAggregator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

NodeAggregator::NodeAggregator(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeAggregator& NodeAggregator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AggregatorType"))
  {
    m_aggregatorType = NodeAggregatorTypeMapper::GetNodeAggregatorTypeForName(jsonValue.GetString("AggregatorType"));
    m_aggregatorTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = NodeTypeNameMapper::GetNodeTypeNameForName(jsonValue.GetString("TypeName"));
    m_typeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = NodeAttributeNameMapper::GetNodeAttributeNameForName(jsonValue.GetString("AttributeName"));
    m_attributeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Aggregators"))
  {
    Aws::Utils::Array<JsonView> aggregatorsJsonList = jsonValue.GetArray("Aggregators");
    for(unsigned aggregatorsIndex = 0; aggregatorsIndex < aggregatorsJsonList.GetLength(); ++aggregatorsIndex)
    {
      m_aggregators.push_back(aggregatorsJsonList[aggregatorsIndex].AsObject());
    }
    m_aggregatorsHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeAggregator::Jsonize() const
{
  JsonValue payload;

  if(m_aggregatorTypeHasBeenSet)
  {
   payload.WithString("AggregatorType", NodeAggregatorTypeMapper::GetNameForNodeAggregatorType(m_aggregatorType));
  }

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", NodeTypeNameMapper::GetNameForNodeTypeName(m_typeName));
  }

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", NodeAttributeNameMapper::GetNameForNodeAttributeName(m_attributeName));
  }

  if(m_aggregatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregatorsJsonList(m_aggregators.size());
   for(unsigned aggregatorsIndex = 0; aggregatorsIndex < aggregatorsJsonList.GetLength(); ++aggregatorsIndex)
   {
     aggregatorsJsonList[aggregatorsIndex].AsObject(m_aggregators[aggregatorsIndex].Jsonize());
   }
   payload.WithArray("Aggregators", std::move(aggregatorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
