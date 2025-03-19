/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialCategoricalColor.h>
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

GeospatialCategoricalColor::GeospatialCategoricalColor(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialCategoricalColor& GeospatialCategoricalColor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CategoryDataColors"))
  {
    Aws::Utils::Array<JsonView> categoryDataColorsJsonList = jsonValue.GetArray("CategoryDataColors");
    for(unsigned categoryDataColorsIndex = 0; categoryDataColorsIndex < categoryDataColorsJsonList.GetLength(); ++categoryDataColorsIndex)
    {
      m_categoryDataColors.push_back(categoryDataColorsJsonList[categoryDataColorsIndex].AsObject());
    }
    m_categoryDataColorsHasBeenSet = true;
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

JsonValue GeospatialCategoricalColor::Jsonize() const
{
  JsonValue payload;

  if(m_categoryDataColorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoryDataColorsJsonList(m_categoryDataColors.size());
   for(unsigned categoryDataColorsIndex = 0; categoryDataColorsIndex < categoryDataColorsJsonList.GetLength(); ++categoryDataColorsIndex)
   {
     categoryDataColorsJsonList[categoryDataColorsIndex].AsObject(m_categoryDataColors[categoryDataColorsIndex].Jsonize());
   }
   payload.WithArray("CategoryDataColors", std::move(categoryDataColorsJsonList));

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
