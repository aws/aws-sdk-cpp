/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableConditionalFormattingOption.h>
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

TableConditionalFormattingOption::TableConditionalFormattingOption() : 
    m_cellHasBeenSet(false),
    m_rowHasBeenSet(false)
{
}

TableConditionalFormattingOption::TableConditionalFormattingOption(JsonView jsonValue) : 
    m_cellHasBeenSet(false),
    m_rowHasBeenSet(false)
{
  *this = jsonValue;
}

TableConditionalFormattingOption& TableConditionalFormattingOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cell"))
  {
    m_cell = jsonValue.GetObject("Cell");

    m_cellHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Row"))
  {
    m_row = jsonValue.GetObject("Row");

    m_rowHasBeenSet = true;
  }

  return *this;
}

JsonValue TableConditionalFormattingOption::Jsonize() const
{
  JsonValue payload;

  if(m_cellHasBeenSet)
  {
   payload.WithObject("Cell", m_cell.Jsonize());

  }

  if(m_rowHasBeenSet)
  {
   payload.WithObject("Row", m_row.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
