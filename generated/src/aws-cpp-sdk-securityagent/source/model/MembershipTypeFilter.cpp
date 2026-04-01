/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/MembershipTypeFilter.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace MembershipTypeFilterMapper {

static const int USER_HASH = HashingUtils::HashString("USER");
static const int ALL_HASH = HashingUtils::HashString("ALL");

MembershipTypeFilter GetMembershipTypeFilterForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USER_HASH) {
    return MembershipTypeFilter::USER;
  } else if (hashCode == ALL_HASH) {
    return MembershipTypeFilter::ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MembershipTypeFilter>(hashCode);
  }

  return MembershipTypeFilter::NOT_SET;
}

Aws::String GetNameForMembershipTypeFilter(MembershipTypeFilter enumValue) {
  switch (enumValue) {
    case MembershipTypeFilter::NOT_SET:
      return {};
    case MembershipTypeFilter::USER:
      return "USER";
    case MembershipTypeFilter::ALL:
      return "ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MembershipTypeFilterMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
