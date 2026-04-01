/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/TargetDomainStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace TargetDomainStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int VERIFIED_HASH = HashingUtils::HashString("VERIFIED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int UNREACHABLE_HASH = HashingUtils::HashString("UNREACHABLE");

TargetDomainStatus GetTargetDomainStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return TargetDomainStatus::PENDING;
  } else if (hashCode == VERIFIED_HASH) {
    return TargetDomainStatus::VERIFIED;
  } else if (hashCode == FAILED_HASH) {
    return TargetDomainStatus::FAILED;
  } else if (hashCode == UNREACHABLE_HASH) {
    return TargetDomainStatus::UNREACHABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TargetDomainStatus>(hashCode);
  }

  return TargetDomainStatus::NOT_SET;
}

Aws::String GetNameForTargetDomainStatus(TargetDomainStatus enumValue) {
  switch (enumValue) {
    case TargetDomainStatus::NOT_SET:
      return {};
    case TargetDomainStatus::PENDING:
      return "PENDING";
    case TargetDomainStatus::VERIFIED:
      return "VERIFIED";
    case TargetDomainStatus::FAILED:
      return "FAILED";
    case TargetDomainStatus::UNREACHABLE:
      return "UNREACHABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TargetDomainStatusMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
