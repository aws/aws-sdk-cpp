/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TooltipOptions.h>
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

TooltipOptions::TooltipOptions() : 
    m_tooltipVisibility(Visibility::NOT_SET),
    m_tooltipVisibilityHasBeenSet(false),
    m_selectedTooltipType(SelectedTooltipType::NOT_SET),
    m_selectedTooltipTypeHasBeenSet(false),
    m_fieldBasedTooltipHasBeenSet(false)
{
}

TooltipOptions::TooltipOptions(JsonView jsonValue) : 
    m_tooltipVisibility(Visibility::NOT_SET),
    m_tooltipVisibilityHasBeenSet(false),
    m_selectedTooltipType(SelectedTooltipType::NOT_SET),
    m_selectedTooltipTypeHasBeenSet(false),
    m_fieldBasedTooltipHasBeenSet(false)
{
  *this = jsonValue;
}

TooltipOptions& TooltipOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TooltipVisibility"))
  {
    m_tooltipVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("TooltipVisibility"));

    m_tooltipVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectedTooltipType"))
  {
    m_selectedTooltipType = SelectedTooltipTypeMapper::GetSelectedTooltipTypeForName(jsonValue.GetString("SelectedTooltipType"));

    m_selectedTooltipTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldBasedTooltip"))
  {
    m_fieldBasedTooltip = jsonValue.GetObject("FieldBasedTooltip");

    m_fieldBasedTooltipHasBeenSet = true;
  }

  return *this;
}

JsonValue TooltipOptions::Jsonize() const
{
  JsonValue payload;

  if(m_tooltipVisibilityHasBeenSet)
  {
   payload.WithString("TooltipVisibility", VisibilityMapper::GetNameForVisibility(m_tooltipVisibility));
  }

  if(m_selectedTooltipTypeHasBeenSet)
  {
   payload.WithString("SelectedTooltipType", SelectedTooltipTypeMapper::GetNameForSelectedTooltipType(m_selectedTooltipType));
  }

  if(m_fieldBasedTooltipHasBeenSet)
  {
   payload.WithObject("FieldBasedTooltip", m_fieldBasedTooltip.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
