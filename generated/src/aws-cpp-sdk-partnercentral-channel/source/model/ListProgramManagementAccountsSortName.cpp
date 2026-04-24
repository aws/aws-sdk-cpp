/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsSortName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ListProgramManagementAccountsSortNameMapper {

static const int UpdatedAt_HASH = HashingUtils::HashString("UpdatedAt");

ListProgramManagementAccountsSortName GetListProgramManagementAccountsSortNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UpdatedAt_HASH) {
    return ListProgramManagementAccountsSortName::UpdatedAt;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListProgramManagementAccountsSortName>(hashCode);
  }

  return ListProgramManagementAccountsSortName::NOT_SET;
}

Aws::String GetNameForListProgramManagementAccountsSortName(ListProgramManagementAccountsSortName enumValue) {
  switch (enumValue) {
    case ListProgramManagementAccountsSortName::NOT_SET:
      return {};
    case ListProgramManagementAccountsSortName::UpdatedAt:
      return "UpdatedAt";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListProgramManagementAccountsSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
