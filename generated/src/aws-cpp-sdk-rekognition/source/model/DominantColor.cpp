/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DominantColor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

DominantColor::DominantColor() : 
    m_red(0),
    m_redHasBeenSet(false),
    m_blue(0),
    m_blueHasBeenSet(false),
    m_green(0),
    m_greenHasBeenSet(false),
    m_hexCodeHasBeenSet(false),
    m_cSSColorHasBeenSet(false),
    m_simplifiedColorHasBeenSet(false),
    m_pixelPercent(0.0),
    m_pixelPercentHasBeenSet(false)
{
}

DominantColor::DominantColor(JsonView jsonValue) : 
    m_red(0),
    m_redHasBeenSet(false),
    m_blue(0),
    m_blueHasBeenSet(false),
    m_green(0),
    m_greenHasBeenSet(false),
    m_hexCodeHasBeenSet(false),
    m_cSSColorHasBeenSet(false),
    m_simplifiedColorHasBeenSet(false),
    m_pixelPercent(0.0),
    m_pixelPercentHasBeenSet(false)
{
  *this = jsonValue;
}

DominantColor& DominantColor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Red"))
  {
    m_red = jsonValue.GetInteger("Red");

    m_redHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Blue"))
  {
    m_blue = jsonValue.GetInteger("Blue");

    m_blueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Green"))
  {
    m_green = jsonValue.GetInteger("Green");

    m_greenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HexCode"))
  {
    m_hexCode = jsonValue.GetString("HexCode");

    m_hexCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CSSColor"))
  {
    m_cSSColor = jsonValue.GetString("CSSColor");

    m_cSSColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SimplifiedColor"))
  {
    m_simplifiedColor = jsonValue.GetString("SimplifiedColor");

    m_simplifiedColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PixelPercent"))
  {
    m_pixelPercent = jsonValue.GetDouble("PixelPercent");

    m_pixelPercentHasBeenSet = true;
  }

  return *this;
}

JsonValue DominantColor::Jsonize() const
{
  JsonValue payload;

  if(m_redHasBeenSet)
  {
   payload.WithInteger("Red", m_red);

  }

  if(m_blueHasBeenSet)
  {
   payload.WithInteger("Blue", m_blue);

  }

  if(m_greenHasBeenSet)
  {
   payload.WithInteger("Green", m_green);

  }

  if(m_hexCodeHasBeenSet)
  {
   payload.WithString("HexCode", m_hexCode);

  }

  if(m_cSSColorHasBeenSet)
  {
   payload.WithString("CSSColor", m_cSSColor);

  }

  if(m_simplifiedColorHasBeenSet)
  {
   payload.WithString("SimplifiedColor", m_simplifiedColor);

  }

  if(m_pixelPercentHasBeenSet)
  {
   payload.WithDouble("PixelPercent", m_pixelPercent);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
