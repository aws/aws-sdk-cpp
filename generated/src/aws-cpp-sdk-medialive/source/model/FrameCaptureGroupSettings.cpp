/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FrameCaptureGroupSettings.h>
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

FrameCaptureGroupSettings::FrameCaptureGroupSettings() : 
    m_destinationHasBeenSet(false),
    m_frameCaptureCdnSettingsHasBeenSet(false)
{
}

FrameCaptureGroupSettings::FrameCaptureGroupSettings(JsonView jsonValue) : 
    m_destinationHasBeenSet(false),
    m_frameCaptureCdnSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

FrameCaptureGroupSettings& FrameCaptureGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frameCaptureCdnSettings"))
  {
    m_frameCaptureCdnSettings = jsonValue.GetObject("frameCaptureCdnSettings");

    m_frameCaptureCdnSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue FrameCaptureGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_frameCaptureCdnSettingsHasBeenSet)
  {
   payload.WithObject("frameCaptureCdnSettings", m_frameCaptureCdnSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
