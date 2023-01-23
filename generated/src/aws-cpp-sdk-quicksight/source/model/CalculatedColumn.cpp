/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CalculatedColumn.h>
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

CalculatedColumn::CalculatedColumn() : 
    m_columnNameHasBeenSet(false),
    m_columnIdHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
}

CalculatedColumn::CalculatedColumn(JsonView jsonValue) : 
    m_columnNameHasBeenSet(false),
    m_columnIdHasBeenSet(false),
    m_expressionHasBeenSet(false)
{
  *this = jsonValue;
}

CalculatedColumn& CalculatedColumn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnId"))
  {
    m_columnId = jsonValue.GetString("ColumnId");

    m_columnIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculatedColumn::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  if(m_columnIdHasBeenSet)
  {
   payload.WithString("ColumnId", m_columnId);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
