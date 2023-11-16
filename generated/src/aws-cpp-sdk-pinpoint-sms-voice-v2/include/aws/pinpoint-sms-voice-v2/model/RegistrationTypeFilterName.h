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
  enum class RegistrationTypeFilterName
  {
    NOT_SET,
    supported_association_resource_type,
    supported_association_iso_country_code
  };

namespace RegistrationTypeFilterNameMapper
{
AWS_PINPOINTSMSVOICEV2_API RegistrationTypeFilterName GetRegistrationTypeFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForRegistrationTypeFilterName(RegistrationTypeFilterName value);
} // namespace RegistrationTypeFilterNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
