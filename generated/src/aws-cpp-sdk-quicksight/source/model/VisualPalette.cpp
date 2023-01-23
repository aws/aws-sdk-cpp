/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VisualPalette.h>
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

VisualPalette::VisualPalette() : 
    m_chartColorHasBeenSet(false),
    m_colorMapHasBeenSet(false)
{
}

VisualPalette::VisualPalette(JsonView jsonValue) : 
    m_chartColorHasBeenSet(false),
    m_colorMapHasBeenSet(false)
{
  *this = jsonValue;
}

VisualPalette& VisualPalette::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChartColor"))
  {
    m_chartColor = jsonValue.GetString("ChartColor");

    m_chartColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColorMap"))
  {
    Aws::Utils::Array<JsonView> colorMapJsonList = jsonValue.GetArray("ColorMap");
    for(unsigned colorMapIndex = 0; colorMapIndex < colorMapJsonList.GetLength(); ++colorMapIndex)
    {
      m_colorMap.push_back(colorMapJsonList[colorMapIndex].AsObject());
    }
    m_colorMapHasBeenSet = true;
  }

  return *this;
}

JsonValue VisualPalette::Jsonize() const
{
  JsonValue payload;

  if(m_chartColorHasBeenSet)
  {
   payload.WithString("ChartColor", m_chartColor);

  }

  if(m_colorMapHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> colorMapJsonList(m_colorMap.size());
   for(unsigned colorMapIndex = 0; colorMapIndex < colorMapJsonList.GetLength(); ++colorMapIndex)
   {
     colorMapJsonList[colorMapIndex].AsObject(m_colorMap[colorMapIndex].Jsonize());
   }
   payload.WithArray("ColorMap", std::move(colorMapJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
