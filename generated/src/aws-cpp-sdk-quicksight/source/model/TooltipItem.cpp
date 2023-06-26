/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TooltipItem.h>
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

TooltipItem::TooltipItem() : 
    m_fieldTooltipItemHasBeenSet(false),
    m_columnTooltipItemHasBeenSet(false)
{
}

TooltipItem::TooltipItem(JsonView jsonValue) : 
    m_fieldTooltipItemHasBeenSet(false),
    m_columnTooltipItemHasBeenSet(false)
{
  *this = jsonValue;
}

TooltipItem& TooltipItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldTooltipItem"))
  {
    m_fieldTooltipItem = jsonValue.GetObject("FieldTooltipItem");

    m_fieldTooltipItemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnTooltipItem"))
  {
    m_columnTooltipItem = jsonValue.GetObject("ColumnTooltipItem");

    m_columnTooltipItemHasBeenSet = true;
  }

  return *this;
}

JsonValue TooltipItem::Jsonize() const
{
  JsonValue payload;

  if(m_fieldTooltipItemHasBeenSet)
  {
   payload.WithObject("FieldTooltipItem", m_fieldTooltipItem.Jsonize());

  }

  if(m_columnTooltipItemHasBeenSet)
  {
   payload.WithObject("ColumnTooltipItem", m_columnTooltipItem.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
