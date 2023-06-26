/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableSortBy.h>
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

PivotTableSortBy::PivotTableSortBy() : 
    m_fieldHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_dataPathHasBeenSet(false)
{
}

PivotTableSortBy::PivotTableSortBy(JsonView jsonValue) : 
    m_fieldHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_dataPathHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableSortBy& PivotTableSortBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Field"))
  {
    m_field = jsonValue.GetObject("Field");

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPath"))
  {
    m_dataPath = jsonValue.GetObject("DataPath");

    m_dataPathHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableSortBy::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithObject("Field", m_field.Jsonize());

  }

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_dataPathHasBeenSet)
  {
   payload.WithObject("DataPath", m_dataPath.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
