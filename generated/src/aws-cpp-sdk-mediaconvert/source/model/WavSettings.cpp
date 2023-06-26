/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/WavSettings.h>
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

WavSettings::WavSettings() : 
    m_bitDepth(0),
    m_bitDepthHasBeenSet(false),
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_format(WavFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false)
{
}

WavSettings::WavSettings(JsonView jsonValue) : 
    m_bitDepth(0),
    m_bitDepthHasBeenSet(false),
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_format(WavFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false)
{
  *this = jsonValue;
}

WavSettings& WavSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitDepth"))
  {
    m_bitDepth = jsonValue.GetInteger("bitDepth");

    m_bitDepthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channels"))
  {
    m_channels = jsonValue.GetInteger("channels");

    m_channelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = WavFormatMapper::GetWavFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetInteger("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  return *this;
}

JsonValue WavSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bitDepthHasBeenSet)
  {
   payload.WithInteger("bitDepth", m_bitDepth);

  }

  if(m_channelsHasBeenSet)
  {
   payload.WithInteger("channels", m_channels);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", WavFormatMapper::GetNameForWavFormat(m_format));
  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithInteger("sampleRate", m_sampleRate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
