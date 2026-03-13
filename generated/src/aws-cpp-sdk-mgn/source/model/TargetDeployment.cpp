/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/TargetDeployment.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace TargetDeploymentMapper {

static const int SINGLE_ACCOUNT_HASH = HashingUtils::HashString("SINGLE_ACCOUNT");
static const int MULTI_ACCOUNT_HASH = HashingUtils::HashString("MULTI_ACCOUNT");

TargetDeployment GetTargetDeploymentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SINGLE_ACCOUNT_HASH) {
    return TargetDeployment::SINGLE_ACCOUNT;
  } else if (hashCode == MULTI_ACCOUNT_HASH) {
    return TargetDeployment::MULTI_ACCOUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TargetDeployment>(hashCode);
  }

  return TargetDeployment::NOT_SET;
}

Aws::String GetNameForTargetDeployment(TargetDeployment enumValue) {
  switch (enumValue) {
    case TargetDeployment::NOT_SET:
      return {};
    case TargetDeployment::SINGLE_ACCOUNT:
      return "SINGLE_ACCOUNT";
    case TargetDeployment::MULTI_ACCOUNT:
      return "MULTI_ACCOUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TargetDeploymentMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
