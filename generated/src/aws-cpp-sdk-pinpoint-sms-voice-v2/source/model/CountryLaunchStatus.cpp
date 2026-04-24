/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/CountryLaunchStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace CountryLaunchStatusMapper {

static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");

CountryLaunchStatus GetCountryLaunchStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_HASH) {
    return CountryLaunchStatus::CREATED;
  } else if (hashCode == PENDING_HASH) {
    return CountryLaunchStatus::PENDING;
  } else if (hashCode == PARTIAL_HASH) {
    return CountryLaunchStatus::PARTIAL;
  } else if (hashCode == ACTIVE_HASH) {
    return CountryLaunchStatus::ACTIVE;
  } else if (hashCode == REJECTED_HASH) {
    return CountryLaunchStatus::REJECTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CountryLaunchStatus>(hashCode);
  }

  return CountryLaunchStatus::NOT_SET;
}

Aws::String GetNameForCountryLaunchStatus(CountryLaunchStatus enumValue) {
  switch (enumValue) {
    case CountryLaunchStatus::NOT_SET:
      return {};
    case CountryLaunchStatus::CREATED:
      return "CREATED";
    case CountryLaunchStatus::PENDING:
      return "PENDING";
    case CountryLaunchStatus::PARTIAL:
      return "PARTIAL";
    case CountryLaunchStatus::ACTIVE:
      return "ACTIVE";
    case CountryLaunchStatus::REJECTED:
      return "REJECTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CountryLaunchStatusMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
