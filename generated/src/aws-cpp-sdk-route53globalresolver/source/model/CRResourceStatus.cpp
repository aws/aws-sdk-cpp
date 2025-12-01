/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/CRResourceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace CRResourceStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int OPERATIONAL_HASH = HashingUtils::HashString("OPERATIONAL");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

CRResourceStatus GetCRResourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return CRResourceStatus::CREATING;
  } else if (hashCode == OPERATIONAL_HASH) {
    return CRResourceStatus::OPERATIONAL;
  } else if (hashCode == UPDATING_HASH) {
    return CRResourceStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return CRResourceStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CRResourceStatus>(hashCode);
  }

  return CRResourceStatus::NOT_SET;
}

Aws::String GetNameForCRResourceStatus(CRResourceStatus enumValue) {
  switch (enumValue) {
    case CRResourceStatus::NOT_SET:
      return {};
    case CRResourceStatus::CREATING:
      return "CREATING";
    case CRResourceStatus::OPERATIONAL:
      return "OPERATIONAL";
    case CRResourceStatus::UPDATING:
      return "UPDATING";
    case CRResourceStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CRResourceStatusMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
