/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialGradientColor.h>
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

GeospatialGradientColor::GeospatialGradientColor() : 
    m_stepColorsHasBeenSet(false),
    m_nullDataVisibility(Visibility::NOT_SET),
    m_nullDataVisibilityHasBeenSet(false),
    m_nullDataSettingsHasBeenSet(false),
    m_defaultOpacity(0.0),
    m_defaultOpacityHasBeenSet(false)
{
}

GeospatialGradientColor::GeospatialGradientColor(JsonView jsonValue)
  : GeospatialGradientColor()
{
  *this = jsonValue;
}

GeospatialGradientColor& GeospatialGradientColor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StepColors"))
  {
    Aws::Utils::Array<JsonView> stepColorsJsonList = jsonValue.GetArray("StepColors");
    for(unsigned stepColorsIndex = 0; stepColorsIndex < stepColorsJsonList.GetLength(); ++stepColorsIndex)
    {
      m_stepColors.push_back(stepColorsJsonList[stepColorsIndex].AsObject());
    }
    m_stepColorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullDataVisibility"))
  {
    m_nullDataVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("NullDataVisibility"));

    m_nullDataVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullDataSettings"))
  {
    m_nullDataSettings = jsonValue.GetObject("NullDataSettings");

    m_nullDataSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultOpacity"))
  {
    m_defaultOpacity = jsonValue.GetDouble("DefaultOpacity");

    m_defaultOpacityHasBeenSet = true;
  }

  return *this;
}

JsonValue GeospatialGradientColor::Jsonize() const
{
  JsonValue payload;

  if(m_stepColorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepColorsJsonList(m_stepColors.size());
   for(unsigned stepColorsIndex = 0; stepColorsIndex < stepColorsJsonList.GetLength(); ++stepColorsIndex)
   {
     stepColorsJsonList[stepColorsIndex].AsObject(m_stepColors[stepColorsIndex].Jsonize());
   }
   payload.WithArray("StepColors", std::move(stepColorsJsonList));

  }

  if(m_nullDataVisibilityHasBeenSet)
  {
   payload.WithString("NullDataVisibility", VisibilityMapper::GetNameForVisibility(m_nullDataVisibility));
  }

  if(m_nullDataSettingsHasBeenSet)
  {
   payload.WithObject("NullDataSettings", m_nullDataSettings.Jsonize());

  }

  if(m_defaultOpacityHasBeenSet)
  {
   payload.WithDouble("DefaultOpacity", m_defaultOpacity);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
