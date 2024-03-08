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
  enum class RegistrationDisassociationBehavior
  {
    NOT_SET,
    DISASSOCIATE_ALL_CLOSES_REGISTRATION,
    DISASSOCIATE_ALL_ALLOWS_DELETE_REGISTRATION,
    DELETE_REGISTRATION_DISASSOCIATES
  };

namespace RegistrationDisassociationBehaviorMapper
{
AWS_PINPOINTSMSVOICEV2_API RegistrationDisassociationBehavior GetRegistrationDisassociationBehaviorForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForRegistrationDisassociationBehavior(RegistrationDisassociationBehavior value);
} // namespace RegistrationDisassociationBehaviorMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
