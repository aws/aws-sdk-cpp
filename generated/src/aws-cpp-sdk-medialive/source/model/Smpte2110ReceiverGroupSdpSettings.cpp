/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Smpte2110ReceiverGroupSdpSettings.h>
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

Smpte2110ReceiverGroupSdpSettings::Smpte2110ReceiverGroupSdpSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

Smpte2110ReceiverGroupSdpSettings& Smpte2110ReceiverGroupSdpSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ancillarySdps"))
  {
    Aws::Utils::Array<JsonView> ancillarySdpsJsonList = jsonValue.GetArray("ancillarySdps");
    for(unsigned ancillarySdpsIndex = 0; ancillarySdpsIndex < ancillarySdpsJsonList.GetLength(); ++ancillarySdpsIndex)
    {
      m_ancillarySdps.push_back(ancillarySdpsJsonList[ancillarySdpsIndex].AsObject());
    }
    m_ancillarySdpsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioSdps"))
  {
    Aws::Utils::Array<JsonView> audioSdpsJsonList = jsonValue.GetArray("audioSdps");
    for(unsigned audioSdpsIndex = 0; audioSdpsIndex < audioSdpsJsonList.GetLength(); ++audioSdpsIndex)
    {
      m_audioSdps.push_back(audioSdpsJsonList[audioSdpsIndex].AsObject());
    }
    m_audioSdpsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("videoSdp"))
  {
    m_videoSdp = jsonValue.GetObject("videoSdp");
    m_videoSdpHasBeenSet = true;
  }
  return *this;
}

JsonValue Smpte2110ReceiverGroupSdpSettings::Jsonize() const
{
  JsonValue payload;

  if(m_ancillarySdpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ancillarySdpsJsonList(m_ancillarySdps.size());
   for(unsigned ancillarySdpsIndex = 0; ancillarySdpsIndex < ancillarySdpsJsonList.GetLength(); ++ancillarySdpsIndex)
   {
     ancillarySdpsJsonList[ancillarySdpsIndex].AsObject(m_ancillarySdps[ancillarySdpsIndex].Jsonize());
   }
   payload.WithArray("ancillarySdps", std::move(ancillarySdpsJsonList));

  }

  if(m_audioSdpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioSdpsJsonList(m_audioSdps.size());
   for(unsigned audioSdpsIndex = 0; audioSdpsIndex < audioSdpsJsonList.GetLength(); ++audioSdpsIndex)
   {
     audioSdpsJsonList[audioSdpsIndex].AsObject(m_audioSdps[audioSdpsIndex].Jsonize());
   }
   payload.WithArray("audioSdps", std::move(audioSdpsJsonList));

  }

  if(m_videoSdpHasBeenSet)
  {
   payload.WithObject("videoSdp", m_videoSdp.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
