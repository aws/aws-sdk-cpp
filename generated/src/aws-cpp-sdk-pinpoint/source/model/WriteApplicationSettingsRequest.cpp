﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/WriteApplicationSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

WriteApplicationSettingsRequest::WriteApplicationSettingsRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

WriteApplicationSettingsRequest& WriteApplicationSettingsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CampaignHook"))
  {
    m_campaignHook = jsonValue.GetObject("CampaignHook");
    m_campaignHookHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudWatchMetricsEnabled"))
  {
    m_cloudWatchMetricsEnabled = jsonValue.GetBool("CloudWatchMetricsEnabled");
    m_cloudWatchMetricsEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventTaggingEnabled"))
  {
    m_eventTaggingEnabled = jsonValue.GetBool("EventTaggingEnabled");
    m_eventTaggingEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Limits"))
  {
    m_limits = jsonValue.GetObject("Limits");
    m_limitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QuietTime"))
  {
    m_quietTime = jsonValue.GetObject("QuietTime");
    m_quietTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JourneyLimits"))
  {
    m_journeyLimits = jsonValue.GetObject("JourneyLimits");
    m_journeyLimitsHasBeenSet = true;
  }
  return *this;
}

JsonValue WriteApplicationSettingsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_campaignHookHasBeenSet)
  {
   payload.WithObject("CampaignHook", m_campaignHook.Jsonize());

  }

  if(m_cloudWatchMetricsEnabledHasBeenSet)
  {
   payload.WithBool("CloudWatchMetricsEnabled", m_cloudWatchMetricsEnabled);

  }

  if(m_eventTaggingEnabledHasBeenSet)
  {
   payload.WithBool("EventTaggingEnabled", m_eventTaggingEnabled);

  }

  if(m_limitsHasBeenSet)
  {
   payload.WithObject("Limits", m_limits.Jsonize());

  }

  if(m_quietTimeHasBeenSet)
  {
   payload.WithObject("QuietTime", m_quietTime.Jsonize());

  }

  if(m_journeyLimitsHasBeenSet)
  {
   payload.WithObject("JourneyLimits", m_journeyLimits.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
