/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataColorPalette.h>
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

DataColorPalette::DataColorPalette() : 
    m_colorsHasBeenSet(false),
    m_minMaxGradientHasBeenSet(false),
    m_emptyFillColorHasBeenSet(false)
{
}

DataColorPalette::DataColorPalette(JsonView jsonValue) : 
    m_colorsHasBeenSet(false),
    m_minMaxGradientHasBeenSet(false),
    m_emptyFillColorHasBeenSet(false)
{
  *this = jsonValue;
}

DataColorPalette& DataColorPalette::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Colors"))
  {
    Aws::Utils::Array<JsonView> colorsJsonList = jsonValue.GetArray("Colors");
    for(unsigned colorsIndex = 0; colorsIndex < colorsJsonList.GetLength(); ++colorsIndex)
    {
      m_colors.push_back(colorsJsonList[colorsIndex].AsString());
    }
    m_colorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinMaxGradient"))
  {
    Aws::Utils::Array<JsonView> minMaxGradientJsonList = jsonValue.GetArray("MinMaxGradient");
    for(unsigned minMaxGradientIndex = 0; minMaxGradientIndex < minMaxGradientJsonList.GetLength(); ++minMaxGradientIndex)
    {
      m_minMaxGradient.push_back(minMaxGradientJsonList[minMaxGradientIndex].AsString());
    }
    m_minMaxGradientHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmptyFillColor"))
  {
    m_emptyFillColor = jsonValue.GetString("EmptyFillColor");

    m_emptyFillColorHasBeenSet = true;
  }

  return *this;
}

JsonValue DataColorPalette::Jsonize() const
{
  JsonValue payload;

  if(m_colorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> colorsJsonList(m_colors.size());
   for(unsigned colorsIndex = 0; colorsIndex < colorsJsonList.GetLength(); ++colorsIndex)
   {
     colorsJsonList[colorsIndex].AsString(m_colors[colorsIndex]);
   }
   payload.WithArray("Colors", std::move(colorsJsonList));

  }

  if(m_minMaxGradientHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> minMaxGradientJsonList(m_minMaxGradient.size());
   for(unsigned minMaxGradientIndex = 0; minMaxGradientIndex < minMaxGradientJsonList.GetLength(); ++minMaxGradientIndex)
   {
     minMaxGradientJsonList[minMaxGradientIndex].AsString(m_minMaxGradient[minMaxGradientIndex]);
   }
   payload.WithArray("MinMaxGradient", std::move(minMaxGradientJsonList));

  }

  if(m_emptyFillColorHasBeenSet)
  {
   payload.WithString("EmptyFillColor", m_emptyFillColor);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
