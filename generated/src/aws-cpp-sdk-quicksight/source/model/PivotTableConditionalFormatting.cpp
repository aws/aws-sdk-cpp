/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableConditionalFormatting.h>
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

PivotTableConditionalFormatting::PivotTableConditionalFormatting() : 
    m_conditionalFormattingOptionsHasBeenSet(false)
{
}

PivotTableConditionalFormatting::PivotTableConditionalFormatting(JsonView jsonValue) : 
    m_conditionalFormattingOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableConditionalFormatting& PivotTableConditionalFormatting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConditionalFormattingOptions"))
  {
    Aws::Utils::Array<JsonView> conditionalFormattingOptionsJsonList = jsonValue.GetArray("ConditionalFormattingOptions");
    for(unsigned conditionalFormattingOptionsIndex = 0; conditionalFormattingOptionsIndex < conditionalFormattingOptionsJsonList.GetLength(); ++conditionalFormattingOptionsIndex)
    {
      m_conditionalFormattingOptions.push_back(conditionalFormattingOptionsJsonList[conditionalFormattingOptionsIndex].AsObject());
    }
    m_conditionalFormattingOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableConditionalFormatting::Jsonize() const
{
  JsonValue payload;

  if(m_conditionalFormattingOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionalFormattingOptionsJsonList(m_conditionalFormattingOptions.size());
   for(unsigned conditionalFormattingOptionsIndex = 0; conditionalFormattingOptionsIndex < conditionalFormattingOptionsJsonList.GetLength(); ++conditionalFormattingOptionsIndex)
   {
     conditionalFormattingOptionsJsonList[conditionalFormattingOptionsIndex].AsObject(m_conditionalFormattingOptions[conditionalFormattingOptionsIndex].Jsonize());
   }
   payload.WithArray("ConditionalFormattingOptions", std::move(conditionalFormattingOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
