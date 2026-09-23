/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/EntityStatusFilter.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace EntityStatusFilterMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

EntityStatusFilter GetEntityStatusFilterForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return EntityStatusFilter::ACTIVE;
  } else if (hashCode == DRAFT_HASH) {
    return EntityStatusFilter::DRAFT;
  } else if (hashCode == DISABLED_HASH) {
    return EntityStatusFilter::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EntityStatusFilter>(hashCode);
  }

  return EntityStatusFilter::NOT_SET;
}

Aws::String GetNameForEntityStatusFilter(EntityStatusFilter enumValue) {
  switch (enumValue) {
    case EntityStatusFilter::NOT_SET:
      return {};
    case EntityStatusFilter::ACTIVE:
      return "ACTIVE";
    case EntityStatusFilter::DRAFT:
      return "DRAFT";
    case EntityStatusFilter::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EntityStatusFilterMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
