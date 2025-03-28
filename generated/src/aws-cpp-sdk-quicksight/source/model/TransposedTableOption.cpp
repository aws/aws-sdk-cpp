/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TransposedTableOption.h>
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

TransposedTableOption::TransposedTableOption(JsonView jsonValue)
{
  *this = jsonValue;
}

TransposedTableOption& TransposedTableOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnIndex"))
  {
    m_columnIndex = jsonValue.GetInteger("ColumnIndex");
    m_columnIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColumnWidth"))
  {
    m_columnWidth = jsonValue.GetString("ColumnWidth");
    m_columnWidthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColumnType"))
  {
    m_columnType = TransposedColumnTypeMapper::GetTransposedColumnTypeForName(jsonValue.GetString("ColumnType"));
    m_columnTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue TransposedTableOption::Jsonize() const
{
  JsonValue payload;

  if(m_columnIndexHasBeenSet)
  {
   payload.WithInteger("ColumnIndex", m_columnIndex);

  }

  if(m_columnWidthHasBeenSet)
  {
   payload.WithString("ColumnWidth", m_columnWidth);

  }

  if(m_columnTypeHasBeenSet)
  {
   payload.WithString("ColumnType", TransposedColumnTypeMapper::GetNameForTransposedColumnType(m_columnType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
