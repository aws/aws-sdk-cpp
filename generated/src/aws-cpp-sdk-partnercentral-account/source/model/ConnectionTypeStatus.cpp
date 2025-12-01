/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/ConnectionTypeStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace ConnectionTypeStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");

ConnectionTypeStatus GetConnectionTypeStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ConnectionTypeStatus::ACTIVE;
  } else if (hashCode == CANCELED_HASH) {
    return ConnectionTypeStatus::CANCELED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectionTypeStatus>(hashCode);
  }

  return ConnectionTypeStatus::NOT_SET;
}

Aws::String GetNameForConnectionTypeStatus(ConnectionTypeStatus enumValue) {
  switch (enumValue) {
    case ConnectionTypeStatus::NOT_SET:
      return {};
    case ConnectionTypeStatus::ACTIVE:
      return "ACTIVE";
    case ConnectionTypeStatus::CANCELED:
      return "CANCELED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectionTypeStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
