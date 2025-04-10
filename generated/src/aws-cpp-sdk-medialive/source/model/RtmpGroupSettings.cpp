﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/RtmpGroupSettings.h>
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

RtmpGroupSettings::RtmpGroupSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

RtmpGroupSettings& RtmpGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adMarkers"))
  {
    Aws::Utils::Array<JsonView> adMarkersJsonList = jsonValue.GetArray("adMarkers");
    for(unsigned adMarkersIndex = 0; adMarkersIndex < adMarkersJsonList.GetLength(); ++adMarkersIndex)
    {
      m_adMarkers.push_back(RtmpAdMarkersMapper::GetRtmpAdMarkersForName(adMarkersJsonList[adMarkersIndex].AsString()));
    }
    m_adMarkersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authenticationScheme"))
  {
    m_authenticationScheme = AuthenticationSchemeMapper::GetAuthenticationSchemeForName(jsonValue.GetString("authenticationScheme"));
    m_authenticationSchemeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheFullBehavior"))
  {
    m_cacheFullBehavior = RtmpCacheFullBehaviorMapper::GetRtmpCacheFullBehaviorForName(jsonValue.GetString("cacheFullBehavior"));
    m_cacheFullBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheLength"))
  {
    m_cacheLength = jsonValue.GetInteger("cacheLength");
    m_cacheLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("captionData"))
  {
    m_captionData = RtmpCaptionDataMapper::GetRtmpCaptionDataForName(jsonValue.GetString("captionData"));
    m_captionDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputLossAction"))
  {
    m_inputLossAction = InputLossActionForRtmpOutMapper::GetInputLossActionForRtmpOutForName(jsonValue.GetString("inputLossAction"));
    m_inputLossActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("restartDelay"))
  {
    m_restartDelay = jsonValue.GetInteger("restartDelay");
    m_restartDelayHasBeenSet = true;
  }
  if(jsonValue.ValueExists("includeFillerNalUnits"))
  {
    m_includeFillerNalUnits = IncludeFillerNalUnitsMapper::GetIncludeFillerNalUnitsForName(jsonValue.GetString("includeFillerNalUnits"));
    m_includeFillerNalUnitsHasBeenSet = true;
  }
  return *this;
}

JsonValue RtmpGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_adMarkersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adMarkersJsonList(m_adMarkers.size());
   for(unsigned adMarkersIndex = 0; adMarkersIndex < adMarkersJsonList.GetLength(); ++adMarkersIndex)
   {
     adMarkersJsonList[adMarkersIndex].AsString(RtmpAdMarkersMapper::GetNameForRtmpAdMarkers(m_adMarkers[adMarkersIndex]));
   }
   payload.WithArray("adMarkers", std::move(adMarkersJsonList));

  }

  if(m_authenticationSchemeHasBeenSet)
  {
   payload.WithString("authenticationScheme", AuthenticationSchemeMapper::GetNameForAuthenticationScheme(m_authenticationScheme));
  }

  if(m_cacheFullBehaviorHasBeenSet)
  {
   payload.WithString("cacheFullBehavior", RtmpCacheFullBehaviorMapper::GetNameForRtmpCacheFullBehavior(m_cacheFullBehavior));
  }

  if(m_cacheLengthHasBeenSet)
  {
   payload.WithInteger("cacheLength", m_cacheLength);

  }

  if(m_captionDataHasBeenSet)
  {
   payload.WithString("captionData", RtmpCaptionDataMapper::GetNameForRtmpCaptionData(m_captionData));
  }

  if(m_inputLossActionHasBeenSet)
  {
   payload.WithString("inputLossAction", InputLossActionForRtmpOutMapper::GetNameForInputLossActionForRtmpOut(m_inputLossAction));
  }

  if(m_restartDelayHasBeenSet)
  {
   payload.WithInteger("restartDelay", m_restartDelay);

  }

  if(m_includeFillerNalUnitsHasBeenSet)
  {
   payload.WithString("includeFillerNalUnits", IncludeFillerNalUnitsMapper::GetNameForIncludeFillerNalUnits(m_includeFillerNalUnits));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
