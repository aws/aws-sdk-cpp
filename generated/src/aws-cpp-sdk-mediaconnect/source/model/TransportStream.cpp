/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/TransportStream.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

TransportStream::TransportStream() : 
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_frameResolutionHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_sampleSize(0),
    m_sampleSizeHasBeenSet(false),
    m_streamTypeHasBeenSet(false)
{
}

TransportStream::TransportStream(JsonView jsonValue) : 
    m_channels(0),
    m_channelsHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_frameResolutionHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false),
    m_sampleRate(0),
    m_sampleRateHasBeenSet(false),
    m_sampleSize(0),
    m_sampleSizeHasBeenSet(false),
    m_streamTypeHasBeenSet(false)
{
  *this = jsonValue;
}

TransportStream& TransportStream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channels"))
  {
    m_channels = jsonValue.GetInteger("channels");

    m_channelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codec"))
  {
    m_codec = jsonValue.GetString("codec");

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frameRate"))
  {
    m_frameRate = jsonValue.GetString("frameRate");

    m_frameRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frameResolution"))
  {
    m_frameResolution = jsonValue.GetObject("frameResolution");

    m_frameResolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pid"))
  {
    m_pid = jsonValue.GetInteger("pid");

    m_pidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleRate"))
  {
    m_sampleRate = jsonValue.GetInteger("sampleRate");

    m_sampleRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleSize"))
  {
    m_sampleSize = jsonValue.GetInteger("sampleSize");

    m_sampleSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamType"))
  {
    m_streamType = jsonValue.GetString("streamType");

    m_streamTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue TransportStream::Jsonize() const
{
  JsonValue payload;

  if(m_channelsHasBeenSet)
  {
   payload.WithInteger("channels", m_channels);

  }

  if(m_codecHasBeenSet)
  {
   payload.WithString("codec", m_codec);

  }

  if(m_frameRateHasBeenSet)
  {
   payload.WithString("frameRate", m_frameRate);

  }

  if(m_frameResolutionHasBeenSet)
  {
   payload.WithObject("frameResolution", m_frameResolution.Jsonize());

  }

  if(m_pidHasBeenSet)
  {
   payload.WithInteger("pid", m_pid);

  }

  if(m_sampleRateHasBeenSet)
  {
   payload.WithInteger("sampleRate", m_sampleRate);

  }

  if(m_sampleSizeHasBeenSet)
  {
   payload.WithInteger("sampleSize", m_sampleSize);

  }

  if(m_streamTypeHasBeenSet)
  {
   payload.WithString("streamType", m_streamType);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
