/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/secretsmanager/model/ReplicaRestrictionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecretsManager {
namespace Model {
namespace ReplicaRestrictionTypeMapper {

static const int SameOrg_HASH = HashingUtils::HashString("SameOrg");
static const int NoRestriction_HASH = HashingUtils::HashString("NoRestriction");

ReplicaRestrictionType GetReplicaRestrictionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SameOrg_HASH) {
    return ReplicaRestrictionType::SameOrg;
  } else if (hashCode == NoRestriction_HASH) {
    return ReplicaRestrictionType::NoRestriction;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReplicaRestrictionType>(hashCode);
  }

  return ReplicaRestrictionType::NOT_SET;
}

Aws::String GetNameForReplicaRestrictionType(ReplicaRestrictionType enumValue) {
  switch (enumValue) {
    case ReplicaRestrictionType::NOT_SET:
      return {};
    case ReplicaRestrictionType::SameOrg:
      return "SameOrg";
    case ReplicaRestrictionType::NoRestriction:
      return "NoRestriction";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReplicaRestrictionTypeMapper
}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
