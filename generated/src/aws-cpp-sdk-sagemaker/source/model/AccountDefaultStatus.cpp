/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/AccountDefaultStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace AccountDefaultStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

AccountDefaultStatus GetAccountDefaultStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return AccountDefaultStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return AccountDefaultStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccountDefaultStatus>(hashCode);
  }

  return AccountDefaultStatus::NOT_SET;
}

Aws::String GetNameForAccountDefaultStatus(AccountDefaultStatus enumValue) {
  switch (enumValue) {
    case AccountDefaultStatus::NOT_SET:
      return {};
    case AccountDefaultStatus::ENABLED:
      return "ENABLED";
    case AccountDefaultStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccountDefaultStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
