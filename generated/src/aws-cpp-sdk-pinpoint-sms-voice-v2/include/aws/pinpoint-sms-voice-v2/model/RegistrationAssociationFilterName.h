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
  enum class RegistrationAssociationFilterName
  {
    NOT_SET,
    resource_type,
    iso_country_code
  };

namespace RegistrationAssociationFilterNameMapper
{
AWS_PINPOINTSMSVOICEV2_API RegistrationAssociationFilterName GetRegistrationAssociationFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForRegistrationAssociationFilterName(RegistrationAssociationFilterName value);
} // namespace RegistrationAssociationFilterNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
