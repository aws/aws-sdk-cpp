/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/KPISparklineOptions.h>
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

KPISparklineOptions::KPISparklineOptions() : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_type(KPISparklineType::NOT_SET),
    m_typeHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_tooltipVisibility(Visibility::NOT_SET),
    m_tooltipVisibilityHasBeenSet(false)
{
}

KPISparklineOptions::KPISparklineOptions(JsonView jsonValue) : 
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_type(KPISparklineType::NOT_SET),
    m_typeHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_tooltipVisibility(Visibility::NOT_SET),
    m_tooltipVisibilityHasBeenSet(false)
{
  *this = jsonValue;
}

KPISparklineOptions& KPISparklineOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = KPISparklineTypeMapper::GetKPISparklineTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");

    m_colorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TooltipVisibility"))
  {
    m_tooltipVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("TooltipVisibility"));

    m_tooltipVisibilityHasBeenSet = true;
  }

  return *this;
}

JsonValue KPISparklineOptions::Jsonize() const
{
  JsonValue payload;

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", KPISparklineTypeMapper::GetNameForKPISparklineType(m_type));
  }

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  if(m_tooltipVisibilityHasBeenSet)
  {
   payload.WithString("TooltipVisibility", VisibilityMapper::GetNameForVisibility(m_tooltipVisibility));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
