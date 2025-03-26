/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ManifestServiceExcludeEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace ManifestServiceExcludeEventTypeMapper
      {

        static const int GENERATED_MANIFEST_HASH = HashingUtils::HashString("GENERATED_MANIFEST");
        static const int ORIGIN_MANIFEST_HASH = HashingUtils::HashString("ORIGIN_MANIFEST");
        static const int SESSION_INITIALIZED_HASH = HashingUtils::HashString("SESSION_INITIALIZED");
        static const int TRACKING_RESPONSE_HASH = HashingUtils::HashString("TRACKING_RESPONSE");
        static const int CONFIG_SYNTAX_ERROR_HASH = HashingUtils::HashString("CONFIG_SYNTAX_ERROR");
        static const int CONFIG_SECURITY_ERROR_HASH = HashingUtils::HashString("CONFIG_SECURITY_ERROR");
        static const int UNKNOWN_HOST_HASH = HashingUtils::HashString("UNKNOWN_HOST");
        static const int TIMEOUT_ERROR_HASH = HashingUtils::HashString("TIMEOUT_ERROR");
        static const int CONNECTION_ERROR_HASH = HashingUtils::HashString("CONNECTION_ERROR");
        static const int IO_ERROR_HASH = HashingUtils::HashString("IO_ERROR");
        static const int UNKNOWN_ERROR_HASH = HashingUtils::HashString("UNKNOWN_ERROR");
        static const int HOST_DISALLOWED_HASH = HashingUtils::HashString("HOST_DISALLOWED");
        static const int PARSING_ERROR_HASH = HashingUtils::HashString("PARSING_ERROR");
        static const int MANIFEST_ERROR_HASH = HashingUtils::HashString("MANIFEST_ERROR");
        static const int NO_MASTER_OR_MEDIA_PLAYLIST_HASH = HashingUtils::HashString("NO_MASTER_OR_MEDIA_PLAYLIST");
        static const int NO_MASTER_PLAYLIST_HASH = HashingUtils::HashString("NO_MASTER_PLAYLIST");
        static const int NO_MEDIA_PLAYLIST_HASH = HashingUtils::HashString("NO_MEDIA_PLAYLIST");
        static const int INCOMPATIBLE_HLS_VERSION_HASH = HashingUtils::HashString("INCOMPATIBLE_HLS_VERSION");
        static const int SCTE35_PARSING_ERROR_HASH = HashingUtils::HashString("SCTE35_PARSING_ERROR");
        static const int INVALID_SINGLE_PERIOD_DASH_MANIFEST_HASH = HashingUtils::HashString("INVALID_SINGLE_PERIOD_DASH_MANIFEST");
        static const int UNSUPPORTED_SINGLE_PERIOD_DASH_MANIFEST_HASH = HashingUtils::HashString("UNSUPPORTED_SINGLE_PERIOD_DASH_MANIFEST");
        static const int LAST_PERIOD_MISSING_AUDIO_HASH = HashingUtils::HashString("LAST_PERIOD_MISSING_AUDIO");
        static const int LAST_PERIOD_MISSING_AUDIO_WARNING_HASH = HashingUtils::HashString("LAST_PERIOD_MISSING_AUDIO_WARNING");
        static const int ERROR_ORIGIN_PREFIX_INTERPOLATION_HASH = HashingUtils::HashString("ERROR_ORIGIN_PREFIX_INTERPOLATION");
        static const int ERROR_ADS_INTERPOLATION_HASH = HashingUtils::HashString("ERROR_ADS_INTERPOLATION");
        static const int ERROR_LIVE_PRE_ROLL_ADS_INTERPOLATION_HASH = HashingUtils::HashString("ERROR_LIVE_PRE_ROLL_ADS_INTERPOLATION");
        static const int ERROR_CDN_AD_SEGMENT_INTERPOLATION_HASH = HashingUtils::HashString("ERROR_CDN_AD_SEGMENT_INTERPOLATION");
        static const int ERROR_CDN_CONTENT_SEGMENT_INTERPOLATION_HASH = HashingUtils::HashString("ERROR_CDN_CONTENT_SEGMENT_INTERPOLATION");
        static const int ERROR_SLATE_AD_URL_INTERPOLATION_HASH = HashingUtils::HashString("ERROR_SLATE_AD_URL_INTERPOLATION");
        static const int ERROR_PROFILE_NAME_INTERPOLATION_HASH = HashingUtils::HashString("ERROR_PROFILE_NAME_INTERPOLATION");
        static const int ERROR_BUMPER_START_INTERPOLATION_HASH = HashingUtils::HashString("ERROR_BUMPER_START_INTERPOLATION");
        static const int ERROR_BUMPER_END_INTERPOLATION_HASH = HashingUtils::HashString("ERROR_BUMPER_END_INTERPOLATION");


        ManifestServiceExcludeEventType GetManifestServiceExcludeEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERATED_MANIFEST_HASH)
          {
            return ManifestServiceExcludeEventType::GENERATED_MANIFEST;
          }
          else if (hashCode == ORIGIN_MANIFEST_HASH)
          {
            return ManifestServiceExcludeEventType::ORIGIN_MANIFEST;
          }
          else if (hashCode == SESSION_INITIALIZED_HASH)
          {
            return ManifestServiceExcludeEventType::SESSION_INITIALIZED;
          }
          else if (hashCode == TRACKING_RESPONSE_HASH)
          {
            return ManifestServiceExcludeEventType::TRACKING_RESPONSE;
          }
          else if (hashCode == CONFIG_SYNTAX_ERROR_HASH)
          {
            return ManifestServiceExcludeEventType::CONFIG_SYNTAX_ERROR;
          }
          else if (hashCode == CONFIG_SECURITY_ERROR_HASH)
          {
            return ManifestServiceExcludeEventType::CONFIG_SECURITY_ERROR;
          }
          else if (hashCode == UNKNOWN_HOST_HASH)
          {
            return ManifestServiceExcludeEventType::UNKNOWN_HOST;
          }
          else if (hashCode == TIMEOUT_ERROR_HASH)
          {
            return ManifestServiceExcludeEventType::TIMEOUT_ERROR;
          }
          else if (hashCode == CONNECTION_ERROR_HASH)
          {
            return ManifestServiceExcludeEventType::CONNECTION_ERROR;
          }
          else if (hashCode == IO_ERROR_HASH)
          {
            return ManifestServiceExcludeEventType::IO_ERROR;
          }
          else if (hashCode == UNKNOWN_ERROR_HASH)
          {
            return ManifestServiceExcludeEventType::UNKNOWN_ERROR;
          }
          else if (hashCode == HOST_DISALLOWED_HASH)
          {
            return ManifestServiceExcludeEventType::HOST_DISALLOWED;
          }
          else if (hashCode == PARSING_ERROR_HASH)
          {
            return ManifestServiceExcludeEventType::PARSING_ERROR;
          }
          else if (hashCode == MANIFEST_ERROR_HASH)
          {
            return ManifestServiceExcludeEventType::MANIFEST_ERROR;
          }
          else if (hashCode == NO_MASTER_OR_MEDIA_PLAYLIST_HASH)
          {
            return ManifestServiceExcludeEventType::NO_MASTER_OR_MEDIA_PLAYLIST;
          }
          else if (hashCode == NO_MASTER_PLAYLIST_HASH)
          {
            return ManifestServiceExcludeEventType::NO_MASTER_PLAYLIST;
          }
          else if (hashCode == NO_MEDIA_PLAYLIST_HASH)
          {
            return ManifestServiceExcludeEventType::NO_MEDIA_PLAYLIST;
          }
          else if (hashCode == INCOMPATIBLE_HLS_VERSION_HASH)
          {
            return ManifestServiceExcludeEventType::INCOMPATIBLE_HLS_VERSION;
          }
          else if (hashCode == SCTE35_PARSING_ERROR_HASH)
          {
            return ManifestServiceExcludeEventType::SCTE35_PARSING_ERROR;
          }
          else if (hashCode == INVALID_SINGLE_PERIOD_DASH_MANIFEST_HASH)
          {
            return ManifestServiceExcludeEventType::INVALID_SINGLE_PERIOD_DASH_MANIFEST;
          }
          else if (hashCode == UNSUPPORTED_SINGLE_PERIOD_DASH_MANIFEST_HASH)
          {
            return ManifestServiceExcludeEventType::UNSUPPORTED_SINGLE_PERIOD_DASH_MANIFEST;
          }
          else if (hashCode == LAST_PERIOD_MISSING_AUDIO_HASH)
          {
            return ManifestServiceExcludeEventType::LAST_PERIOD_MISSING_AUDIO;
          }
          else if (hashCode == LAST_PERIOD_MISSING_AUDIO_WARNING_HASH)
          {
            return ManifestServiceExcludeEventType::LAST_PERIOD_MISSING_AUDIO_WARNING;
          }
          else if (hashCode == ERROR_ORIGIN_PREFIX_INTERPOLATION_HASH)
          {
            return ManifestServiceExcludeEventType::ERROR_ORIGIN_PREFIX_INTERPOLATION;
          }
          else if (hashCode == ERROR_ADS_INTERPOLATION_HASH)
          {
            return ManifestServiceExcludeEventType::ERROR_ADS_INTERPOLATION;
          }
          else if (hashCode == ERROR_LIVE_PRE_ROLL_ADS_INTERPOLATION_HASH)
          {
            return ManifestServiceExcludeEventType::ERROR_LIVE_PRE_ROLL_ADS_INTERPOLATION;
          }
          else if (hashCode == ERROR_CDN_AD_SEGMENT_INTERPOLATION_HASH)
          {
            return ManifestServiceExcludeEventType::ERROR_CDN_AD_SEGMENT_INTERPOLATION;
          }
          else if (hashCode == ERROR_CDN_CONTENT_SEGMENT_INTERPOLATION_HASH)
          {
            return ManifestServiceExcludeEventType::ERROR_CDN_CONTENT_SEGMENT_INTERPOLATION;
          }
          else if (hashCode == ERROR_SLATE_AD_URL_INTERPOLATION_HASH)
          {
            return ManifestServiceExcludeEventType::ERROR_SLATE_AD_URL_INTERPOLATION;
          }
          else if (hashCode == ERROR_PROFILE_NAME_INTERPOLATION_HASH)
          {
            return ManifestServiceExcludeEventType::ERROR_PROFILE_NAME_INTERPOLATION;
          }
          else if (hashCode == ERROR_BUMPER_START_INTERPOLATION_HASH)
          {
            return ManifestServiceExcludeEventType::ERROR_BUMPER_START_INTERPOLATION;
          }
          else if (hashCode == ERROR_BUMPER_END_INTERPOLATION_HASH)
          {
            return ManifestServiceExcludeEventType::ERROR_BUMPER_END_INTERPOLATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManifestServiceExcludeEventType>(hashCode);
          }

          return ManifestServiceExcludeEventType::NOT_SET;
        }

        Aws::String GetNameForManifestServiceExcludeEventType(ManifestServiceExcludeEventType enumValue)
        {
          switch(enumValue)
          {
          case ManifestServiceExcludeEventType::NOT_SET:
            return {};
          case ManifestServiceExcludeEventType::GENERATED_MANIFEST:
            return "GENERATED_MANIFEST";
          case ManifestServiceExcludeEventType::ORIGIN_MANIFEST:
            return "ORIGIN_MANIFEST";
          case ManifestServiceExcludeEventType::SESSION_INITIALIZED:
            return "SESSION_INITIALIZED";
          case ManifestServiceExcludeEventType::TRACKING_RESPONSE:
            return "TRACKING_RESPONSE";
          case ManifestServiceExcludeEventType::CONFIG_SYNTAX_ERROR:
            return "CONFIG_SYNTAX_ERROR";
          case ManifestServiceExcludeEventType::CONFIG_SECURITY_ERROR:
            return "CONFIG_SECURITY_ERROR";
          case ManifestServiceExcludeEventType::UNKNOWN_HOST:
            return "UNKNOWN_HOST";
          case ManifestServiceExcludeEventType::TIMEOUT_ERROR:
            return "TIMEOUT_ERROR";
          case ManifestServiceExcludeEventType::CONNECTION_ERROR:
            return "CONNECTION_ERROR";
          case ManifestServiceExcludeEventType::IO_ERROR:
            return "IO_ERROR";
          case ManifestServiceExcludeEventType::UNKNOWN_ERROR:
            return "UNKNOWN_ERROR";
          case ManifestServiceExcludeEventType::HOST_DISALLOWED:
            return "HOST_DISALLOWED";
          case ManifestServiceExcludeEventType::PARSING_ERROR:
            return "PARSING_ERROR";
          case ManifestServiceExcludeEventType::MANIFEST_ERROR:
            return "MANIFEST_ERROR";
          case ManifestServiceExcludeEventType::NO_MASTER_OR_MEDIA_PLAYLIST:
            return "NO_MASTER_OR_MEDIA_PLAYLIST";
          case ManifestServiceExcludeEventType::NO_MASTER_PLAYLIST:
            return "NO_MASTER_PLAYLIST";
          case ManifestServiceExcludeEventType::NO_MEDIA_PLAYLIST:
            return "NO_MEDIA_PLAYLIST";
          case ManifestServiceExcludeEventType::INCOMPATIBLE_HLS_VERSION:
            return "INCOMPATIBLE_HLS_VERSION";
          case ManifestServiceExcludeEventType::SCTE35_PARSING_ERROR:
            return "SCTE35_PARSING_ERROR";
          case ManifestServiceExcludeEventType::INVALID_SINGLE_PERIOD_DASH_MANIFEST:
            return "INVALID_SINGLE_PERIOD_DASH_MANIFEST";
          case ManifestServiceExcludeEventType::UNSUPPORTED_SINGLE_PERIOD_DASH_MANIFEST:
            return "UNSUPPORTED_SINGLE_PERIOD_DASH_MANIFEST";
          case ManifestServiceExcludeEventType::LAST_PERIOD_MISSING_AUDIO:
            return "LAST_PERIOD_MISSING_AUDIO";
          case ManifestServiceExcludeEventType::LAST_PERIOD_MISSING_AUDIO_WARNING:
            return "LAST_PERIOD_MISSING_AUDIO_WARNING";
          case ManifestServiceExcludeEventType::ERROR_ORIGIN_PREFIX_INTERPOLATION:
            return "ERROR_ORIGIN_PREFIX_INTERPOLATION";
          case ManifestServiceExcludeEventType::ERROR_ADS_INTERPOLATION:
            return "ERROR_ADS_INTERPOLATION";
          case ManifestServiceExcludeEventType::ERROR_LIVE_PRE_ROLL_ADS_INTERPOLATION:
            return "ERROR_LIVE_PRE_ROLL_ADS_INTERPOLATION";
          case ManifestServiceExcludeEventType::ERROR_CDN_AD_SEGMENT_INTERPOLATION:
            return "ERROR_CDN_AD_SEGMENT_INTERPOLATION";
          case ManifestServiceExcludeEventType::ERROR_CDN_CONTENT_SEGMENT_INTERPOLATION:
            return "ERROR_CDN_CONTENT_SEGMENT_INTERPOLATION";
          case ManifestServiceExcludeEventType::ERROR_SLATE_AD_URL_INTERPOLATION:
            return "ERROR_SLATE_AD_URL_INTERPOLATION";
          case ManifestServiceExcludeEventType::ERROR_PROFILE_NAME_INTERPOLATION:
            return "ERROR_PROFILE_NAME_INTERPOLATION";
          case ManifestServiceExcludeEventType::ERROR_BUMPER_START_INTERPOLATION:
            return "ERROR_BUMPER_START_INTERPOLATION";
          case ManifestServiceExcludeEventType::ERROR_BUMPER_END_INTERPOLATION:
            return "ERROR_BUMPER_END_INTERPOLATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManifestServiceExcludeEventTypeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
