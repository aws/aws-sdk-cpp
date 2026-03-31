/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/CountryLaunchStatusFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace CountryLaunchStatusFilterNameMapper {

static const int country_launch_status_HASH = HashingUtils::HashString("country-launch-status");

CountryLaunchStatusFilterName GetCountryLaunchStatusFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == country_launch_status_HASH) {
    return CountryLaunchStatusFilterName::country_launch_status;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CountryLaunchStatusFilterName>(hashCode);
  }

  return CountryLaunchStatusFilterName::NOT_SET;
}

Aws::String GetNameForCountryLaunchStatusFilterName(CountryLaunchStatusFilterName enumValue) {
  switch (enumValue) {
    case CountryLaunchStatusFilterName::NOT_SET:
      return {};
    case CountryLaunchStatusFilterName::country_launch_status:
      return "country-launch-status";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CountryLaunchStatusFilterNameMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
