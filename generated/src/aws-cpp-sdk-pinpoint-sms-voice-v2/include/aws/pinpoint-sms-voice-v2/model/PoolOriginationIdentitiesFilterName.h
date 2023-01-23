/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{
  enum class PoolOriginationIdentitiesFilterName
  {
    NOT_SET,
    iso_country_code,
    number_capability
  };

namespace PoolOriginationIdentitiesFilterNameMapper
{
AWS_PINPOINTSMSVOICEV2_API PoolOriginationIdentitiesFilterName GetPoolOriginationIdentitiesFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForPoolOriginationIdentitiesFilterName(PoolOriginationIdentitiesFilterName value);
} // namespace PoolOriginationIdentitiesFilterNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
