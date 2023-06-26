/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisDisplayOptions.h>
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

AxisDisplayOptions::AxisDisplayOptions() : 
    m_tickLabelOptionsHasBeenSet(false),
    m_axisLineVisibility(Visibility::NOT_SET),
    m_axisLineVisibilityHasBeenSet(false),
    m_gridLineVisibility(Visibility::NOT_SET),
    m_gridLineVisibilityHasBeenSet(false),
    m_dataOptionsHasBeenSet(false),
    m_scrollbarOptionsHasBeenSet(false),
    m_axisOffsetHasBeenSet(false)
{
}

AxisDisplayOptions::AxisDisplayOptions(JsonView jsonValue) : 
    m_tickLabelOptionsHasBeenSet(false),
    m_axisLineVisibility(Visibility::NOT_SET),
    m_axisLineVisibilityHasBeenSet(false),
    m_gridLineVisibility(Visibility::NOT_SET),
    m_gridLineVisibilityHasBeenSet(false),
    m_dataOptionsHasBeenSet(false),
    m_scrollbarOptionsHasBeenSet(false),
    m_axisOffsetHasBeenSet(false)
{
  *this = jsonValue;
}

AxisDisplayOptions& AxisDisplayOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TickLabelOptions"))
  {
    m_tickLabelOptions = jsonValue.GetObject("TickLabelOptions");

    m_tickLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AxisLineVisibility"))
  {
    m_axisLineVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("AxisLineVisibility"));

    m_axisLineVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GridLineVisibility"))
  {
    m_gridLineVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("GridLineVisibility"));

    m_gridLineVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataOptions"))
  {
    m_dataOptions = jsonValue.GetObject("DataOptions");

    m_dataOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScrollbarOptions"))
  {
    m_scrollbarOptions = jsonValue.GetObject("ScrollbarOptions");

    m_scrollbarOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AxisOffset"))
  {
    m_axisOffset = jsonValue.GetString("AxisOffset");

    m_axisOffsetHasBeenSet = true;
  }

  return *this;
}

JsonValue AxisDisplayOptions::Jsonize() const
{
  JsonValue payload;

  if(m_tickLabelOptionsHasBeenSet)
  {
   payload.WithObject("TickLabelOptions", m_tickLabelOptions.Jsonize());

  }

  if(m_axisLineVisibilityHasBeenSet)
  {
   payload.WithString("AxisLineVisibility", VisibilityMapper::GetNameForVisibility(m_axisLineVisibility));
  }

  if(m_gridLineVisibilityHasBeenSet)
  {
   payload.WithString("GridLineVisibility", VisibilityMapper::GetNameForVisibility(m_gridLineVisibility));
  }

  if(m_dataOptionsHasBeenSet)
  {
   payload.WithObject("DataOptions", m_dataOptions.Jsonize());

  }

  if(m_scrollbarOptionsHasBeenSet)
  {
   payload.WithObject("ScrollbarOptions", m_scrollbarOptions.Jsonize());

  }

  if(m_axisOffsetHasBeenSet)
  {
   payload.WithString("AxisOffset", m_axisOffset);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
