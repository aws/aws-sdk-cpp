/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableRowConditionalFormatting.h>
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

TableRowConditionalFormatting::TableRowConditionalFormatting() : 
    m_backgroundColorHasBeenSet(false),
    m_textColorHasBeenSet(false)
{
}

TableRowConditionalFormatting::TableRowConditionalFormatting(JsonView jsonValue) : 
    m_backgroundColorHasBeenSet(false),
    m_textColorHasBeenSet(false)
{
  *this = jsonValue;
}

TableRowConditionalFormatting& TableRowConditionalFormatting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackgroundColor"))
  {
    m_backgroundColor = jsonValue.GetObject("BackgroundColor");

    m_backgroundColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextColor"))
  {
    m_textColor = jsonValue.GetObject("TextColor");

    m_textColorHasBeenSet = true;
  }

  return *this;
}

JsonValue TableRowConditionalFormatting::Jsonize() const
{
  JsonValue payload;

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithObject("BackgroundColor", m_backgroundColor.Jsonize());

  }

  if(m_textColorHasBeenSet)
  {
   payload.WithObject("TextColor", m_textColor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
