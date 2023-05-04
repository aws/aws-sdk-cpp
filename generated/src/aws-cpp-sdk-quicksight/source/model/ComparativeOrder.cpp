/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ComparativeOrder.h>
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

ComparativeOrder::ComparativeOrder() : 
    m_useOrdering(ColumnOrderingType::NOT_SET),
    m_useOrderingHasBeenSet(false),
    m_specifedOrderHasBeenSet(false),
    m_treatUndefinedSpecifiedValues(UndefinedSpecifiedValueType::NOT_SET),
    m_treatUndefinedSpecifiedValuesHasBeenSet(false)
{
}

ComparativeOrder::ComparativeOrder(JsonView jsonValue) : 
    m_useOrdering(ColumnOrderingType::NOT_SET),
    m_useOrderingHasBeenSet(false),
    m_specifedOrderHasBeenSet(false),
    m_treatUndefinedSpecifiedValues(UndefinedSpecifiedValueType::NOT_SET),
    m_treatUndefinedSpecifiedValuesHasBeenSet(false)
{
  *this = jsonValue;
}

ComparativeOrder& ComparativeOrder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UseOrdering"))
  {
    m_useOrdering = ColumnOrderingTypeMapper::GetColumnOrderingTypeForName(jsonValue.GetString("UseOrdering"));

    m_useOrderingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpecifedOrder"))
  {
    Aws::Utils::Array<JsonView> specifedOrderJsonList = jsonValue.GetArray("SpecifedOrder");
    for(unsigned specifedOrderIndex = 0; specifedOrderIndex < specifedOrderJsonList.GetLength(); ++specifedOrderIndex)
    {
      m_specifedOrder.push_back(specifedOrderJsonList[specifedOrderIndex].AsString());
    }
    m_specifedOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TreatUndefinedSpecifiedValues"))
  {
    m_treatUndefinedSpecifiedValues = UndefinedSpecifiedValueTypeMapper::GetUndefinedSpecifiedValueTypeForName(jsonValue.GetString("TreatUndefinedSpecifiedValues"));

    m_treatUndefinedSpecifiedValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ComparativeOrder::Jsonize() const
{
  JsonValue payload;

  if(m_useOrderingHasBeenSet)
  {
   payload.WithString("UseOrdering", ColumnOrderingTypeMapper::GetNameForColumnOrderingType(m_useOrdering));
  }

  if(m_specifedOrderHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> specifedOrderJsonList(m_specifedOrder.size());
   for(unsigned specifedOrderIndex = 0; specifedOrderIndex < specifedOrderJsonList.GetLength(); ++specifedOrderIndex)
   {
     specifedOrderJsonList[specifedOrderIndex].AsString(m_specifedOrder[specifedOrderIndex]);
   }
   payload.WithArray("SpecifedOrder", std::move(specifedOrderJsonList));

  }

  if(m_treatUndefinedSpecifiedValuesHasBeenSet)
  {
   payload.WithString("TreatUndefinedSpecifiedValues", UndefinedSpecifiedValueTypeMapper::GetNameForUndefinedSpecifiedValueType(m_treatUndefinedSpecifiedValues));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
