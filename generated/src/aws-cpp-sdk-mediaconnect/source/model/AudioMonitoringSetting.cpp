/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AudioMonitoringSetting.h>
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

AudioMonitoringSetting::AudioMonitoringSetting(JsonView jsonValue)
{
  *this = jsonValue;
}

AudioMonitoringSetting& AudioMonitoringSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("silentAudio"))
  {
    m_silentAudio = jsonValue.GetObject("silentAudio");
    m_silentAudioHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioMonitoringSetting::Jsonize() const
{
  JsonValue payload;

  if(m_silentAudioHasBeenSet)
  {
   payload.WithObject("silentAudio", m_silentAudio.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
