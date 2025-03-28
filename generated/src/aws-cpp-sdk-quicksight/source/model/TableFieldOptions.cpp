/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableFieldOptions.h>
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

TableFieldOptions::TableFieldOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

TableFieldOptions& TableFieldOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectedFieldOptions"))
  {
    Aws::Utils::Array<JsonView> selectedFieldOptionsJsonList = jsonValue.GetArray("SelectedFieldOptions");
    for(unsigned selectedFieldOptionsIndex = 0; selectedFieldOptionsIndex < selectedFieldOptionsJsonList.GetLength(); ++selectedFieldOptionsIndex)
    {
      m_selectedFieldOptions.push_back(selectedFieldOptionsJsonList[selectedFieldOptionsIndex].AsObject());
    }
    m_selectedFieldOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Order"))
  {
    Aws::Utils::Array<JsonView> orderJsonList = jsonValue.GetArray("Order");
    for(unsigned orderIndex = 0; orderIndex < orderJsonList.GetLength(); ++orderIndex)
    {
      m_order.push_back(orderJsonList[orderIndex].AsString());
    }
    m_orderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PinnedFieldOptions"))
  {
    m_pinnedFieldOptions = jsonValue.GetObject("PinnedFieldOptions");
    m_pinnedFieldOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransposedTableOptions"))
  {
    Aws::Utils::Array<JsonView> transposedTableOptionsJsonList = jsonValue.GetArray("TransposedTableOptions");
    for(unsigned transposedTableOptionsIndex = 0; transposedTableOptionsIndex < transposedTableOptionsJsonList.GetLength(); ++transposedTableOptionsIndex)
    {
      m_transposedTableOptions.push_back(transposedTableOptionsJsonList[transposedTableOptionsIndex].AsObject());
    }
    m_transposedTableOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue TableFieldOptions::Jsonize() const
{
  JsonValue payload;

  if(m_selectedFieldOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedFieldOptionsJsonList(m_selectedFieldOptions.size());
   for(unsigned selectedFieldOptionsIndex = 0; selectedFieldOptionsIndex < selectedFieldOptionsJsonList.GetLength(); ++selectedFieldOptionsIndex)
   {
     selectedFieldOptionsJsonList[selectedFieldOptionsIndex].AsObject(m_selectedFieldOptions[selectedFieldOptionsIndex].Jsonize());
   }
   payload.WithArray("SelectedFieldOptions", std::move(selectedFieldOptionsJsonList));

  }

  if(m_orderHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orderJsonList(m_order.size());
   for(unsigned orderIndex = 0; orderIndex < orderJsonList.GetLength(); ++orderIndex)
   {
     orderJsonList[orderIndex].AsString(m_order[orderIndex]);
   }
   payload.WithArray("Order", std::move(orderJsonList));

  }

  if(m_pinnedFieldOptionsHasBeenSet)
  {
   payload.WithObject("PinnedFieldOptions", m_pinnedFieldOptions.Jsonize());

  }

  if(m_transposedTableOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transposedTableOptionsJsonList(m_transposedTableOptions.size());
   for(unsigned transposedTableOptionsIndex = 0; transposedTableOptionsIndex < transposedTableOptionsJsonList.GetLength(); ++transposedTableOptionsIndex)
   {
     transposedTableOptionsJsonList[transposedTableOptionsIndex].AsObject(m_transposedTableOptions[transposedTableOptionsIndex].Jsonize());
   }
   payload.WithArray("TransposedTableOptions", std::move(transposedTableOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
