/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetImageTooltipConfiguration.h>
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

SheetImageTooltipConfiguration::SheetImageTooltipConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SheetImageTooltipConfiguration& SheetImageTooltipConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TooltipText"))
  {
    m_tooltipText = jsonValue.GetObject("TooltipText");
    m_tooltipTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue SheetImageTooltipConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tooltipTextHasBeenSet)
  {
   payload.WithObject("TooltipText", m_tooltipText.Jsonize());

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
