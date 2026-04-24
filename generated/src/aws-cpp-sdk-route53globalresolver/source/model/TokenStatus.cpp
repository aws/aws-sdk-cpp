/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/TokenStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace TokenStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int OPERATIONAL_HASH = HashingUtils::HashString("OPERATIONAL");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

TokenStatus GetTokenStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return TokenStatus::CREATING;
  } else if (hashCode == OPERATIONAL_HASH) {
    return TokenStatus::OPERATIONAL;
  } else if (hashCode == DELETING_HASH) {
    return TokenStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TokenStatus>(hashCode);
  }

  return TokenStatus::NOT_SET;
}

Aws::String GetNameForTokenStatus(TokenStatus enumValue) {
  switch (enumValue) {
    case TokenStatus::NOT_SET:
      return {};
    case TokenStatus::CREATING:
      return "CREATING";
    case TokenStatus::OPERATIONAL:
      return "OPERATIONAL";
    case TokenStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TokenStatusMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
