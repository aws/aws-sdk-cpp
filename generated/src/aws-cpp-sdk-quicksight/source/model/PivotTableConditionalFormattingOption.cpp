/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableConditionalFormattingOption.h>
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

PivotTableConditionalFormattingOption::PivotTableConditionalFormattingOption() : 
    m_cellHasBeenSet(false)
{
}

PivotTableConditionalFormattingOption::PivotTableConditionalFormattingOption(JsonView jsonValue) : 
    m_cellHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableConditionalFormattingOption& PivotTableConditionalFormattingOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cell"))
  {
    m_cell = jsonValue.GetObject("Cell");

    m_cellHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableConditionalFormattingOption::Jsonize() const
{
  JsonValue payload;

  if(m_cellHasBeenSet)
  {
   payload.WithObject("Cell", m_cell.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
