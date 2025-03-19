/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableStyleTarget.h>
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

TableStyleTarget::TableStyleTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

TableStyleTarget& TableStyleTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CellType"))
  {
    m_cellType = StyledCellTypeMapper::GetStyledCellTypeForName(jsonValue.GetString("CellType"));
    m_cellTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue TableStyleTarget::Jsonize() const
{
  JsonValue payload;

  if(m_cellTypeHasBeenSet)
  {
   payload.WithString("CellType", StyledCellTypeMapper::GetNameForStyledCellType(m_cellType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
