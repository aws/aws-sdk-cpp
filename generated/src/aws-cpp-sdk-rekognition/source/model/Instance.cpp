/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Instance.h>
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

Instance::Instance() : 
    m_boundingBoxHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_dominantColorsHasBeenSet(false)
{
}

Instance::Instance(JsonView jsonValue) : 
    m_boundingBoxHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_dominantColorsHasBeenSet(false)
{
  *this = jsonValue;
}

Instance& Instance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BoundingBox"))
  {
    m_boundingBox = jsonValue.GetObject("BoundingBox");

    m_boundingBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
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

JsonValue Instance::Jsonize() const
{
  JsonValue payload;

  if(m_boundingBoxHasBeenSet)
  {
   payload.WithObject("BoundingBox", m_boundingBox.Jsonize());

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

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
