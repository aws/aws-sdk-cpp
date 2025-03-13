/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LegendOptions.h>
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

LegendOptions::LegendOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

LegendOptions& LegendOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetObject("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Position"))
  {
    m_position = LegendPositionMapper::GetLegendPositionForName(jsonValue.GetString("Position"));
    m_positionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Width"))
  {
    m_width = jsonValue.GetString("Width");
    m_widthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Height"))
  {
    m_height = jsonValue.GetString("Height");
    m_heightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValueFontConfiguration"))
  {
    m_valueFontConfiguration = jsonValue.GetObject("ValueFontConfiguration");
    m_valueFontConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue LegendOptions::Jsonize() const
{
  JsonValue payload;

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_titleHasBeenSet)
  {
   payload.WithObject("Title", m_title.Jsonize());

  }

  if(m_positionHasBeenSet)
  {
   payload.WithString("Position", LegendPositionMapper::GetNameForLegendPosition(m_position));
  }

  if(m_widthHasBeenSet)
  {
   payload.WithString("Width", m_width);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithString("Height", m_height);

  }

  if(m_valueFontConfigurationHasBeenSet)
  {
   payload.WithObject("ValueFontConfiguration", m_valueFontConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
