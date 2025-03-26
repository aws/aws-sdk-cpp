/**
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
  enum class ManifestServiceExcludeEventType
  {
    NOT_SET,
    GENERATED_MANIFEST,
    ORIGIN_MANIFEST,
    SESSION_INITIALIZED,
    TRACKING_RESPONSE,
    CONFIG_SYNTAX_ERROR,
    CONFIG_SECURITY_ERROR,
    UNKNOWN_HOST,
    TIMEOUT_ERROR,
    CONNECTION_ERROR,
    IO_ERROR,
    UNKNOWN_ERROR,
    HOST_DISALLOWED,
    PARSING_ERROR,
    MANIFEST_ERROR,
    NO_MASTER_OR_MEDIA_PLAYLIST,
    NO_MASTER_PLAYLIST,
    NO_MEDIA_PLAYLIST,
    INCOMPATIBLE_HLS_VERSION,
    SCTE35_PARSING_ERROR,
    INVALID_SINGLE_PERIOD_DASH_MANIFEST,
    UNSUPPORTED_SINGLE_PERIOD_DASH_MANIFEST,
    LAST_PERIOD_MISSING_AUDIO,
    LAST_PERIOD_MISSING_AUDIO_WARNING,
    ERROR_ORIGIN_PREFIX_INTERPOLATION,
    ERROR_ADS_INTERPOLATION,
    ERROR_LIVE_PRE_ROLL_ADS_INTERPOLATION,
    ERROR_CDN_AD_SEGMENT_INTERPOLATION,
    ERROR_CDN_CONTENT_SEGMENT_INTERPOLATION,
    ERROR_SLATE_AD_URL_INTERPOLATION,
    ERROR_PROFILE_NAME_INTERPOLATION,
    ERROR_BUMPER_START_INTERPOLATION,
    ERROR_BUMPER_END_INTERPOLATION
  };

namespace ManifestServiceExcludeEventTypeMapper
{
AWS_MEDIATAILOR_API ManifestServiceExcludeEventType GetManifestServiceExcludeEventTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForManifestServiceExcludeEventType(ManifestServiceExcludeEventType value);
} // namespace ManifestServiceExcludeEventTypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
