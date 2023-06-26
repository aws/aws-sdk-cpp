/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VorbisSettings.h>
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

VorbisSettings::VorbisSettings() : 
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_vbrQuality(0),
    m_vbrQualityHasBeenSet(false)
{
}

VorbisSettings::VorbisSettings(JsonView jsonValue) : 
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_vbrQuality(0),
    m_vbrQualityHasBeenSet(false)
{
  *this = jsonValue;
}

VorbisSettings& VorbisSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channels"))
  {
    m_channels = jsonValue.GetInteger("channels");

    m_channelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetInteger("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vbrQuality"))
  {
    m_vbrQuality = jsonValue.GetInteger("vbrQuality");

    m_vbrQualityHasBeenSet = true;
  }

  return *this;
}

JsonValue VorbisSettings::Jsonize() const
{
  JsonValue payload;

  if(m_channelsHasBeenSet)
  {
   payload.WithInteger("channels", m_channels);

  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithInteger("sampleRate", m_sampleRate);

  }

  if(m_vbrQualityHasBeenSet)
  {
   payload.WithInteger("vbrQuality", m_vbrQuality);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
