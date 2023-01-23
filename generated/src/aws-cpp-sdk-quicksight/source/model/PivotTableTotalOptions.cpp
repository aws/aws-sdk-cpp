/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableTotalOptions.h>
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

PivotTableTotalOptions::PivotTableTotalOptions() : 
    m_rowSubtotalOptionsHasBeenSet(false),
    m_columnSubtotalOptionsHasBeenSet(false),
    m_rowTotalOptionsHasBeenSet(false),
    m_columnTotalOptionsHasBeenSet(false)
{
}

PivotTableTotalOptions::PivotTableTotalOptions(JsonView jsonValue) : 
    m_rowSubtotalOptionsHasBeenSet(false),
    m_columnSubtotalOptionsHasBeenSet(false),
    m_rowTotalOptionsHasBeenSet(false),
    m_columnTotalOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableTotalOptions& PivotTableTotalOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RowSubtotalOptions"))
  {
    m_rowSubtotalOptions = jsonValue.GetObject("RowSubtotalOptions");

    m_rowSubtotalOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnSubtotalOptions"))
  {
    m_columnSubtotalOptions = jsonValue.GetObject("ColumnSubtotalOptions");

    m_columnSubtotalOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowTotalOptions"))
  {
    m_rowTotalOptions = jsonValue.GetObject("RowTotalOptions");

    m_rowTotalOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnTotalOptions"))
  {
    m_columnTotalOptions = jsonValue.GetObject("ColumnTotalOptions");

    m_columnTotalOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableTotalOptions::Jsonize() const
{
  JsonValue payload;

  if(m_rowSubtotalOptionsHasBeenSet)
  {
   payload.WithObject("RowSubtotalOptions", m_rowSubtotalOptions.Jsonize());

  }

  if(m_columnSubtotalOptionsHasBeenSet)
  {
   payload.WithObject("ColumnSubtotalOptions", m_columnSubtotalOptions.Jsonize());

  }

  if(m_rowTotalOptionsHasBeenSet)
  {
   payload.WithObject("RowTotalOptions", m_rowTotalOptions.Jsonize());

  }

  if(m_columnTotalOptionsHasBeenSet)
  {
   payload.WithObject("ColumnTotalOptions", m_columnTotalOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
