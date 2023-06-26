/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LookbackWindow.h>
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

LookbackWindow::LookbackWindow() : 
    m_columnNameHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_sizeUnit(LookbackWindowSizeUnit::NOT_SET),
    m_sizeUnitHasBeenSet(false)
{
}

LookbackWindow::LookbackWindow(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_sizeUnit(LookbackWindowSizeUnit::NOT_SET),
    m_sizeUnitHasBeenSet(false)
{
  *this = jsonValue;
}

LookbackWindow& LookbackWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInt64("Size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeUnit"))
  {
    m_sizeUnit = LookbackWindowSizeUnitMapper::GetLookbackWindowSizeUnitForName(jsonValue.GetString("SizeUnit"));

    m_sizeUnitHasBeenSet = true;
  }

  return *this;
}

JsonValue LookbackWindow::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInt64("Size", m_size);

  }

  if(m_sizeUnitHasBeenSet)
  {
   payload.WithString("SizeUnit", LookbackWindowSizeUnitMapper::GetNameForLookbackWindowSizeUnit(m_sizeUnit));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
