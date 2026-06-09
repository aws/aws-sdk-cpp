/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/AutonomousDatabaseWalletStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace AutonomousDatabaseWalletStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");

AutonomousDatabaseWalletStatus GetAutonomousDatabaseWalletStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return AutonomousDatabaseWalletStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return AutonomousDatabaseWalletStatus::UPDATING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutonomousDatabaseWalletStatus>(hashCode);
  }

  return AutonomousDatabaseWalletStatus::NOT_SET;
}

Aws::String GetNameForAutonomousDatabaseWalletStatus(AutonomousDatabaseWalletStatus enumValue) {
  switch (enumValue) {
    case AutonomousDatabaseWalletStatus::NOT_SET:
      return {};
    case AutonomousDatabaseWalletStatus::ACTIVE:
      return "ACTIVE";
    case AutonomousDatabaseWalletStatus::UPDATING:
      return "UPDATING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutonomousDatabaseWalletStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
