/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableAggregatedFieldWells.h>
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

PivotTableAggregatedFieldWells::PivotTableAggregatedFieldWells() : 
    m_rowsHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

PivotTableAggregatedFieldWells::PivotTableAggregatedFieldWells(JsonView jsonValue) : 
    m_rowsHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableAggregatedFieldWells& PivotTableAggregatedFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Rows"))
  {
    Aws::Utils::Array<JsonView> rowsJsonList = jsonValue.GetArray("Rows");
    for(unsigned rowsIndex = 0; rowsIndex < rowsJsonList.GetLength(); ++rowsIndex)
    {
      m_rows.push_back(rowsJsonList[rowsIndex].AsObject());
    }
    m_rowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Columns"))
  {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("Columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      m_columns.push_back(columnsJsonList[columnsIndex].AsObject());
    }
    m_columnsHasBeenSet = true;
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

JsonValue PivotTableAggregatedFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_rowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowsJsonList(m_rows.size());
   for(unsigned rowsIndex = 0; rowsIndex < rowsJsonList.GetLength(); ++rowsIndex)
   {
     rowsJsonList[rowsIndex].AsObject(m_rows[rowsIndex].Jsonize());
   }
   payload.WithArray("Rows", std::move(rowsJsonList));

  }

  if(m_columnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
   for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
   {
     columnsJsonList[columnsIndex].AsObject(m_columns[columnsIndex].Jsonize());
   }
   payload.WithArray("Columns", std::move(columnsJsonList));

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
