/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioTrack.h>
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

AudioTrack::AudioTrack() : 
    m_track(0),
    m_trackHasBeenSet(false)
{
}

AudioTrack::AudioTrack(JsonView jsonValue) : 
    m_track(0),
    m_trackHasBeenSet(false)
{
  *this = jsonValue;
}

AudioTrack& AudioTrack::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("track"))
  {
    m_track = jsonValue.GetInteger("track");

    m_trackHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioTrack::Jsonize() const
{
  JsonValue payload;

  if(m_trackHasBeenSet)
  {
   payload.WithInteger("track", m_track);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
