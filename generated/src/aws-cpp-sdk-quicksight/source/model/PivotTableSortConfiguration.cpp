/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableSortConfiguration.h>
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

PivotTableSortConfiguration::PivotTableSortConfiguration() : 
    m_fieldSortOptionsHasBeenSet(false)
{
}

PivotTableSortConfiguration::PivotTableSortConfiguration(JsonView jsonValue) : 
    m_fieldSortOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableSortConfiguration& PivotTableSortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldSortOptions"))
  {
    Aws::Utils::Array<JsonView> fieldSortOptionsJsonList = jsonValue.GetArray("FieldSortOptions");
    for(unsigned fieldSortOptionsIndex = 0; fieldSortOptionsIndex < fieldSortOptionsJsonList.GetLength(); ++fieldSortOptionsIndex)
    {
      m_fieldSortOptions.push_back(fieldSortOptionsJsonList[fieldSortOptionsIndex].AsObject());
    }
    m_fieldSortOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableSortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldSortOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldSortOptionsJsonList(m_fieldSortOptions.size());
   for(unsigned fieldSortOptionsIndex = 0; fieldSortOptionsIndex < fieldSortOptionsJsonList.GetLength(); ++fieldSortOptionsIndex)
   {
     fieldSortOptionsJsonList[fieldSortOptionsIndex].AsObject(m_fieldSortOptions[fieldSortOptionsIndex].Jsonize());
   }
   payload.WithArray("FieldSortOptions", std::move(fieldSortOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
