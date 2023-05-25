/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/KPIPrimaryValueConditionalFormatting.h>
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

KPIPrimaryValueConditionalFormatting::KPIPrimaryValueConditionalFormatting() : 
    m_textColorHasBeenSet(false),
    m_iconHasBeenSet(false)
{
}

KPIPrimaryValueConditionalFormatting::KPIPrimaryValueConditionalFormatting(JsonView jsonValue) : 
    m_textColorHasBeenSet(false),
    m_iconHasBeenSet(false)
{
  *this = jsonValue;
}

KPIPrimaryValueConditionalFormatting& KPIPrimaryValueConditionalFormatting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TextColor"))
  {
    m_textColor = jsonValue.GetObject("TextColor");

    m_textColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Icon"))
  {
    m_icon = jsonValue.GetObject("Icon");

    m_iconHasBeenSet = true;
  }

  return *this;
}

JsonValue KPIPrimaryValueConditionalFormatting::Jsonize() const
{
  JsonValue payload;

  if(m_textColorHasBeenSet)
  {
   payload.WithObject("TextColor", m_textColor.Jsonize());

  }

  if(m_iconHasBeenSet)
  {
   payload.WithObject("Icon", m_icon.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
