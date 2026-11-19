/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rolesanywhere/model/TipSubjectType.h>

using namespace Aws::Utils;

namespace Aws {
namespace RolesAnywhere {
namespace Model {
namespace TipSubjectTypeMapper {

static const int user_HASH = HashingUtils::HashString("user");
static const int workload_HASH = HashingUtils::HashString("workload");

TipSubjectType GetTipSubjectTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == user_HASH) {
    return TipSubjectType::user;
  } else if (hashCode == workload_HASH) {
    return TipSubjectType::workload;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TipSubjectType>(hashCode);
  }

  return TipSubjectType::NOT_SET;
}

Aws::String GetNameForTipSubjectType(TipSubjectType enumValue) {
  switch (enumValue) {
    case TipSubjectType::NOT_SET:
      return {};
    case TipSubjectType::user:
      return "user";
    case TipSubjectType::workload:
      return "workload";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TipSubjectTypeMapper
}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
