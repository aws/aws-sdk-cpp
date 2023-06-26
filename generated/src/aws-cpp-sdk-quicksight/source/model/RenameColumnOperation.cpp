/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RenameColumnOperation.h>
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

RenameColumnOperation::RenameColumnOperation() : 
    m_columnNameHasBeenSet(false),
    m_newColumnNameHasBeenSet(false)
{
}

RenameColumnOperation::RenameColumnOperation(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_newColumnNameHasBeenSet(false)
{
  *this = jsonValue;
}

RenameColumnOperation& RenameColumnOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewColumnName"))
  {
    m_newColumnName = jsonValue.GetString("NewColumnName");

    m_newColumnNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RenameColumnOperation::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_newColumnNameHasBeenSet)
  {
   payload.WithString("NewColumnName", m_newColumnName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
