/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectLabelsImageQuality.h>
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

DetectLabelsImageQuality::DetectLabelsImageQuality() : 
    m_brightness(0.0),
    m_brightnessHasBeenSet(false),
    m_sharpness(0.0),
    m_sharpnessHasBeenSet(false),
    m_contrast(0.0),
    m_contrastHasBeenSet(false)
{
}

DetectLabelsImageQuality::DetectLabelsImageQuality(JsonView jsonValue) : 
    m_brightness(0.0),
    m_brightnessHasBeenSet(false),
    m_sharpness(0.0),
    m_sharpnessHasBeenSet(false),
    m_contrast(0.0),
    m_contrastHasBeenSet(false)
{
  *this = jsonValue;
}

DetectLabelsImageQuality& DetectLabelsImageQuality::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Brightness"))
  {
    m_brightness = jsonValue.GetDouble("Brightness");

    m_brightnessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sharpness"))
  {
    m_sharpness = jsonValue.GetDouble("Sharpness");

    m_sharpnessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Contrast"))
  {
    m_contrast = jsonValue.GetDouble("Contrast");

    m_contrastHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectLabelsImageQuality::Jsonize() const
{
  JsonValue payload;

  if(m_brightnessHasBeenSet)
  {
   payload.WithDouble("Brightness", m_brightness);

  }

  if(m_sharpnessHasBeenSet)
  {
   payload.WithDouble("Sharpness", m_sharpness);

  }

  if(m_contrastHasBeenSet)
  {
   payload.WithDouble("Contrast", m_contrast);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
