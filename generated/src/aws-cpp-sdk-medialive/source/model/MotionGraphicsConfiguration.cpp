/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MotionGraphicsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MotionGraphicsConfiguration::MotionGraphicsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

MotionGraphicsConfiguration& MotionGraphicsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("motionGraphicsInsertion"))
  {
    m_motionGraphicsInsertion = MotionGraphicsInsertionMapper::GetMotionGraphicsInsertionForName(jsonValue.GetString("motionGraphicsInsertion"));
    m_motionGraphicsInsertionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("motionGraphicsSettings"))
  {
    m_motionGraphicsSettings = jsonValue.GetObject("motionGraphicsSettings");
    m_motionGraphicsSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue MotionGraphicsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_motionGraphicsInsertionHasBeenSet)
  {
   payload.WithString("motionGraphicsInsertion", MotionGraphicsInsertionMapper::GetNameForMotionGraphicsInsertion(m_motionGraphicsInsertion));
  }

  if(m_motionGraphicsSettingsHasBeenSet)
  {
   payload.WithObject("motionGraphicsSettings", m_motionGraphicsSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
