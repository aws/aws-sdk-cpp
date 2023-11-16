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
  enum class RegistrationVersionStatus
  {
    NOT_SET,
    DRAFT,
    SUBMITTED,
    REVIEWING,
    APPROVED,
    DISCARDED,
    DENIED,
    REVOKED,
    ARCHIVED
  };

namespace RegistrationVersionStatusMapper
{
AWS_PINPOINTSMSVOICEV2_API RegistrationVersionStatus GetRegistrationVersionStatusForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForRegistrationVersionStatus(RegistrationVersionStatus value);
} // namespace RegistrationVersionStatusMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
