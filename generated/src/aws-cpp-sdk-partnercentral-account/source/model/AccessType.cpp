/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/AccessType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace AccessTypeMapper {

static const int ALLOW_ALL_HASH = HashingUtils::HashString("ALLOW_ALL");
static const int DENY_ALL_HASH = HashingUtils::HashString("DENY_ALL");
static const int ALLOW_BY_DEFAULT_DENY_SOME_HASH = HashingUtils::HashString("ALLOW_BY_DEFAULT_DENY_SOME");

AccessType GetAccessTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOW_ALL_HASH) {
    return AccessType::ALLOW_ALL;
  } else if (hashCode == DENY_ALL_HASH) {
    return AccessType::DENY_ALL;
  } else if (hashCode == ALLOW_BY_DEFAULT_DENY_SOME_HASH) {
    return AccessType::ALLOW_BY_DEFAULT_DENY_SOME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessType>(hashCode);
  }

  return AccessType::NOT_SET;
}

Aws::String GetNameForAccessType(AccessType enumValue) {
  switch (enumValue) {
    case AccessType::NOT_SET:
      return {};
    case AccessType::ALLOW_ALL:
      return "ALLOW_ALL";
    case AccessType::DENY_ALL:
      return "DENY_ALL";
    case AccessType::ALLOW_BY_DEFAULT_DENY_SOME:
      return "ALLOW_BY_DEFAULT_DENY_SOME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessTypeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
