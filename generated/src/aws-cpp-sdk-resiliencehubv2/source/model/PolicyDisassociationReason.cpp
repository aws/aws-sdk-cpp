/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/PolicyDisassociationReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace PolicyDisassociationReasonMapper {

static const int REPLACED_BY_UPDATE_HASH = HashingUtils::HashString("REPLACED_BY_UPDATE");
static const int SHARING_REVOKED_HASH = HashingUtils::HashString("SHARING_REVOKED");
static const int POLICY_DELETED_HASH = HashingUtils::HashString("POLICY_DELETED");

PolicyDisassociationReason GetPolicyDisassociationReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REPLACED_BY_UPDATE_HASH) {
    return PolicyDisassociationReason::REPLACED_BY_UPDATE;
  } else if (hashCode == SHARING_REVOKED_HASH) {
    return PolicyDisassociationReason::SHARING_REVOKED;
  } else if (hashCode == POLICY_DELETED_HASH) {
    return PolicyDisassociationReason::POLICY_DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyDisassociationReason>(hashCode);
  }

  return PolicyDisassociationReason::NOT_SET;
}

Aws::String GetNameForPolicyDisassociationReason(PolicyDisassociationReason enumValue) {
  switch (enumValue) {
    case PolicyDisassociationReason::NOT_SET:
      return {};
    case PolicyDisassociationReason::REPLACED_BY_UPDATE:
      return "REPLACED_BY_UPDATE";
    case PolicyDisassociationReason::SHARING_REVOKED:
      return "SHARING_REVOKED";
    case PolicyDisassociationReason::POLICY_DELETED:
      return "POLICY_DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyDisassociationReasonMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
