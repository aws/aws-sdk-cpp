/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DefaultCategoryEffect.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DefaultCategoryEffectMapper {

static const int DENY_BY_DEFAULT_HASH = HashingUtils::HashString("DENY_BY_DEFAULT");

DefaultCategoryEffect GetDefaultCategoryEffectForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DENY_BY_DEFAULT_HASH) {
    return DefaultCategoryEffect::DENY_BY_DEFAULT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DefaultCategoryEffect>(hashCode);
  }

  return DefaultCategoryEffect::NOT_SET;
}

Aws::String GetNameForDefaultCategoryEffect(DefaultCategoryEffect enumValue) {
  switch (enumValue) {
    case DefaultCategoryEffect::NOT_SET:
      return {};
    case DefaultCategoryEffect::DENY_BY_DEFAULT:
      return "DENY_BY_DEFAULT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DefaultCategoryEffectMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
