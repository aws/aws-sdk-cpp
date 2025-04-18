﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FieldTooltipItem.h>
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

FieldTooltipItem::FieldTooltipItem(JsonView jsonValue)
{
  *this = jsonValue;
}

FieldTooltipItem& FieldTooltipItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");
    m_fieldIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TooltipTarget"))
  {
    m_tooltipTarget = TooltipTargetMapper::GetTooltipTargetForName(jsonValue.GetString("TooltipTarget"));
    m_tooltipTargetHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldTooltipItem::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_tooltipTargetHasBeenSet)
  {
   payload.WithString("TooltipTarget", TooltipTargetMapper::GetNameForTooltipTarget(m_tooltipTarget));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
