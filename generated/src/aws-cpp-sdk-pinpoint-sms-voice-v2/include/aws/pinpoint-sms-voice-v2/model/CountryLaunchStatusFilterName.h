/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
enum class CountryLaunchStatusFilterName { NOT_SET, country_launch_status };

namespace CountryLaunchStatusFilterNameMapper {
AWS_PINPOINTSMSVOICEV2_API CountryLaunchStatusFilterName GetCountryLaunchStatusFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForCountryLaunchStatusFilterName(CountryLaunchStatusFilterName value);
}  // namespace CountryLaunchStatusFilterNameMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
