/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/StaticImageDeactivateScheduleActionSettings.h>
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

StaticImageDeactivateScheduleActionSettings::StaticImageDeactivateScheduleActionSettings() : 
    m_fadeOut(0),
    m_fadeOutHasBeenSet(false),
    m_layer(0),
    m_layerHasBeenSet(false)
{
}

StaticImageDeactivateScheduleActionSettings::StaticImageDeactivateScheduleActionSettings(JsonView jsonValue) : 
    m_fadeOut(0),
    m_fadeOutHasBeenSet(false),
    m_layer(0),
    m_layerHasBeenSet(false)
{
  *this = jsonValue;
}

StaticImageDeactivateScheduleActionSettings& StaticImageDeactivateScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fadeOut"))
  {
    m_fadeOut = jsonValue.GetInteger("fadeOut");

    m_fadeOutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layer"))
  {
    m_layer = jsonValue.GetInteger("layer");

    m_layerHasBeenSet = true;
  }

  return *this;
}

JsonValue StaticImageDeactivateScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_fadeOutHasBeenSet)
  {
   payload.WithInteger("fadeOut", m_fadeOut);

  }

  if(m_layerHasBeenSet)
  {
   payload.WithInteger("layer", m_layer);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
