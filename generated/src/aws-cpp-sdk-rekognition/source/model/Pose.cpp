/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Pose.h>
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

Pose::Pose() : 
    m_roll(0.0),
    m_rollHasBeenSet(false),
    m_yaw(0.0),
    m_yawHasBeenSet(false),
    m_pitch(0.0),
    m_pitchHasBeenSet(false)
{
}

Pose::Pose(JsonView jsonValue) : 
    m_roll(0.0),
    m_rollHasBeenSet(false),
    m_yaw(0.0),
    m_yawHasBeenSet(false),
    m_pitch(0.0),
    m_pitchHasBeenSet(false)
{
  *this = jsonValue;
}

Pose& Pose::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Roll"))
  {
    m_roll = jsonValue.GetDouble("Roll");

    m_rollHasBeenSet = true;
  }

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

  return *this;
}

JsonValue Pose::Jsonize() const
{
  JsonValue payload;

  if(m_rollHasBeenSet)
  {
   payload.WithDouble("Roll", m_roll);

  }

  if(m_yawHasBeenSet)
  {
   payload.WithDouble("Yaw", m_yaw);

  }

  if(m_pitchHasBeenSet)
  {
   payload.WithDouble("Pitch", m_pitch);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
