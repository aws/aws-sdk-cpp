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
  enum class RegistrationAssociationBehavior
  {
    NOT_SET,
    ASSOCIATE_BEFORE_SUBMIT,
    ASSOCIATE_ON_APPROVAL,
    ASSOCIATE_AFTER_COMPLETE
  };

namespace RegistrationAssociationBehaviorMapper
{
AWS_PINPOINTSMSVOICEV2_API RegistrationAssociationBehavior GetRegistrationAssociationBehaviorForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForRegistrationAssociationBehavior(RegistrationAssociationBehavior value);
} // namespace RegistrationAssociationBehaviorMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
