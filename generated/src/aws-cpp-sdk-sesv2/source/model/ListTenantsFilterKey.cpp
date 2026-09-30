/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sesv2/model/ListTenantsFilterKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {
namespace ListTenantsFilterKeyMapper {

static const int TENANT_NAME_CONTAINS_HASH = HashingUtils::HashString("TENANT_NAME_CONTAINS");
static const int SENDING_STATUS_HASH = HashingUtils::HashString("SENDING_STATUS");

ListTenantsFilterKey GetListTenantsFilterKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TENANT_NAME_CONTAINS_HASH) {
    return ListTenantsFilterKey::TENANT_NAME_CONTAINS;
  } else if (hashCode == SENDING_STATUS_HASH) {
    return ListTenantsFilterKey::SENDING_STATUS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListTenantsFilterKey>(hashCode);
  }

  return ListTenantsFilterKey::NOT_SET;
}

Aws::String GetNameForListTenantsFilterKey(ListTenantsFilterKey enumValue) {
  switch (enumValue) {
    case ListTenantsFilterKey::NOT_SET:
      return {};
    case ListTenantsFilterKey::TENANT_NAME_CONTAINS:
      return "TENANT_NAME_CONTAINS";
    case ListTenantsFilterKey::SENDING_STATUS:
      return "SENDING_STATUS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListTenantsFilterKeyMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
