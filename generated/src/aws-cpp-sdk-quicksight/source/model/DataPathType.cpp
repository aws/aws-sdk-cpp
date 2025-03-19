/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataPathType.h>
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

DataPathType::DataPathType(JsonView jsonValue)
{
  *this = jsonValue;
}

DataPathType& DataPathType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PivotTableDataPathType"))
  {
    m_pivotTableDataPathType = PivotTableDataPathTypeMapper::GetPivotTableDataPathTypeForName(jsonValue.GetString("PivotTableDataPathType"));
    m_pivotTableDataPathTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataPathType::Jsonize() const
{
  JsonValue payload;

  if(m_pivotTableDataPathTypeHasBeenSet)
  {
   payload.WithString("PivotTableDataPathType", PivotTableDataPathTypeMapper::GetNameForPivotTableDataPathType(m_pivotTableDataPathType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
