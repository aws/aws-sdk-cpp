/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/DisasterRecoveryType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace DisasterRecoveryTypeMapper {

static const int ADG_HASH = HashingUtils::HashString("ADG");
static const int BACKUP_BASED_HASH = HashingUtils::HashString("BACKUP_BASED");

DisasterRecoveryType GetDisasterRecoveryTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ADG_HASH) {
    return DisasterRecoveryType::ADG;
  } else if (hashCode == BACKUP_BASED_HASH) {
    return DisasterRecoveryType::BACKUP_BASED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DisasterRecoveryType>(hashCode);
  }

  return DisasterRecoveryType::NOT_SET;
}

Aws::String GetNameForDisasterRecoveryType(DisasterRecoveryType enumValue) {
  switch (enumValue) {
    case DisasterRecoveryType::NOT_SET:
      return {};
    case DisasterRecoveryType::ADG:
      return "ADG";
    case DisasterRecoveryType::BACKUP_BASED:
      return "BACKUP_BASED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DisasterRecoveryTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
