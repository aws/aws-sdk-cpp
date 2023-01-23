/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableCellStyle.h>
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

TableCellStyle::TableCellStyle() : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_fontConfigurationHasBeenSet(false),
    m_textWrap(TextWrap::NOT_SET),
    m_textWrapHasBeenSet(false),
    m_horizontalTextAlignment(HorizontalTextAlignment::NOT_SET),
    m_horizontalTextAlignmentHasBeenSet(false),
    m_verticalTextAlignment(VerticalTextAlignment::NOT_SET),
    m_verticalTextAlignmentHasBeenSet(false),
    m_backgroundColorHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_borderHasBeenSet(false)
{
}

TableCellStyle::TableCellStyle(JsonView jsonValue) : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_fontConfigurationHasBeenSet(false),
    m_textWrap(TextWrap::NOT_SET),
    m_textWrapHasBeenSet(false),
    m_horizontalTextAlignment(HorizontalTextAlignment::NOT_SET),
    m_horizontalTextAlignmentHasBeenSet(false),
    m_verticalTextAlignment(VerticalTextAlignment::NOT_SET),
    m_verticalTextAlignmentHasBeenSet(false),
    m_backgroundColorHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_borderHasBeenSet(false)
{
  *this = jsonValue;
}

TableCellStyle& TableCellStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FontConfiguration"))
  {
    m_fontConfiguration = jsonValue.GetObject("FontConfiguration");

    m_fontConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextWrap"))
  {
    m_textWrap = TextWrapMapper::GetTextWrapForName(jsonValue.GetString("TextWrap"));

    m_textWrapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HorizontalTextAlignment"))
  {
    m_horizontalTextAlignment = HorizontalTextAlignmentMapper::GetHorizontalTextAlignmentForName(jsonValue.GetString("HorizontalTextAlignment"));

    m_horizontalTextAlignmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerticalTextAlignment"))
  {
    m_verticalTextAlignment = VerticalTextAlignmentMapper::GetVerticalTextAlignmentForName(jsonValue.GetString("VerticalTextAlignment"));

    m_verticalTextAlignmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackgroundColor"))
  {
    m_backgroundColor = jsonValue.GetString("BackgroundColor");

    m_backgroundColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Height"))
  {
    m_height = jsonValue.GetInteger("Height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Border"))
  {
    m_border = jsonValue.GetObject("Border");

    m_borderHasBeenSet = true;
  }

  return *this;
}

JsonValue TableCellStyle::Jsonize() const
{
  JsonValue payload;

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_fontConfigurationHasBeenSet)
  {
   payload.WithObject("FontConfiguration", m_fontConfiguration.Jsonize());

  }

  if(m_textWrapHasBeenSet)
  {
   payload.WithString("TextWrap", TextWrapMapper::GetNameForTextWrap(m_textWrap));
  }

  if(m_horizontalTextAlignmentHasBeenSet)
  {
   payload.WithString("HorizontalTextAlignment", HorizontalTextAlignmentMapper::GetNameForHorizontalTextAlignment(m_horizontalTextAlignment));
  }

  if(m_verticalTextAlignmentHasBeenSet)
  {
   payload.WithString("VerticalTextAlignment", VerticalTextAlignmentMapper::GetNameForVerticalTextAlignment(m_verticalTextAlignment));
  }

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithString("BackgroundColor", m_backgroundColor);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("Height", m_height);

  }

  if(m_borderHasBeenSet)
  {
   payload.WithObject("Border", m_border.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
