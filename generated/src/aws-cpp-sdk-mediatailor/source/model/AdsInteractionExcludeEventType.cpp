/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AdsInteractionExcludeEventType.h>
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
      namespace AdsInteractionExcludeEventTypeMapper
      {

        static const int AD_MARKER_FOUND_HASH = HashingUtils::HashString("AD_MARKER_FOUND");
        static const int NON_AD_MARKER_FOUND_HASH = HashingUtils::HashString("NON_AD_MARKER_FOUND");
        static const int MAKING_ADS_REQUEST_HASH = HashingUtils::HashString("MAKING_ADS_REQUEST");
        static const int MODIFIED_TARGET_URL_HASH = HashingUtils::HashString("MODIFIED_TARGET_URL");
        static const int VAST_REDIRECT_HASH = HashingUtils::HashString("VAST_REDIRECT");
        static const int EMPTY_VAST_RESPONSE_HASH = HashingUtils::HashString("EMPTY_VAST_RESPONSE");
        static const int EMPTY_VMAP_RESPONSE_HASH = HashingUtils::HashString("EMPTY_VMAP_RESPONSE");
        static const int VAST_RESPONSE_HASH = HashingUtils::HashString("VAST_RESPONSE");
        static const int REDIRECTED_VAST_RESPONSE_HASH = HashingUtils::HashString("REDIRECTED_VAST_RESPONSE");
        static const int FILLED_AVAIL_HASH = HashingUtils::HashString("FILLED_AVAIL");
        static const int FILLED_OVERLAY_AVAIL_HASH = HashingUtils::HashString("FILLED_OVERLAY_AVAIL");
        static const int BEACON_FIRED_HASH = HashingUtils::HashString("BEACON_FIRED");
        static const int WARNING_NO_ADVERTISEMENTS_HASH = HashingUtils::HashString("WARNING_NO_ADVERTISEMENTS");
        static const int WARNING_VPAID_AD_DROPPED_HASH = HashingUtils::HashString("WARNING_VPAID_AD_DROPPED");
        static const int WARNING_URL_VARIABLE_SUBSTITUTION_FAILED_HASH = HashingUtils::HashString("WARNING_URL_VARIABLE_SUBSTITUTION_FAILED");
        static const int ERROR_UNKNOWN_HASH = HashingUtils::HashString("ERROR_UNKNOWN");
        static const int ERROR_UNKNOWN_HOST_HASH = HashingUtils::HashString("ERROR_UNKNOWN_HOST");
        static const int ERROR_DISALLOWED_HOST_HASH = HashingUtils::HashString("ERROR_DISALLOWED_HOST");
        static const int ERROR_ADS_IO_HASH = HashingUtils::HashString("ERROR_ADS_IO");
        static const int ERROR_ADS_TIMEOUT_HASH = HashingUtils::HashString("ERROR_ADS_TIMEOUT");
        static const int ERROR_ADS_RESPONSE_PARSE_HASH = HashingUtils::HashString("ERROR_ADS_RESPONSE_PARSE");
        static const int ERROR_ADS_RESPONSE_UNKNOWN_ROOT_ELEMENT_HASH = HashingUtils::HashString("ERROR_ADS_RESPONSE_UNKNOWN_ROOT_ELEMENT");
        static const int ERROR_ADS_INVALID_RESPONSE_HASH = HashingUtils::HashString("ERROR_ADS_INVALID_RESPONSE");
        static const int ERROR_VAST_REDIRECT_EMPTY_RESPONSE_HASH = HashingUtils::HashString("ERROR_VAST_REDIRECT_EMPTY_RESPONSE");
        static const int ERROR_VAST_REDIRECT_MULTIPLE_VAST_HASH = HashingUtils::HashString("ERROR_VAST_REDIRECT_MULTIPLE_VAST");
        static const int ERROR_VAST_REDIRECT_FAILED_HASH = HashingUtils::HashString("ERROR_VAST_REDIRECT_FAILED");
        static const int ERROR_VAST_MISSING_MEDIAFILES_HASH = HashingUtils::HashString("ERROR_VAST_MISSING_MEDIAFILES");
        static const int ERROR_VAST_MISSING_CREATIVES_HASH = HashingUtils::HashString("ERROR_VAST_MISSING_CREATIVES");
        static const int ERROR_VAST_MISSING_OVERLAYS_HASH = HashingUtils::HashString("ERROR_VAST_MISSING_OVERLAYS");
        static const int ERROR_VAST_MISSING_IMPRESSION_HASH = HashingUtils::HashString("ERROR_VAST_MISSING_IMPRESSION");
        static const int ERROR_VAST_INVALID_VAST_AD_TAG_URI_HASH = HashingUtils::HashString("ERROR_VAST_INVALID_VAST_AD_TAG_URI");
        static const int ERROR_VAST_MULTIPLE_TRACKING_EVENTS_HASH = HashingUtils::HashString("ERROR_VAST_MULTIPLE_TRACKING_EVENTS");
        static const int ERROR_VAST_MULTIPLE_LINEAR_HASH = HashingUtils::HashString("ERROR_VAST_MULTIPLE_LINEAR");
        static const int ERROR_VAST_INVALID_MEDIA_FILE_HASH = HashingUtils::HashString("ERROR_VAST_INVALID_MEDIA_FILE");
        static const int ERROR_FIRING_BEACON_FAILED_HASH = HashingUtils::HashString("ERROR_FIRING_BEACON_FAILED");
        static const int ERROR_PERSONALIZATION_DISABLED_HASH = HashingUtils::HashString("ERROR_PERSONALIZATION_DISABLED");
        static const int VOD_TIME_BASED_AVAIL_PLAN_VAST_RESPONSE_FOR_OFFSET_HASH = HashingUtils::HashString("VOD_TIME_BASED_AVAIL_PLAN_VAST_RESPONSE_FOR_OFFSET");
        static const int VOD_TIME_BASED_AVAIL_PLAN_SUCCESS_HASH = HashingUtils::HashString("VOD_TIME_BASED_AVAIL_PLAN_SUCCESS");
        static const int VOD_TIME_BASED_AVAIL_PLAN_WARNING_NO_ADVERTISEMENTS_HASH = HashingUtils::HashString("VOD_TIME_BASED_AVAIL_PLAN_WARNING_NO_ADVERTISEMENTS");
        static const int INTERSTITIAL_VOD_SUCCESS_HASH = HashingUtils::HashString("INTERSTITIAL_VOD_SUCCESS");
        static const int INTERSTITIAL_VOD_FAILURE_HASH = HashingUtils::HashString("INTERSTITIAL_VOD_FAILURE");


        AdsInteractionExcludeEventType GetAdsInteractionExcludeEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AD_MARKER_FOUND_HASH)
          {
            return AdsInteractionExcludeEventType::AD_MARKER_FOUND;
          }
          else if (hashCode == NON_AD_MARKER_FOUND_HASH)
          {
            return AdsInteractionExcludeEventType::NON_AD_MARKER_FOUND;
          }
          else if (hashCode == MAKING_ADS_REQUEST_HASH)
          {
            return AdsInteractionExcludeEventType::MAKING_ADS_REQUEST;
          }
          else if (hashCode == MODIFIED_TARGET_URL_HASH)
          {
            return AdsInteractionExcludeEventType::MODIFIED_TARGET_URL;
          }
          else if (hashCode == VAST_REDIRECT_HASH)
          {
            return AdsInteractionExcludeEventType::VAST_REDIRECT;
          }
          else if (hashCode == EMPTY_VAST_RESPONSE_HASH)
          {
            return AdsInteractionExcludeEventType::EMPTY_VAST_RESPONSE;
          }
          else if (hashCode == EMPTY_VMAP_RESPONSE_HASH)
          {
            return AdsInteractionExcludeEventType::EMPTY_VMAP_RESPONSE;
          }
          else if (hashCode == VAST_RESPONSE_HASH)
          {
            return AdsInteractionExcludeEventType::VAST_RESPONSE;
          }
          else if (hashCode == REDIRECTED_VAST_RESPONSE_HASH)
          {
            return AdsInteractionExcludeEventType::REDIRECTED_VAST_RESPONSE;
          }
          else if (hashCode == FILLED_AVAIL_HASH)
          {
            return AdsInteractionExcludeEventType::FILLED_AVAIL;
          }
          else if (hashCode == FILLED_OVERLAY_AVAIL_HASH)
          {
            return AdsInteractionExcludeEventType::FILLED_OVERLAY_AVAIL;
          }
          else if (hashCode == BEACON_FIRED_HASH)
          {
            return AdsInteractionExcludeEventType::BEACON_FIRED;
          }
          else if (hashCode == WARNING_NO_ADVERTISEMENTS_HASH)
          {
            return AdsInteractionExcludeEventType::WARNING_NO_ADVERTISEMENTS;
          }
          else if (hashCode == WARNING_VPAID_AD_DROPPED_HASH)
          {
            return AdsInteractionExcludeEventType::WARNING_VPAID_AD_DROPPED;
          }
          else if (hashCode == WARNING_URL_VARIABLE_SUBSTITUTION_FAILED_HASH)
          {
            return AdsInteractionExcludeEventType::WARNING_URL_VARIABLE_SUBSTITUTION_FAILED;
          }
          else if (hashCode == ERROR_UNKNOWN_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_UNKNOWN;
          }
          else if (hashCode == ERROR_UNKNOWN_HOST_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_UNKNOWN_HOST;
          }
          else if (hashCode == ERROR_DISALLOWED_HOST_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_DISALLOWED_HOST;
          }
          else if (hashCode == ERROR_ADS_IO_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_ADS_IO;
          }
          else if (hashCode == ERROR_ADS_TIMEOUT_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_ADS_TIMEOUT;
          }
          else if (hashCode == ERROR_ADS_RESPONSE_PARSE_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_ADS_RESPONSE_PARSE;
          }
          else if (hashCode == ERROR_ADS_RESPONSE_UNKNOWN_ROOT_ELEMENT_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_ADS_RESPONSE_UNKNOWN_ROOT_ELEMENT;
          }
          else if (hashCode == ERROR_ADS_INVALID_RESPONSE_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_ADS_INVALID_RESPONSE;
          }
          else if (hashCode == ERROR_VAST_REDIRECT_EMPTY_RESPONSE_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_VAST_REDIRECT_EMPTY_RESPONSE;
          }
          else if (hashCode == ERROR_VAST_REDIRECT_MULTIPLE_VAST_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_VAST_REDIRECT_MULTIPLE_VAST;
          }
          else if (hashCode == ERROR_VAST_REDIRECT_FAILED_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_VAST_REDIRECT_FAILED;
          }
          else if (hashCode == ERROR_VAST_MISSING_MEDIAFILES_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_VAST_MISSING_MEDIAFILES;
          }
          else if (hashCode == ERROR_VAST_MISSING_CREATIVES_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_VAST_MISSING_CREATIVES;
          }
          else if (hashCode == ERROR_VAST_MISSING_OVERLAYS_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_VAST_MISSING_OVERLAYS;
          }
          else if (hashCode == ERROR_VAST_MISSING_IMPRESSION_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_VAST_MISSING_IMPRESSION;
          }
          else if (hashCode == ERROR_VAST_INVALID_VAST_AD_TAG_URI_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_VAST_INVALID_VAST_AD_TAG_URI;
          }
          else if (hashCode == ERROR_VAST_MULTIPLE_TRACKING_EVENTS_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_VAST_MULTIPLE_TRACKING_EVENTS;
          }
          else if (hashCode == ERROR_VAST_MULTIPLE_LINEAR_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_VAST_MULTIPLE_LINEAR;
          }
          else if (hashCode == ERROR_VAST_INVALID_MEDIA_FILE_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_VAST_INVALID_MEDIA_FILE;
          }
          else if (hashCode == ERROR_FIRING_BEACON_FAILED_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_FIRING_BEACON_FAILED;
          }
          else if (hashCode == ERROR_PERSONALIZATION_DISABLED_HASH)
          {
            return AdsInteractionExcludeEventType::ERROR_PERSONALIZATION_DISABLED;
          }
          else if (hashCode == VOD_TIME_BASED_AVAIL_PLAN_VAST_RESPONSE_FOR_OFFSET_HASH)
          {
            return AdsInteractionExcludeEventType::VOD_TIME_BASED_AVAIL_PLAN_VAST_RESPONSE_FOR_OFFSET;
          }
          else if (hashCode == VOD_TIME_BASED_AVAIL_PLAN_SUCCESS_HASH)
          {
            return AdsInteractionExcludeEventType::VOD_TIME_BASED_AVAIL_PLAN_SUCCESS;
          }
          else if (hashCode == VOD_TIME_BASED_AVAIL_PLAN_WARNING_NO_ADVERTISEMENTS_HASH)
          {
            return AdsInteractionExcludeEventType::VOD_TIME_BASED_AVAIL_PLAN_WARNING_NO_ADVERTISEMENTS;
          }
          else if (hashCode == INTERSTITIAL_VOD_SUCCESS_HASH)
          {
            return AdsInteractionExcludeEventType::INTERSTITIAL_VOD_SUCCESS;
          }
          else if (hashCode == INTERSTITIAL_VOD_FAILURE_HASH)
          {
            return AdsInteractionExcludeEventType::INTERSTITIAL_VOD_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdsInteractionExcludeEventType>(hashCode);
          }

          return AdsInteractionExcludeEventType::NOT_SET;
        }

        Aws::String GetNameForAdsInteractionExcludeEventType(AdsInteractionExcludeEventType enumValue)
        {
          switch(enumValue)
          {
          case AdsInteractionExcludeEventType::NOT_SET:
            return {};
          case AdsInteractionExcludeEventType::AD_MARKER_FOUND:
            return "AD_MARKER_FOUND";
          case AdsInteractionExcludeEventType::NON_AD_MARKER_FOUND:
            return "NON_AD_MARKER_FOUND";
          case AdsInteractionExcludeEventType::MAKING_ADS_REQUEST:
            return "MAKING_ADS_REQUEST";
          case AdsInteractionExcludeEventType::MODIFIED_TARGET_URL:
            return "MODIFIED_TARGET_URL";
          case AdsInteractionExcludeEventType::VAST_REDIRECT:
            return "VAST_REDIRECT";
          case AdsInteractionExcludeEventType::EMPTY_VAST_RESPONSE:
            return "EMPTY_VAST_RESPONSE";
          case AdsInteractionExcludeEventType::EMPTY_VMAP_RESPONSE:
            return "EMPTY_VMAP_RESPONSE";
          case AdsInteractionExcludeEventType::VAST_RESPONSE:
            return "VAST_RESPONSE";
          case AdsInteractionExcludeEventType::REDIRECTED_VAST_RESPONSE:
            return "REDIRECTED_VAST_RESPONSE";
          case AdsInteractionExcludeEventType::FILLED_AVAIL:
            return "FILLED_AVAIL";
          case AdsInteractionExcludeEventType::FILLED_OVERLAY_AVAIL:
            return "FILLED_OVERLAY_AVAIL";
          case AdsInteractionExcludeEventType::BEACON_FIRED:
            return "BEACON_FIRED";
          case AdsInteractionExcludeEventType::WARNING_NO_ADVERTISEMENTS:
            return "WARNING_NO_ADVERTISEMENTS";
          case AdsInteractionExcludeEventType::WARNING_VPAID_AD_DROPPED:
            return "WARNING_VPAID_AD_DROPPED";
          case AdsInteractionExcludeEventType::WARNING_URL_VARIABLE_SUBSTITUTION_FAILED:
            return "WARNING_URL_VARIABLE_SUBSTITUTION_FAILED";
          case AdsInteractionExcludeEventType::ERROR_UNKNOWN:
            return "ERROR_UNKNOWN";
          case AdsInteractionExcludeEventType::ERROR_UNKNOWN_HOST:
            return "ERROR_UNKNOWN_HOST";
          case AdsInteractionExcludeEventType::ERROR_DISALLOWED_HOST:
            return "ERROR_DISALLOWED_HOST";
          case AdsInteractionExcludeEventType::ERROR_ADS_IO:
            return "ERROR_ADS_IO";
          case AdsInteractionExcludeEventType::ERROR_ADS_TIMEOUT:
            return "ERROR_ADS_TIMEOUT";
          case AdsInteractionExcludeEventType::ERROR_ADS_RESPONSE_PARSE:
            return "ERROR_ADS_RESPONSE_PARSE";
          case AdsInteractionExcludeEventType::ERROR_ADS_RESPONSE_UNKNOWN_ROOT_ELEMENT:
            return "ERROR_ADS_RESPONSE_UNKNOWN_ROOT_ELEMENT";
          case AdsInteractionExcludeEventType::ERROR_ADS_INVALID_RESPONSE:
            return "ERROR_ADS_INVALID_RESPONSE";
          case AdsInteractionExcludeEventType::ERROR_VAST_REDIRECT_EMPTY_RESPONSE:
            return "ERROR_VAST_REDIRECT_EMPTY_RESPONSE";
          case AdsInteractionExcludeEventType::ERROR_VAST_REDIRECT_MULTIPLE_VAST:
            return "ERROR_VAST_REDIRECT_MULTIPLE_VAST";
          case AdsInteractionExcludeEventType::ERROR_VAST_REDIRECT_FAILED:
            return "ERROR_VAST_REDIRECT_FAILED";
          case AdsInteractionExcludeEventType::ERROR_VAST_MISSING_MEDIAFILES:
            return "ERROR_VAST_MISSING_MEDIAFILES";
          case AdsInteractionExcludeEventType::ERROR_VAST_MISSING_CREATIVES:
            return "ERROR_VAST_MISSING_CREATIVES";
          case AdsInteractionExcludeEventType::ERROR_VAST_MISSING_OVERLAYS:
            return "ERROR_VAST_MISSING_OVERLAYS";
          case AdsInteractionExcludeEventType::ERROR_VAST_MISSING_IMPRESSION:
            return "ERROR_VAST_MISSING_IMPRESSION";
          case AdsInteractionExcludeEventType::ERROR_VAST_INVALID_VAST_AD_TAG_URI:
            return "ERROR_VAST_INVALID_VAST_AD_TAG_URI";
          case AdsInteractionExcludeEventType::ERROR_VAST_MULTIPLE_TRACKING_EVENTS:
            return "ERROR_VAST_MULTIPLE_TRACKING_EVENTS";
          case AdsInteractionExcludeEventType::ERROR_VAST_MULTIPLE_LINEAR:
            return "ERROR_VAST_MULTIPLE_LINEAR";
          case AdsInteractionExcludeEventType::ERROR_VAST_INVALID_MEDIA_FILE:
            return "ERROR_VAST_INVALID_MEDIA_FILE";
          case AdsInteractionExcludeEventType::ERROR_FIRING_BEACON_FAILED:
            return "ERROR_FIRING_BEACON_FAILED";
          case AdsInteractionExcludeEventType::ERROR_PERSONALIZATION_DISABLED:
            return "ERROR_PERSONALIZATION_DISABLED";
          case AdsInteractionExcludeEventType::VOD_TIME_BASED_AVAIL_PLAN_VAST_RESPONSE_FOR_OFFSET:
            return "VOD_TIME_BASED_AVAIL_PLAN_VAST_RESPONSE_FOR_OFFSET";
          case AdsInteractionExcludeEventType::VOD_TIME_BASED_AVAIL_PLAN_SUCCESS:
            return "VOD_TIME_BASED_AVAIL_PLAN_SUCCESS";
          case AdsInteractionExcludeEventType::VOD_TIME_BASED_AVAIL_PLAN_WARNING_NO_ADVERTISEMENTS:
            return "VOD_TIME_BASED_AVAIL_PLAN_WARNING_NO_ADVERTISEMENTS";
          case AdsInteractionExcludeEventType::INTERSTITIAL_VOD_SUCCESS:
            return "INTERSTITIAL_VOD_SUCCESS";
          case AdsInteractionExcludeEventType::INTERSTITIAL_VOD_FAILURE:
            return "INTERSTITIAL_VOD_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdsInteractionExcludeEventTypeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
