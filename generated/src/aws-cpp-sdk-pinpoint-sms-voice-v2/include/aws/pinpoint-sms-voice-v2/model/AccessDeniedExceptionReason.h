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
  enum class AccessDeniedExceptionReason
  {
    NOT_SET,
    INSUFFICIENT_ACCOUNT_REPUTATION,
    ACCOUNT_DISABLED
  };

namespace AccessDeniedExceptionReasonMapper
{
AWS_PINPOINTSMSVOICEV2_API AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason value);
} // namespace AccessDeniedExceptionReasonMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
