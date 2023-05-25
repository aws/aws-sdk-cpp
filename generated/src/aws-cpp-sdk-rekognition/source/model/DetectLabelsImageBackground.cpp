/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectLabelsImageBackground.h>
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

DetectLabelsImageBackground::DetectLabelsImageBackground() : 
    m_qualityHasBeenSet(false),
    m_dominantColorsHasBeenSet(false)
{
}

DetectLabelsImageBackground::DetectLabelsImageBackground(JsonView jsonValue) : 
    m_qualityHasBeenSet(false),
    m_dominantColorsHasBeenSet(false)
{
  *this = jsonValue;
}

DetectLabelsImageBackground& DetectLabelsImageBackground::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue DetectLabelsImageBackground::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
