/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableAggregatedFieldWells.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TableAggregatedFieldWells::TableAggregatedFieldWells() : 
    m_groupByHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

TableAggregatedFieldWells::TableAggregatedFieldWells(JsonView jsonValue) : 
    m_groupByHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

TableAggregatedFieldWells& TableAggregatedFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupBy"))
  {
    Aws::Utils::Array<JsonView> groupByJsonList = jsonValue.GetArray("GroupBy");
    for(unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex)
    {
      m_groupBy.push_back(groupByJsonList[groupByIndex].AsObject());
    }
    m_groupByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue TableAggregatedFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_groupByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupByJsonList(m_groupBy.size());
   for(unsigned groupByIndex = 0; groupByIndex < groupByJsonList.GetLength(); ++groupByIndex)
   {
     groupByJsonList[groupByIndex].AsObject(m_groupBy[groupByIndex].Jsonize());
   }
   payload.WithArray("GroupBy", std::move(groupByJsonList));

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
