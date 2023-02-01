/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CategoryDrillDownFilter.h>
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

CategoryDrillDownFilter::CategoryDrillDownFilter() : 
    m_columnHasBeenSet(false),
    m_categoryValuesHasBeenSet(false)
{
}

CategoryDrillDownFilter::CategoryDrillDownFilter(JsonView jsonValue) : 
    m_columnHasBeenSet(false),
    m_categoryValuesHasBeenSet(false)
{
  *this = jsonValue;
}

CategoryDrillDownFilter& CategoryDrillDownFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryValues"))
  {
    Aws::Utils::Array<JsonView> categoryValuesJsonList = jsonValue.GetArray("CategoryValues");
    for(unsigned categoryValuesIndex = 0; categoryValuesIndex < categoryValuesJsonList.GetLength(); ++categoryValuesIndex)
    {
      m_categoryValues.push_back(categoryValuesJsonList[categoryValuesIndex].AsString());
    }
    m_categoryValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue CategoryDrillDownFilter::Jsonize() const
{
  JsonValue payload;

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_categoryValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoryValuesJsonList(m_categoryValues.size());
   for(unsigned categoryValuesIndex = 0; categoryValuesIndex < categoryValuesJsonList.GetLength(); ++categoryValuesIndex)
   {
     categoryValuesJsonList[categoryValuesIndex].AsString(m_categoryValues[categoryValuesIndex]);
   }
   payload.WithArray("CategoryValues", std::move(categoryValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
