/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectLabelsImageProperties.h>
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

DetectLabelsImageProperties::DetectLabelsImageProperties() : 
    m_qualityHasBeenSet(false),
    m_dominantColorsHasBeenSet(false),
    m_foregroundHasBeenSet(false),
    m_backgroundHasBeenSet(false)
{
}

DetectLabelsImageProperties::DetectLabelsImageProperties(JsonView jsonValue) : 
    m_qualityHasBeenSet(false),
    m_dominantColorsHasBeenSet(false),
    m_foregroundHasBeenSet(false),
    m_backgroundHasBeenSet(false)
{
  *this = jsonValue;
}

DetectLabelsImageProperties& DetectLabelsImageProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Quality"))
  {
    m_quality = jsonValue.GetObject("Quality");

    m_qualityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DominantColors"))
  {
    Aws::Utils::Array<JsonView> dominantColorsJsonList = jsonValue.GetArray("DominantColors");
    for(unsigned dominantColorsIndex = 0; dominantColorsIndex < dominantColorsJsonList.GetLength(); ++dominantColorsIndex)
    {
      m_dominantColors.push_back(dominantColorsJsonList[dominantColorsIndex].AsObject());
    }
    m_dominantColorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Foreground"))
  {
    m_foreground = jsonValue.GetObject("Foreground");

    m_foregroundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Background"))
  {
    m_background = jsonValue.GetObject("Background");

    m_backgroundHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectLabelsImageProperties::Jsonize() const
{
  JsonValue payload;

  if(m_qualityHasBeenSet)
  {
   payload.WithObject("Quality", m_quality.Jsonize());

  }

  if(m_dominantColorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dominantColorsJsonList(m_dominantColors.size());
   for(unsigned dominantColorsIndex = 0; dominantColorsIndex < dominantColorsJsonList.GetLength(); ++dominantColorsIndex)
   {
     dominantColorsJsonList[dominantColorsIndex].AsObject(m_dominantColors[dominantColorsIndex].Jsonize());
   }
   payload.WithArray("DominantColors", std::move(dominantColorsJsonList));

  }

  if(m_foregroundHasBeenSet)
  {
   payload.WithObject("Foreground", m_foreground.Jsonize());

  }

  if(m_backgroundHasBeenSet)
  {
   payload.WithObject("Background", m_background.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
