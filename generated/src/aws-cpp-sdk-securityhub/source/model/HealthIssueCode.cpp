/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/HealthIssueCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace HealthIssueCodeMapper {

static const int AUTHENTICATION_FAILURE_HASH = HashingUtils::HashString("AUTHENTICATION_FAILURE");
static const int STREAM_AUTHORIZATION_FAILURE_HASH = HashingUtils::HashString("STREAM_AUTHORIZATION_FAILURE");
static const int DISCOVERY_FAILURE_HASH = HashingUtils::HashString("DISCOVERY_FAILURE");
static const int STREAM_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("STREAM_LIMIT_EXCEEDED");
static const int STREAM_DISCONNECTED_HASH = HashingUtils::HashString("STREAM_DISCONNECTED");
static const int RECORDING_FAILURE_HASH = HashingUtils::HashString("RECORDING_FAILURE");
static const int NO_HEALTH_DATA_HASH = HashingUtils::HashString("NO_HEALTH_DATA");

HealthIssueCode GetHealthIssueCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTHENTICATION_FAILURE_HASH) {
    return HealthIssueCode::AUTHENTICATION_FAILURE;
  } else if (hashCode == STREAM_AUTHORIZATION_FAILURE_HASH) {
    return HealthIssueCode::STREAM_AUTHORIZATION_FAILURE;
  } else if (hashCode == DISCOVERY_FAILURE_HASH) {
    return HealthIssueCode::DISCOVERY_FAILURE;
  } else if (hashCode == STREAM_LIMIT_EXCEEDED_HASH) {
    return HealthIssueCode::STREAM_LIMIT_EXCEEDED;
  } else if (hashCode == STREAM_DISCONNECTED_HASH) {
    return HealthIssueCode::STREAM_DISCONNECTED;
  } else if (hashCode == RECORDING_FAILURE_HASH) {
    return HealthIssueCode::RECORDING_FAILURE;
  } else if (hashCode == NO_HEALTH_DATA_HASH) {
    return HealthIssueCode::NO_HEALTH_DATA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HealthIssueCode>(hashCode);
  }

  return HealthIssueCode::NOT_SET;
}

Aws::String GetNameForHealthIssueCode(HealthIssueCode enumValue) {
  switch (enumValue) {
    case HealthIssueCode::NOT_SET:
      return {};
    case HealthIssueCode::AUTHENTICATION_FAILURE:
      return "AUTHENTICATION_FAILURE";
    case HealthIssueCode::STREAM_AUTHORIZATION_FAILURE:
      return "STREAM_AUTHORIZATION_FAILURE";
    case HealthIssueCode::DISCOVERY_FAILURE:
      return "DISCOVERY_FAILURE";
    case HealthIssueCode::STREAM_LIMIT_EXCEEDED:
      return "STREAM_LIMIT_EXCEEDED";
    case HealthIssueCode::STREAM_DISCONNECTED:
      return "STREAM_DISCONNECTED";
    case HealthIssueCode::RECORDING_FAILURE:
      return "RECORDING_FAILURE";
    case HealthIssueCode::NO_HEALTH_DATA:
      return "NO_HEALTH_DATA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HealthIssueCodeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
