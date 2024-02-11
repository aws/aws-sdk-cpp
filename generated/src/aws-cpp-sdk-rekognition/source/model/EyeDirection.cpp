/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/EyeDirection.h>
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

EyeDirection::EyeDirection() : 
    m_yaw(0.0),
    m_yawHasBeenSet(false),
    m_pitch(0.0),
    m_pitchHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
}

EyeDirection::EyeDirection(JsonView jsonValue) : 
    m_yaw(0.0),
    m_yawHasBeenSet(false),
    m_pitch(0.0),
    m_pitchHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
  *this = jsonValue;
}

EyeDirection& EyeDirection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Yaw"))
  {
    m_yaw = jsonValue.GetDouble("Yaw");

    m_yawHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pitch"))
  {
    m_pitch = jsonValue.GetDouble("Pitch");

    m_pitchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue EyeDirection::Jsonize() const
{
  JsonValue payload;

  if(m_yawHasBeenSet)
  {
   payload.WithDouble("Yaw", m_yaw);

  }

  if(m_pitchHasBeenSet)
  {
   payload.WithDouble("Pitch", m_pitch);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
