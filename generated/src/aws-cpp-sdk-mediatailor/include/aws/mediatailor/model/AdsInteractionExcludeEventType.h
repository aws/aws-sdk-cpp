﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class AdsInteractionExcludeEventType
  {
    NOT_SET,
    AD_MARKER_FOUND,
    NON_AD_MARKER_FOUND,
    MAKING_ADS_REQUEST,
    MODIFIED_TARGET_URL,
    VAST_REDIRECT,
    EMPTY_VAST_RESPONSE,
    EMPTY_VMAP_RESPONSE,
    VAST_RESPONSE,
    REDIRECTED_VAST_RESPONSE,
    FILLED_AVAIL,
    FILLED_OVERLAY_AVAIL,
    BEACON_FIRED,
    WARNING_NO_ADVERTISEMENTS,
    WARNING_VPAID_AD_DROPPED,
    WARNING_URL_VARIABLE_SUBSTITUTION_FAILED,
    ERROR_UNKNOWN,
    ERROR_UNKNOWN_HOST,
    ERROR_DISALLOWED_HOST,
    ERROR_ADS_IO,
    ERROR_ADS_TIMEOUT,
    ERROR_ADS_RESPONSE_PARSE,
    ERROR_ADS_RESPONSE_UNKNOWN_ROOT_ELEMENT,
    ERROR_ADS_INVALID_RESPONSE,
    ERROR_VAST_REDIRECT_EMPTY_RESPONSE,
    ERROR_VAST_REDIRECT_MULTIPLE_VAST,
    ERROR_VAST_REDIRECT_FAILED,
    ERROR_VAST_MISSING_MEDIAFILES,
    ERROR_VAST_MISSING_CREATIVES,
    ERROR_VAST_MISSING_OVERLAYS,
    ERROR_VAST_MISSING_IMPRESSION,
    ERROR_VAST_INVALID_VAST_AD_TAG_URI,
    ERROR_VAST_MULTIPLE_TRACKING_EVENTS,
    ERROR_VAST_MULTIPLE_LINEAR,
    ERROR_VAST_INVALID_MEDIA_FILE,
    ERROR_FIRING_BEACON_FAILED,
    ERROR_PERSONALIZATION_DISABLED,
    VOD_TIME_BASED_AVAIL_PLAN_VAST_RESPONSE_FOR_OFFSET,
    VOD_TIME_BASED_AVAIL_PLAN_SUCCESS,
    VOD_TIME_BASED_AVAIL_PLAN_WARNING_NO_ADVERTISEMENTS,
    INTERSTITIAL_VOD_SUCCESS,
    INTERSTITIAL_VOD_FAILURE
  };

namespace AdsInteractionExcludeEventTypeMapper
{
AWS_MEDIATAILOR_API AdsInteractionExcludeEventType GetAdsInteractionExcludeEventTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForAdsInteractionExcludeEventType(AdsInteractionExcludeEventType value);
} // namespace AdsInteractionExcludeEventTypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
