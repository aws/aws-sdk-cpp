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
  enum class AdsInteractionPublishOptInEventType
  {
    NOT_SET,
    RAW_ADS_RESPONSE
  };

namespace AdsInteractionPublishOptInEventTypeMapper
{
AWS_MEDIATAILOR_API AdsInteractionPublishOptInEventType GetAdsInteractionPublishOptInEventTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForAdsInteractionPublishOptInEventType(AdsInteractionPublishOptInEventType value);
} // namespace AdsInteractionPublishOptInEventTypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
