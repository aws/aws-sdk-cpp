/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/verifiedpermissions/model/AliasState.h>

using namespace Aws::Utils;

namespace Aws {
namespace VerifiedPermissions {
namespace Model {
namespace AliasStateMapper {

static const int Active_HASH = HashingUtils::HashString("Active");
static const int PendingDeletion_HASH = HashingUtils::HashString("PendingDeletion");

AliasState GetAliasStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Active_HASH) {
    return AliasState::Active;
  } else if (hashCode == PendingDeletion_HASH) {
    return AliasState::PendingDeletion;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AliasState>(hashCode);
  }

  return AliasState::NOT_SET;
}

Aws::String GetNameForAliasState(AliasState enumValue) {
  switch (enumValue) {
    case AliasState::NOT_SET:
      return {};
    case AliasState::Active:
      return "Active";
    case AliasState::PendingDeletion:
      return "PendingDeletion";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AliasStateMapper
}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
