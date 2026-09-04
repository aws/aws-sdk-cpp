/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace MediaTailor {
namespace Model {
enum class AdsInteractionPublishOptInEventType {
  NOT_SET,
  RAW_ADS_RESPONSE,
  RAW_ADS_REQUEST,
  RAW_BID_REQUEST,
  RAW_BID_RESPONSE,
  PRE_ADS_REQUEST_HOOK_SUMMARY,
  PRE_ADS_REQUEST_FUNCTION_COMPLETED,
  POST_ADS_RESPONSE_HOOK_SUMMARY,
  POST_ADS_RESPONSE_FUNCTION_COMPLETED,
  PRE_MANIFEST_INSERTION_HOOK_SUMMARY,
  PRE_MANIFEST_INSERTION_FUNCTION_COMPLETED
};

namespace AdsInteractionPublishOptInEventTypeMapper {
AWS_MEDIATAILOR_API AdsInteractionPublishOptInEventType GetAdsInteractionPublishOptInEventTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForAdsInteractionPublishOptInEventType(AdsInteractionPublishOptInEventType value);
}  // namespace AdsInteractionPublishOptInEventTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
