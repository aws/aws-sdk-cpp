/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioProperties.h>
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

AudioProperties::AudioProperties() : 
    m_bitDepth(0),
    m_bitDepthHasBeenSet(false),
    m_bitRate(0),
    m_bitRateHasBeenSet(false),
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false)
{
}

AudioProperties::AudioProperties(JsonView jsonValue)
  : AudioProperties()
{
  *this = jsonValue;
}

AudioProperties& AudioProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitDepth"))
  {
    m_bitDepth = jsonValue.GetInteger("bitDepth");

    m_bitDepthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitRate"))
  {
    m_bitRate = jsonValue.GetInteger("bitRate");

    m_bitRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channels"))
  {
    m_channels = jsonValue.GetInteger("channels");

    m_channelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frameRate"))
  {
    m_frameRate = jsonValue.GetObject("frameRate");

    m_frameRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = jsonValue.GetString("languageCode");

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetInteger("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioProperties::Jsonize() const
{
  JsonValue payload;

  if(m_bitDepthHasBeenSet)
  {
   payload.WithInteger("bitDepth", m_bitDepth);

  }

  if(m_bitRateHasBeenSet)
  {
   payload.WithInteger("bitRate", m_bitRate);

  }

  if(m_channelsHasBeenSet)
  {
   payload.WithInteger("channels", m_channels);

  }

  if(m_frameRateHasBeenSet)
  {
   payload.WithObject("frameRate", m_frameRate.Jsonize());

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", m_languageCode);

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
