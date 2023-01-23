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
  enum class OptedOutFilterName
  {
    NOT_SET,
    end_user_opted_out
  };

namespace OptedOutFilterNameMapper
{
AWS_PINPOINTSMSVOICEV2_API OptedOutFilterName GetOptedOutFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForOptedOutFilterName(OptedOutFilterName value);
} // namespace OptedOutFilterNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
