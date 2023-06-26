/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/NexGuardFileMarkerSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

NexGuardFileMarkerSettings::NexGuardFileMarkerSettings() : 
    m_licenseHasBeenSet(false),
    m_payload(0),
    m_payloadHasBeenSet(false),
    m_presetHasBeenSet(false),
    m_strength(WatermarkingStrength::NOT_SET),
    m_strengthHasBeenSet(false)
{
}

NexGuardFileMarkerSettings::NexGuardFileMarkerSettings(JsonView jsonValue) : 
    m_licenseHasBeenSet(false),
    m_payload(0),
    m_payloadHasBeenSet(false),
    m_presetHasBeenSet(false),
    m_strength(WatermarkingStrength::NOT_SET),
    m_strengthHasBeenSet(false)
{
  *this = jsonValue;
}

NexGuardFileMarkerSettings& NexGuardFileMarkerSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("license"))
  {
    m_license = jsonValue.GetString("license");

    m_licenseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetInteger("payload");

    m_payloadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preset"))
  {
    m_preset = jsonValue.GetString("preset");

    m_presetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("strength"))
  {
    m_strength = WatermarkingStrengthMapper::GetWatermarkingStrengthForName(jsonValue.GetString("strength"));

    m_strengthHasBeenSet = true;
  }

  return *this;
}

JsonValue NexGuardFileMarkerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_licenseHasBeenSet)
  {
   payload.WithString("license", m_license);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithInteger("payload", m_payload);

  }

  if(m_presetHasBeenSet)
  {
   payload.WithString("preset", m_preset);

  }

  if(m_strengthHasBeenSet)
  {
   payload.WithString("strength", WatermarkingStrengthMapper::GetNameForWatermarkingStrength(m_strength));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
