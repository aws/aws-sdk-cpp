/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ImageQuality.h>
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

ImageQuality::ImageQuality() : 
    m_brightness(0.0),
    m_brightnessHasBeenSet(false),
    m_sharpness(0.0),
    m_sharpnessHasBeenSet(false)
{
}

ImageQuality::ImageQuality(JsonView jsonValue) : 
    m_brightness(0.0),
    m_brightnessHasBeenSet(false),
    m_sharpness(0.0),
    m_sharpnessHasBeenSet(false)
{
  *this = jsonValue;
}

ImageQuality& ImageQuality::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue ImageQuality::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
