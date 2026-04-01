/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/MembershipType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace MembershipTypeMapper {

static const int USER_HASH = HashingUtils::HashString("USER");

MembershipType GetMembershipTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USER_HASH) {
    return MembershipType::USER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MembershipType>(hashCode);
  }

  return MembershipType::NOT_SET;
}

Aws::String GetNameForMembershipType(MembershipType enumValue) {
  switch (enumValue) {
    case MembershipType::NOT_SET:
      return {};
    case MembershipType::USER:
      return "USER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MembershipTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
