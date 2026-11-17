/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/ThirdPartyTelemetrySource.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace ThirdPartyTelemetrySourceMapper {

static const int Azure_HASH = HashingUtils::HashString("Azure");

ThirdPartyTelemetrySource GetThirdPartyTelemetrySourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Azure_HASH) {
    return ThirdPartyTelemetrySource::Azure;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ThirdPartyTelemetrySource>(hashCode);
  }

  return ThirdPartyTelemetrySource::NOT_SET;
}

Aws::String GetNameForThirdPartyTelemetrySource(ThirdPartyTelemetrySource enumValue) {
  switch (enumValue) {
    case ThirdPartyTelemetrySource::NOT_SET:
      return {};
    case ThirdPartyTelemetrySource::Azure:
      return "Azure";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ThirdPartyTelemetrySourceMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
