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
  enum class RegistrationStatus
  {
    NOT_SET,
    CREATED,
    SUBMITTED,
    REVIEWING,
    PROVISIONING,
    COMPLETE,
    REQUIRES_UPDATES,
    CLOSED,
    DELETED
  };

namespace RegistrationStatusMapper
{
AWS_PINPOINTSMSVOICEV2_API RegistrationStatus GetRegistrationStatusForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForRegistrationStatus(RegistrationStatus value);
} // namespace RegistrationStatusMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
