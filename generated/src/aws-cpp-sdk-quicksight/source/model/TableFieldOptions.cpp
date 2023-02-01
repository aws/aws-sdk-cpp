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

TableFieldOptions::TableFieldOptions() : 
    m_selectedFieldOptionsHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

TableFieldOptions::TableFieldOptions(JsonView jsonValue) : 
    m_selectedFieldOptionsHasBeenSet(false),
    m_orderHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
