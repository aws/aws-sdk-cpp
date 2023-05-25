/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mp3Settings.h>
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

Mp3Settings::Mp3Settings() : 
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_rateControlMode(Mp3RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_vbrQuality(0),
    m_vbrQualityHasBeenSet(false)
{
}

Mp3Settings::Mp3Settings(JsonView jsonValue) : 
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_rateControlMode(Mp3RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_vbrQuality(0),
    m_vbrQualityHasBeenSet(false)
{
  *this = jsonValue;
}

Mp3Settings& Mp3Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channels"))
  {
    m_channels = jsonValue.GetInteger("channels");

    m_channelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = Mp3RateControlModeMapper::GetMp3RateControlModeForName(jsonValue.GetString("rateControlMode"));

    m_rateControlModeHasBeenSet = true;
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

JsonValue Mp3Settings::Jsonize() const
{
  JsonValue payload;

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_channelsHasBeenSet)
  {
   payload.WithInteger("channels", m_channels);

  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", Mp3RateControlModeMapper::GetNameForMp3RateControlMode(m_rateControlMode));
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
