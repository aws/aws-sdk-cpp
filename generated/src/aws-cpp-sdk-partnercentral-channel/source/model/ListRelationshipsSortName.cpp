/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/ListRelationshipsSortName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ListRelationshipsSortNameMapper {

static const int UpdatedAt_HASH = HashingUtils::HashString("UpdatedAt");

ListRelationshipsSortName GetListRelationshipsSortNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UpdatedAt_HASH) {
    return ListRelationshipsSortName::UpdatedAt;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListRelationshipsSortName>(hashCode);
  }

  return ListRelationshipsSortName::NOT_SET;
}

Aws::String GetNameForListRelationshipsSortName(ListRelationshipsSortName enumValue) {
  switch (enumValue) {
    case ListRelationshipsSortName::NOT_SET:
      return {};
    case ListRelationshipsSortName::UpdatedAt:
      return "UpdatedAt";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListRelationshipsSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
