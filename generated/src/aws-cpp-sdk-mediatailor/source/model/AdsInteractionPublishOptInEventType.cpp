/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/AdsInteractionPublishOptInEventType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace AdsInteractionPublishOptInEventTypeMapper {

static const int RAW_ADS_RESPONSE_HASH = HashingUtils::HashString("RAW_ADS_RESPONSE");
static const int RAW_ADS_REQUEST_HASH = HashingUtils::HashString("RAW_ADS_REQUEST");
static const int RAW_BID_REQUEST_HASH = HashingUtils::HashString("RAW_BID_REQUEST");
static const int RAW_BID_RESPONSE_HASH = HashingUtils::HashString("RAW_BID_RESPONSE");
static const int PRE_ADS_REQUEST_HOOK_SUMMARY_HASH = HashingUtils::HashString("PRE_ADS_REQUEST_HOOK_SUMMARY");
static const int PRE_ADS_REQUEST_FUNCTION_COMPLETED_HASH = HashingUtils::HashString("PRE_ADS_REQUEST_FUNCTION_COMPLETED");
static const int POST_ADS_RESPONSE_HOOK_SUMMARY_HASH = HashingUtils::HashString("POST_ADS_RESPONSE_HOOK_SUMMARY");
static const int POST_ADS_RESPONSE_FUNCTION_COMPLETED_HASH = HashingUtils::HashString("POST_ADS_RESPONSE_FUNCTION_COMPLETED");
static const int PRE_MANIFEST_INSERTION_HOOK_SUMMARY_HASH = HashingUtils::HashString("PRE_MANIFEST_INSERTION_HOOK_SUMMARY");
static const int PRE_MANIFEST_INSERTION_FUNCTION_COMPLETED_HASH = HashingUtils::HashString("PRE_MANIFEST_INSERTION_FUNCTION_COMPLETED");

AdsInteractionPublishOptInEventType GetAdsInteractionPublishOptInEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RAW_ADS_RESPONSE_HASH) {
    return AdsInteractionPublishOptInEventType::RAW_ADS_RESPONSE;
  } else if (hashCode == RAW_ADS_REQUEST_HASH) {
    return AdsInteractionPublishOptInEventType::RAW_ADS_REQUEST;
  } else if (hashCode == RAW_BID_REQUEST_HASH) {
    return AdsInteractionPublishOptInEventType::RAW_BID_REQUEST;
  } else if (hashCode == RAW_BID_RESPONSE_HASH) {
    return AdsInteractionPublishOptInEventType::RAW_BID_RESPONSE;
  } else if (hashCode == PRE_ADS_REQUEST_HOOK_SUMMARY_HASH) {
    return AdsInteractionPublishOptInEventType::PRE_ADS_REQUEST_HOOK_SUMMARY;
  } else if (hashCode == PRE_ADS_REQUEST_FUNCTION_COMPLETED_HASH) {
    return AdsInteractionPublishOptInEventType::PRE_ADS_REQUEST_FUNCTION_COMPLETED;
  } else if (hashCode == POST_ADS_RESPONSE_HOOK_SUMMARY_HASH) {
    return AdsInteractionPublishOptInEventType::POST_ADS_RESPONSE_HOOK_SUMMARY;
  } else if (hashCode == POST_ADS_RESPONSE_FUNCTION_COMPLETED_HASH) {
    return AdsInteractionPublishOptInEventType::POST_ADS_RESPONSE_FUNCTION_COMPLETED;
  } else if (hashCode == PRE_MANIFEST_INSERTION_HOOK_SUMMARY_HASH) {
    return AdsInteractionPublishOptInEventType::PRE_MANIFEST_INSERTION_HOOK_SUMMARY;
  } else if (hashCode == PRE_MANIFEST_INSERTION_FUNCTION_COMPLETED_HASH) {
    return AdsInteractionPublishOptInEventType::PRE_MANIFEST_INSERTION_FUNCTION_COMPLETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AdsInteractionPublishOptInEventType>(hashCode);
  }

  return AdsInteractionPublishOptInEventType::NOT_SET;
}

Aws::String GetNameForAdsInteractionPublishOptInEventType(AdsInteractionPublishOptInEventType enumValue) {
  switch (enumValue) {
    case AdsInteractionPublishOptInEventType::NOT_SET:
      return {};
    case AdsInteractionPublishOptInEventType::RAW_ADS_RESPONSE:
      return "RAW_ADS_RESPONSE";
    case AdsInteractionPublishOptInEventType::RAW_ADS_REQUEST:
      return "RAW_ADS_REQUEST";
    case AdsInteractionPublishOptInEventType::RAW_BID_REQUEST:
      return "RAW_BID_REQUEST";
    case AdsInteractionPublishOptInEventType::RAW_BID_RESPONSE:
      return "RAW_BID_RESPONSE";
    case AdsInteractionPublishOptInEventType::PRE_ADS_REQUEST_HOOK_SUMMARY:
      return "PRE_ADS_REQUEST_HOOK_SUMMARY";
    case AdsInteractionPublishOptInEventType::PRE_ADS_REQUEST_FUNCTION_COMPLETED:
      return "PRE_ADS_REQUEST_FUNCTION_COMPLETED";
    case AdsInteractionPublishOptInEventType::POST_ADS_RESPONSE_HOOK_SUMMARY:
      return "POST_ADS_RESPONSE_HOOK_SUMMARY";
    case AdsInteractionPublishOptInEventType::POST_ADS_RESPONSE_FUNCTION_COMPLETED:
      return "POST_ADS_RESPONSE_FUNCTION_COMPLETED";
    case AdsInteractionPublishOptInEventType::PRE_MANIFEST_INSERTION_HOOK_SUMMARY:
      return "PRE_MANIFEST_INSERTION_HOOK_SUMMARY";
    case AdsInteractionPublishOptInEventType::PRE_MANIFEST_INSERTION_FUNCTION_COMPLETED:
      return "PRE_MANIFEST_INSERTION_FUNCTION_COMPLETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AdsInteractionPublishOptInEventTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
