/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/LimitSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace LimitSourceMapper {

static const int DIRECT_USER_HASH = HashingUtils::HashString("DIRECT_USER");
static const int GROUP_HASH = HashingUtils::HashString("GROUP");
static const int ROLE_HASH = HashingUtils::HashString("ROLE");
static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
static const int SYSTEM_DEFAULT_HASH = HashingUtils::HashString("SYSTEM_DEFAULT");

LimitSource GetLimitSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DIRECT_USER_HASH) {
    return LimitSource::DIRECT_USER;
  } else if (hashCode == GROUP_HASH) {
    return LimitSource::GROUP;
  } else if (hashCode == ROLE_HASH) {
    return LimitSource::ROLE;
  } else if (hashCode == ACCOUNT_HASH) {
    return LimitSource::ACCOUNT;
  } else if (hashCode == SYSTEM_DEFAULT_HASH) {
    return LimitSource::SYSTEM_DEFAULT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LimitSource>(hashCode);
  }

  return LimitSource::NOT_SET;
}

Aws::String GetNameForLimitSource(LimitSource enumValue) {
  switch (enumValue) {
    case LimitSource::NOT_SET:
      return {};
    case LimitSource::DIRECT_USER:
      return "DIRECT_USER";
    case LimitSource::GROUP:
      return "GROUP";
    case LimitSource::ROLE:
      return "ROLE";
    case LimitSource::ACCOUNT:
      return "ACCOUNT";
    case LimitSource::SYSTEM_DEFAULT:
      return "SYSTEM_DEFAULT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LimitSourceMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
