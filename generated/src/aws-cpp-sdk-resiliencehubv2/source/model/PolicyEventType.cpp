/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/PolicyEventType.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace PolicyEventTypeMapper {

static const int POLICY_ATTACHED_TO_SERVICE_HASH = HashingUtils::HashString("POLICY_ATTACHED_TO_SERVICE");
static const int POLICY_DETACHED_FROM_SERVICE_HASH = HashingUtils::HashString("POLICY_DETACHED_FROM_SERVICE");
static const int POLICY_SHARING_REVOKED_HASH = HashingUtils::HashString("POLICY_SHARING_REVOKED");
static const int POLICY_DELETED_HASH = HashingUtils::HashString("POLICY_DELETED");

PolicyEventType GetPolicyEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == POLICY_ATTACHED_TO_SERVICE_HASH) {
    return PolicyEventType::POLICY_ATTACHED_TO_SERVICE;
  } else if (hashCode == POLICY_DETACHED_FROM_SERVICE_HASH) {
    return PolicyEventType::POLICY_DETACHED_FROM_SERVICE;
  } else if (hashCode == POLICY_SHARING_REVOKED_HASH) {
    return PolicyEventType::POLICY_SHARING_REVOKED;
  } else if (hashCode == POLICY_DELETED_HASH) {
    return PolicyEventType::POLICY_DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyEventType>(hashCode);
  }

  return PolicyEventType::NOT_SET;
}

Aws::String GetNameForPolicyEventType(PolicyEventType enumValue) {
  switch (enumValue) {
    case PolicyEventType::NOT_SET:
      return {};
    case PolicyEventType::POLICY_ATTACHED_TO_SERVICE:
      return "POLICY_ATTACHED_TO_SERVICE";
    case PolicyEventType::POLICY_DETACHED_FROM_SERVICE:
      return "POLICY_DETACHED_FROM_SERVICE";
    case PolicyEventType::POLICY_SHARING_REVOKED:
      return "POLICY_SHARING_REVOKED";
    case PolicyEventType::POLICY_DELETED:
      return "POLICY_DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyEventTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
